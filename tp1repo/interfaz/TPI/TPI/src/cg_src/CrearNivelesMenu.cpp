#include "CrearNivelesMenu.h"
#include "Assets.hpp"

bool CrearNivelesMen::init()
{
	return true;
}

bool CrearNivelesMen::loadMedia()
{
	SDL_StartTextInput();

	return true;
}



void CrearNivelesMen::ProcessMouse()
{
	unsigned int size = elems.size();
	for (unsigned int i = 0; i < size; i++)
	{
		for (unsigned int j = 0; j < elems[i].function.size(); j++)
		{
			if (shouldCall(elems[i].key[j], elems[i].eventAsk[j], elems[i].lastState[j]))
			{
				elems[i].theActions.callResponse(elems[i].function[j], 0.1);
			}
		}
	}
}


void CrearNivelesMen::update(double dt)
{
	anim->lastTime += dt;
	if (anim->lastTime > 0.05)
	{
		anim->lastTime = 0;
		anim->frame = (anim->frame + 1) % 8;
	}
}

void CrearNivelesMen::postUpdate()
{
	ProcessMouse();
}

void CrearNivelesMen::render()
{
	SDL_Color c = { 0x00, 0x00, 0x00, 0x00 };
	
	SDL_SetRenderDrawColor(App::gRenderer, 0x14, 0x14, 0x14, 0xFF);
	SDL_RenderClear(App::gRenderer);

	anim->Render();
	
	//habilities->Render();
	//finalButtonHabs->Render();

	for (unsigned int i = 0; i < inputTexts.size(); i++)
	{
		inputTexts[i]->Render();
	}

	//createSpawn->Render();
	//create->Render();
	//back->Render();
	createsObjs->Render();
	createsObjs2->Render();
	lista->Render();
	//arrastrar->Render();
	tab->Render();
	//Update screen
	SDL_RenderPresent(App::gRenderer);
}

void CrearNivelesMen::close()
{}


int CrearNivelesMen::run()
{
	//Event handler
	SDL_Event e;

	//Current animation frame
	double t = 0.0;
	double dt = 1.0 / logicFPS;

	double currentTime = 0.0;
	double accumulator = 0.0;

	//State toDraw;

	//TODO: Add in the Scene loading screen
	loadMedia();

	//While application is running
	while (!quit)
	{
		double newTime = SDL_GetTicks() / 1000.0;
		//Handle events on queue
		while (SDL_PollEvent(&e) != 0)
		{
			//User requests quit
			if (e.type == SDL_QUIT)
			{
				ret = 0;
				quit = true;
				goback(1);
			}
			else if (e.type == SDL_TEXTINPUT || e.type == SDL_KEYDOWN)
			{
				if (e.type == SDL_KEYDOWN && (e.key.keysym.sym == SDLK_ESCAPE))
				{
					ret = 0;
					quit = true;
					goback(1);
				}
				if (e.type == SDL_KEYDOWN && (e.key.keysym.sym == SDLK_TAB || e.key.keysym.sym == SDLK_KP_PLUS))
				{
					actual = (actual + 1) % inputTexts.size();
				}
				if (e.type == SDL_KEYDOWN  && (e.key.keysym.sym == SDLK_KP_ENTER || e.key.keysym.sym == SDLK_RETURN))
				{
					yaCreada = false;
					createSpawnList(1.0);
				}
				if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_SPACE)
				{
					createObj(1.0);
				}

				if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_BACKSPACE && inputTexts[actual]->inputTexts.length() > 1)
				{
					inputTexts[actual]->inputTexts = inputTexts[actual]->inputTexts.substr(0, inputTexts[actual]->inputTexts.length() - 1);
					inputTexts[actual]->changeText();
				}
				if (e.type == SDL_TEXTINPUT && isANumber(e.text.text) && std::stoi(inputTexts[actual]->inputTexts + e.text.text) < 999)
				{
					inputTexts[actual]->inputTexts += e.text.text;
					inputTexts[actual]->changeText();
					//std::cout << std::stoi(inputTexts[actual]->inputTexts) << std::endl;
				}
			}
		}

		double delta = newTime - currentTime;
		currentTime = newTime;
		accumulator += delta;

		while (accumulator >= dt)
		{
			//previous = current;
			t += dt;
			accumulator -= dt;

			//Call update from game
			update(dt);

		}

		postUpdate();

		//toDraw = current.interpolate(previous, accumulator/dt);
		render();

		double drawTime = SDL_GetTicks() / 1000.0;
		drawTime = drawTime - newTime;

		while (drawTime < 1.0 / renderFPS)
		{
			drawTime = (SDL_GetTicks() / 1000.0) - newTime;
		}/**/
	}

	return ret;
	close();
}