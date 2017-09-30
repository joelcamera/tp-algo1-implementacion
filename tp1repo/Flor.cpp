#include "Flor.h"
#include <cassert>

using namespace std;


Flor::Flor(){}

Flor::Flor(Vida v, int cP, vector<Habilidad> hs)
{
	quitarRepetidosHabilidad(hs);

	if(atacarPertenece(hs)){
		this->_cuantoPega = 12 / hs.size();
	} else {
		this->_cuantoPega = 0;
	}
	this->_vida = 100 / (hs.size() + 1);
	this->_habilidades = hs;
}

Vida Flor::vidaF()
{
	return this->_vida;
}

int Flor::cuantoPegaF()
{
	return this->_cuantoPega;
}

vector<Habilidad>& Flor::habilidadesF()
{
	return this->_habilidades;
}

void Flor::Mostrar(ostream& os) const
{
	int i = 0;

	os << "INFO. DE LA FLOR:" << endl;
	os << "Vida de la Flor: " << this->_vida << endl;
	os << "Cuanto Pega la Flor: " << this->_cuantoPega << endl;
	os << "Habilidad(es) de la Flor: [ ";

	while(i < this->_habilidades.size()){

		if(this->_habilidades.at(i) == Atacar){
			os << "Atacar ";
		} else if(this->_habilidades.at(i) == Generar) {
			os << "Generar ";
		} else {
			os << "Explotar ";
		}

		i++;
	}
	os << "]" << endl << endl;
}

void Flor::Guardar(ostream& os) const
{
	os << "{ F ";

	string strVida = to_string(this->_vida);
	os << strVida << " ";

	string strCuantoPega = to_string(this->_cuantoPega);
	os << strCuantoPega << " [ ";

	int i = 0;
	
	while (i < this->_habilidades.size()){
		if(this->_habilidades.at(i) == 0){
			os << "Generar ";
		} else if(this->_habilidades.at(i) == 1){
			os << "Atacar ";
		} else{
			os << "Explotar ";
		}
		i++;
	}	
	os << "] }";
}

void Flor::Cargar(istream& is)
{
	string buscaValores;
	vector<Habilidad> hs;

	//lo unico que me interesa saber es el vector habilidad, con eso creo la flor
	while(buscaValores != "]"){

		getline(is,buscaValores,' ');
		
		if(buscaValores == "Atacar"){	
			hs.push_back(Atacar);
		} else if(buscaValores == "Generar") {
			hs.push_back(Generar);
		} else if(buscaValores == "Explotar"){
			hs.push_back(Explotar);
		}	
	}

	getline(is,buscaValores,' '); // "}" esto lo pongo para los otros cargar

	quitarRepetidosHabilidad(hs);
	if(atacarPertenece(hs)){
		this->_cuantoPega = 12 / hs.size();
	} else {
		this->_cuantoPega = 0;
	}
	this->_vida = 100 / (hs.size() + 1);
	this->_habilidades = hs;

}

void Flor::quitarRepetidosHabilidad(vector<Habilidad>& hs){
	int i = hs.size() - 1;
	int contadorA = 0;
	int contadorE = 0;
	int contadorG = 0;

	while(i >= 0){

		if(hs.at(i) == Generar){
			contadorG += 1;
		} else if(hs.at(i) == Atacar){
			contadorA += 1;
		} else {
			contadorE += 1;
		}
		hs.pop_back();
		i--;
	}

	if(contadorG > 0){
		hs.push_back(Generar);
	}
	if(contadorA > 0){
		hs.push_back(Atacar);
	}
	if(contadorE > 0){
		hs.push_back(Explotar);
	}
}

bool Flor::atacarPertenece(vector<Habilidad> hs){
	int i = 0;
	bool res = false;

	while(i < hs.size()){
		if(hs.at(i) == Atacar)
			res = true;
		i++;
	}
	return res;
}
