#include "Juego.h"
#include "Vampiro.h"
#include "Nivel.h"
#include <iostream>
#include <fstream>


using namespace std;

int main(){

  /*cout << " Trabajo practico Flores vs Vampiros" << endl;
  
  vector<Habilidad> hab;
  hab.push_back(Atacar);
  
  vector<Habilidad> hab2;
  hab2.push_back(Atacar);
  hab2.push_back(Generar);
  
  vector<Habilidad> hab3;
  hab3.push_back(Explotar);
  hab3.push_back(Generar);
  
  Flor f(25,0,hab3);
  
  cout << f.vidaF() << ' ' << f.cuantoPegaF() << endl;
  
  Vampiro v(Caminante,50,50);
  
  cout << v.vidaV() << ' ' << v.cuantoPegaV() << endl;
  
  vector<VampiroEnEspera> spawn;
  spawn.push_back(VampiroEnEspera(v,2,2));
  
  Nivel n(5,5,100,spawn);
  
  cout << n.solesN() << endl;
  
  n.agregarFlor(f, Posicion(2,2));
  
  cout << n.solesN() << endl;
  
  n.pasarTurno();
  
  cout << n.solesN() << endl;
  
  cout << n.terminado() << ' ' << n.obsesivoCompulsivo() << endl;
  
  
  vector<Flor> fs;
  fs.push_back(f);
  
  vector<Vampiro> vs;
  vs.push_back(v);
  
  Juego j(fs,vs);
  
  j.agregarNivel(n,0);
  
  cout << j.muyDeExactas() << endl; */
	
/* TEST CREACION DE NIVEL + GUARDAR/MOSTRAR -NO BORRAR-
	
	cout << "Comenzando ejecucion..." << endl;
	Vida vida = 100;
	ClaseVampiro cv = Caminante;
	VampiroEnEspera v1 = VampiroEnEspera(Vampiro(cv, vida, 10), 1, 1);
	VampiroEnEspera v2 = VampiroEnEspera(Vampiro(cv, vida, 10), 1, 2);
	VampiroEnEspera v3 = VampiroEnEspera(Vampiro(cv, vida, 10), 1, 3);
	VampiroEnEspera v4 = VampiroEnEspera(Vampiro(cv, vida, 10), 1, 4);
	VampiroEnEspera v5 = VampiroEnEspera(Vampiro(cv, vida, 10), 1, 5);
	VampiroEnEspera v6 = VampiroEnEspera(Vampiro(cv, vida, 10), 3, 5);
	VampiroEnEspera v7 = VampiroEnEspera(Vampiro(cv, vida, 10), 2, 5);
	std::vector<VampiroEnEspera> spawning = std::vector<VampiroEnEspera>();
	spawning.push_back(v2);
	spawning.push_back(v3);
	spawning.push_back(v1);
	spawning.push_back(v5);
	spawning.push_back(v4);
	spawning.push_back(v6);
	spawning.push_back(v7);
	cout << "Todo creado, se crea nivel" << endl;
	Nivel nivel = Nivel(10, 10, 50, spawning);
*/

 /* ofstream osn;

  nivel.Guardar(osn);
  nivel.Mostrar(osn); */
  


  /* TEST DE GUARDAR 
  std::vector<Habilidad> h1;
  h1.push_back(Generar);
  h1.push_back(Explotar);
  h1.push_back(Explotar);
  h1.push_back(Explotar);
  h1.push_back(Explotar);
  h1.push_back(Atacar);

  Flor f1(10,10,h1);

  std::vector<Habilidad> h2;
  h2.push_back(Atacar);
  h2.push_back(Atacar);
  h2.push_back(Atacar);
  h2.push_back(Atacar);
  h2.push_back(Generar);
  h2.push_back(Generar);
  h2.push_back(Generar);
  h2.push_back(Generar);

  Flor f2(10,10,h2);

  Flor f3,f4,f5,f6;
  f3 = f1;
  f4=f1;
  f5 = f2;
  f6 = f2;
  ofstream osf("f.txt");

  f.Guardar(osf);
  //f.Mostrar(osf);
  osf.close();

  std::vector<Flor> flores;
  flores.push_back(f1);
  flores.push_back(f2);

  Vampiro vamp1(Desviado,10,10);
  Vampiro vamp2(Caminante,10,10);
  Vampiro vamp3(Desviado,10,10);
  Vampiro vamp4(Caminante,10,50);

  std::vector<Vampiro> vamps;
  vamps.push_back(vamp1);
  vamps.push_back(vamp2);
  vamps.push_back(vamp3);
  vamps.push_back(vamp4);

  ofstream osV("v.txt");

  vamp.Guardar(osV);
  osV.close();
  */


 /*TEST AGREGARFLOR, OBSESIVOCOMPULSIVO, PASAR TURNO 

  Vida vida = 100;
  ClaseVampiro cv = Caminante;
  VampiroEnEspera v1 = VampiroEnEspera(Vampiro(cv, vida, 10), 1, 1);
  VampiroEnEspera v2 = VampiroEnEspera(Vampiro(cv, vida, 10), 1, 2);
  VampiroEnEspera v3 = VampiroEnEspera(Vampiro(cv, vida, 10), 1, 3);
  VampiroEnEspera v4 = VampiroEnEspera(Vampiro(cv, vida, 10), 1, 4);
  VampiroEnEspera v5 = VampiroEnEspera(Vampiro(cv, vida, 10), 1, 5);
  VampiroEnEspera v6 = VampiroEnEspera(Vampiro(cv, vida, 10), 3, 5);
  VampiroEnEspera v7 = VampiroEnEspera(Vampiro(cv, vida, 10), 2, 5);
  std::vector<VampiroEnEspera> spawning = std::vector<VampiroEnEspera>();
  spawning.push_back(v2);
  spawning.push_back(v3);
  spawning.push_back(v1);
  spawning.push_back(v5);
  spawning.push_back(v4);
  spawning.push_back(v6);
  spawning.push_back(v7);
  cout << "Todo creado, se crea nivel" << endl;
  Nivel nivel = Nivel(10, 10, 50, spawning);

	Flor a1=Flor(1, 1, {Atacar, Generar});
	Flor a2=Flor(1, 1, {Atacar, Explotar});
	Flor n1=Flor(1, 1, {Atacar});
	Flor n2=Flor(1, 1, {Atacar});
	nivel.agregarFlor(a1, Posicion(1,1));
  nivel.agregarFlor(n2, Posicion(1,3));
  nivel.agregarFlor(n1, Posicion(1,2));
	nivel.agregarFlor(a2, Posicion(1,4));
  nivel.agregarFlor(a2, Posicion(3,4));
  nivel.agregarFlor(a2, Posicion(2,4));
  nivel.agregarFlor(a2, Posicion(3,3));
  nivel.agregarFlor(a2, Posicion(2,2));
  nivel.agregarFlor(a1, Posicion(3,1));


  int i = 0;

	nivel.pasarTurno();
  cout << "lista de flores: " << nivel.floresN().size() << endl;
  while(i < nivel.floresN().size()){
    cout << "vida de la flor: " << nivel.floresN().at(i).vida << endl;
    i++;
  }
  cout << "lista vampiros: " << nivel.vampirosN().size() << endl;
  cout << "cantidad de soles: " << nivel.solesN() << endl << endl;
  cout << "por donde anda mi vampiro: " << nivel.vampirosN().at(0).pos.fila << endl;

  i = 0;
  nivel.pasarTurno();
  cout << "lista de flores: " << nivel.floresN().size() << endl;
  while(i < nivel.floresN().size()){
    cout << "vida de la flor: " << nivel.floresN().at(i).vida << endl;
    i++;
  }
  cout << "lista vampiros: " << nivel.vampirosN().size() << endl;
  cout << "cantidad de soles: " << nivel.solesN() << endl << endl;
  cout << "por donde anda mi vampiro: " << nivel.vampirosN().at(0).pos.fila << endl;
 
  i = 0;
  nivel.pasarTurno();
  cout << "lista de flores: " << nivel.floresN().size() << endl;
  while(i < nivel.floresN().size()){
    cout << "vida de la flor: " << nivel.floresN().at(i).vida << endl;
    i++;
  }
  cout << "lista vampiros: " << nivel.vampirosN().size() << endl;
  cout << "cantidad de soles: " << nivel.solesN() << endl << endl;
  cout << "por donde anda mi vampiro: " << nivel.vampirosN().at(0).pos.fila << endl;
  
  i = 0;
  nivel.pasarTurno();
  cout << "lista de flores: " << nivel.floresN().size() << endl;
  while(i < nivel.floresN().size()){
    cout << "vida de la flor: " << nivel.floresN().at(i).vida << endl;
    i++;
  }
  cout << "lista vampiros: " << nivel.vampirosN().size() << endl;
  cout << "cantidad de soles: " << nivel.solesN() << endl << endl;
  cout << "por donde anda mi vampiro: " << nivel.vampirosN().at(0).pos.fila << endl;

  i = 0;
  nivel.pasarTurno();
  cout << "lista de flores: " << nivel.floresN().size() << endl;
  while(i < nivel.floresN().size()){
    cout << "vida de la flor: " << nivel.floresN().at(i).vida << endl;
    i++;
  }
  cout << "lista vampiros: " << nivel.vampirosN().size() << endl;
  cout << "cantidad de soles: " << nivel.solesN() << endl << endl;
  cout << "por donde anda mi vampiro: " << nivel.vampirosN().at(0).pos.fila << endl;


  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();
  nivel.pasarTurno();  

  cout << "lista de flores: " << nivel.floresN().size() << endl;

  while(i < nivel.floresN().size()){
    cout << "vida de la flor: " << nivel.floresN().at(i).vida << endl;
    i++;
  }
  cout << "lista vampiros: " << nivel.vampirosN().size() << endl;
  cout << "cantidad de soles: " << nivel.solesN() << endl << endl;
  cout << "por donde anda mi vampiro: " << nivel.vampirosN().at(0).pos.fila << endl;*/

/* TEST MOSTRAR

  std::vector<Habilidad> h1;
  h1.push_back(Atacar);

  std::vector<Habilidad> h2;
  h2.push_back(Generar);
  h2.push_back(Explotar);

  std::vector<Habilidad> h3;
  h3.push_back(Atacar);
  h3.push_back(Generar);
  h3.push_back(Explotar);

  Flor f1(10,10,h1);
  Flor f2(10,10,h2);
  Flor f3(10,10,h3);

  //f1.Mostrar(cout);
  //f2.Mostrar(cout);
  //f3.Mostrar(cout);

  Vampiro v1(Desviado,10,10);
  Vampiro v2(Caminante,50,50);
  Vampiro v3(Desviado,100,90);
  Vampiro v4(Desviado,33,12);
  Vampiro v5(Caminante,45,93);
  Vampiro v6(Desviado,34,66);
  Vampiro v7(Caminante,11,74);


  //v1.Mostrar(cout);
  //v2.Mostrar(cout);
  //v3.Mostrar(cout);

  VampiroEnEspera vamp1(v1,10,10);
  VampiroEnEspera vamp2(v2,30,30);
  VampiroEnEspera vamp3(v3,35,23);

  std::vector<VampiroEnEspera> spawninglist;

  spawninglist.push_back(vamp1);
  spawninglist.push_back(vamp2);
  spawninglist.push_back(vamp3);

  Nivel n1(50,50,10,spawninglist);

  //n1.Mostrar(cout);

  std::vector<Flor> vectorFlor;
  vectorFlor.push_back(f1);
  vectorFlor.push_back(f2);
  vectorFlor.push_back(f3);

  std::vector<Vampiro> vectorVamp;
  vectorVamp.push_back(v1);
  vectorVamp.push_back(v2);
  vectorVamp.push_back(v3);
  vectorVamp.push_back(v4);

  Juego j(vectorFlor,vectorVamp);

  //j.Mostrar(cout);
  */

  /*  TEST DE CARGAR 
  
  Vampiro vamp1;
  Flor f;
  Nivel n;
  Juego game;

  ifstream is("cargarJuego");

  if(is.is_open()){
    game.Cargar(is);
    is.close();
  }

  cout << "Cree juego" << endl;
  cout << "Cantidad de flores del juego: " << game.floresJ().size() << endl;
  cout << "Cantidad de vampiros del juego: " << game.vampirosJ().size() << endl;
  cout << "cantidad de niveles del juego: " << game.nivelesJ().size() << endl;

  cout << "ancho del nivel: " << n.anchoN() << endl;
  cout << "alto del nivel: " << n.altoN() << endl;
  cout << "turno del nivel: " << n.turnoN() << endl;
  cout << "soles del nivel: " << n.solesN() << endl;
  cout << "longitud lista flores: " << n.floresN().size() << endl;
  cout << "longitud lista vampiros: " << n.vampirosN().size() << endl;
  cout << "longitud lista de spawning: " << n.spawningN().size() << endl;
  
  cout << "Cree Flor" << endl;
  cout << "vida de la flor: " << f.vidaF() << endl;
  cout << "cuanto pega la flor: " << f.cuantoPegaF() << endl;
  cout << "habilidades de la flor: ";

  int i = 0;

  while(i < f.habilidadesF().size()){
    cout << f.habilidadesF().at(i) << " ";
    i++;
  }
  cout << endl;

  cout << "Cree vampiro" << endl;
  cout << "vida del vampiro: " << vamp1.vidaV() << endl;
  cout << "cuanto pega el vampiro: " << vamp1.cuantoPegaV() << endl;
  cout << "clase del vampiro: " << vamp1.claseV() << endl;*/
  

  /* TEST DE agregarNivel 
  Juego juego = Juego();
  std::vector<VampiroEnEspera> vampiros = std::vector<VampiroEnEspera>();
  ClaseVampiro cv = Caminante;
  Vampiro vampiro = Vampiro(cv, 60, 12);
  VampiroEnEspera vampiroEnEspera1 = VampiroEnEspera(vampiro, 1, 2);
  VampiroEnEspera vampiroEnEspera2 = VampiroEnEspera(vampiro, 1, 2);
  vampiros.push_back(vampiroEnEspera1);
  Nivel nivel1 = Nivel(10, 10, 10, vampiros);
  Nivel nivel2 = Nivel(20, 20, 20, vampiros);
  Nivel nivel3 = Nivel(30, 30, 30, vampiros);
  Nivel nivel4 = Nivel(40, 40, 40, vampiros);
  juego.agregarNivel(nivel1, 0);
  juego.agregarNivel(nivel2, 1);
  juego.agregarNivel(nivel3, 2);
  juego.agregarNivel(nivel4, 3);
  
  int i = 0;
  while(i < juego.nivelesJ().size()){
	  Nivel nivel = juego.nivelesJ().at(i);
	  cout << "Mostrando flor..." << i << endl;
	  nivel.Mostrar(cout);
	  i++;
  }
   */
  
  /* TEST estoSaleFacil
  Juego juego = Juego();
  std::vector<VampiroEnEspera> vampiros = std::vector<VampiroEnEspera>();
  ClaseVampiro cv = Caminante;
  Vampiro vampiro = Vampiro(cv, 60, 12);
  VampiroEnEspera vampiroEnEspera1 = VampiroEnEspera(vampiro, 1, 2);
  vampiros.push_back(vampiroEnEspera1);
  Nivel nivel1 = Nivel(10, 10, 10, vampiros);
  Nivel nivel2 = Nivel(20, 20, 20, vampiros);
  Nivel nivel3 = Nivel(30, 30, 30, vampiros);
  Nivel nivel4 = Nivel(40, 40, 40, vampiros);
  juego.agregarNivel(nivel1, 0);
  juego.agregarNivel(nivel4, 1);
  juego.agregarNivel(nivel3, 2);
  juego.agregarNivel(nivel2, 3);
  
  std::vector<Nivel> nivelesFaciles = juego.estosSaleFacil();
  int j = 0;
  while(j < nivelesFaciles.size()){
	  nivelesFaciles.at(j).Mostrar(cout);
	  j++;
  }
  */
  

  /* TEST altoCheat
  Juego juego = Juego();
  std::vector<VampiroEnEspera> vampiros = std::vector<VampiroEnEspera>();
  ClaseVampiro cv = Caminante;
  Vampiro vampiro1 = Vampiro(cv, 60, 12);
  Vampiro vampiro2 = Vampiro(cv, 60, 12);
  VampiroEnEspera vampiroEnEspera1 = VampiroEnEspera(vampiro1, 1, 2);
  VampiroEnEspera vampiroEnEspera2 = VampiroEnEspera(vampiro2, 1, 2);
  vampiros.push_back(vampiroEnEspera1);
  vampiros.push_back(vampiroEnEspera2);
  Nivel nivel1 = Nivel(10, 10, 10, vampiros);
  Nivel nivel2 = Nivel(20, 20, 20, vampiros);
  Nivel nivel3 = Nivel(30, 30, 30, vampiros);
  Nivel nivel4 = Nivel(40, 40, 40, vampiros);
  nivel3.pasarTurno();
  juego.agregarNivel(nivel1, 0);
  juego.agregarNivel(nivel2, 1);
  juego.agregarNivel(nivel3, 2);
  juego.agregarNivel(nivel4, 3);
  juego.nivelesJ()[2].Mostrar(cout);
  juego.altoCheat(2);
  juego.nivelesJ()[2].Mostrar(cout); */

  /* TEST altocheat v.2
  Juego juego = Juego();
  ifstream is ("niv.txt");
  Nivel niv= Nivel();
  if (is.is_open()){
	  niv.Cargar(is);
	  niv.Mostrar(cout);
  }
  else cout << "Mal!" << endl;
  juego.agregarNivel(niv, 0);
  //juego.nivelesJ().at(0).pasarTurno();
  juego.Mostrar(cout);
  juego.altoCheat(0);
  juego.Mostrar(cout); */

   /* TEST muyDeExactas 
   
   Juego juego = Juego();
   cout << "Muy de exactas: " << juego.muyDeExactas() << endl;
   */
   
   /* TEST pasarTurno
   
   std::vector<VampiroEnEspera> vampiros = std::vector<VampiroEnEspera>();
  ClaseVampiro cv = Desviado;
  Vampiro vampiro = Vampiro(cv, 100, 40);
  VampiroEnEspera vampiroEnEspera1 = VampiroEnEspera(vampiro, 3, 1);
  VampiroEnEspera vampiroEnEspera2 = VampiroEnEspera(vampiro, 3, 2);
  VampiroEnEspera vampiroEnEspera3 = VampiroEnEspera(vampiro, 3, 3);
  VampiroEnEspera vampiroEnEspera4 = VampiroEnEspera(vampiro, 3, 4);
  VampiroEnEspera vampiroEnEspera5 = VampiroEnEspera(vampiro, 3, 5);
  VampiroEnEspera vampiroEnEspera6 = VampiroEnEspera(vampiro, 3, 6);
  VampiroEnEspera vampiroEnEspera7 = VampiroEnEspera(vampiro, 3, 7);
  vampiros.push_back(vampiroEnEspera1);
  /*vampiros.push_back(vampiroEnEspera2);
  vampiros.push_back(vampiroEnEspera3);
  vampiros.push_back(vampiroEnEspera4);
  vampiros.push_back(vampiroEnEspera5);
  vampiros.push_back(vampiroEnEspera6);
  vampiros.push_back(vampiroEnEspera7);*/
  /*Nivel nivel1 = Nivel(10, 10, 10, vampiros);
  Habilidad h1 = Atacar;
  Habilidad h2 = Explotar;
  Habilidad h3 = Generar;
  vector<Habilidad> vh1 = vector<Habilidad>();
  vector<Habilidad> vh2 = vector<Habilidad>();
  vector<Habilidad> vh3 = vector<Habilidad>();
  vh1.push_back(h1);
  vh2.push_back(h2);
  vh3.push_back(h3);
  Flor f1 = Flor(10, 10, vh1);
  Flor f2 = Flor(10, 10, vh2);
  Flor f3 = Flor(10, 10, vh3);
  Posicion p1 = Posicion(3, 8);
  Posicion p2 = Posicion(1, 7);
  nivel1.agregarFlor(f2, p2);
  //nivel1.agregarFlor(f2, p2);
  //cout << endl;
  //cout << "Inicio primer pasarTurno" <<endl;
  nivel1.Mostrar(cout);
  nivel1.pasarTurno();
  nivel1.Mostrar(cout);
  //nivel1.Mostrar(cout);
  //cout << "Fin primer pasarTurno" <<endl;
   //cout << endl;
  //cout << "Inicio segundo pasarTurno" <<endl;
  nivel1.pasarTurno();
  nivel1.Mostrar(cout);
  nivel1.pasarTurno();
  nivel1.Mostrar(cout);
  nivel1.pasarTurno();
  nivel1.Mostrar(cout);
  nivel1.pasarTurno();
  nivel1.Mostrar(cout);*/
  /*nivel1.pasarTurno();
  nivel1.pasarTurno();
  nivel1.pasarTurno();
  nivel1.pasarTurno();
  nivel1.pasarTurno();
  nivel1.pasarTurno();*/
  //cout << "Fin segundo pasarTurno" <<endl;
  //nivel1.Mostrar(cout);
  /* */

  /* TEST VAMPIRO

  Vampiro vampBien1(Caminante,30,10);
  Vampiro vampBien2(Desviado,50,12);
  Vampiro vampMal1(Caminante,-1,-1);
  Vampiro vampMal2(Desviado,101,-1);

  // mostrar vampiros
  vampBien1.Mostrar(cout);
  vampBien2.Mostrar(cout);
  vampMal1.Mostrar(cout);
  vampMal2.Mostrar(cout);

  // guardar vampiros
  ofstream os1("miVampiro");

  if(os1.is_open()){
    vampBien1.Guardar(os1);
    os1.close();
  }

  // cargar vampiros
  Vampiro vampCargado;
  ifstream is1("miVampiro");

  if(is1.is_open()){
    vampCargado.Cargar(is1);
    is1.close();
  }
  cout << "vampiro cargado: " << endl;
  vampCargado.Mostrar(cout);
  */

  /* TEST FLOR 

  Flor florBien1(1,1,{Atacar,Generar,Explotar});
  Flor florBien2(1,1,{Generar,Explotar});
  Flor florBien3(1,1,{Generar});
  Flor florBien4(1,1,{Atacar});
  Flor florMal1(1,1,{Atacar,Atacar,Generar,Generar});
  Flor florMal2(1,1,{Generar,Generar,Generar,Explotar,Explotar,Explotar,Explotar,Atacar,Atacar,Atacar,Atacar,});

  cout << endl << "flores bien" << endl;
  florBien1.Mostrar(cout);
  florBien2.Mostrar(cout);
  florBien3.Mostrar(cout);
  florBien4.Mostrar(cout);

  cout << endl << "flores mal" << endl;
  florMal1.Mostrar(cout);
  florMal2.Mostrar(cout);

  // guardar flor
  ofstream os("miFlor");

  if(os.is_open()){
    florBien1.Guardar(os);
    os.close();
  }

  //cargar flor
  Flor florCargada;
  ifstream is("miFlor");

  if(is.is_open()){
    florCargada.Cargar(is);
    is.close();
  }
  florCargada.Mostrar(cout);
  */

  /* TEST NIVEL 

  Flor f1(1,1,{Explotar,Generar});
  //Flor f2(1,1,{Explotar,Generar});
  //Flor f3(1,1,{Atacar,Generar,Explotar});

  //Vampiro v1(Desviado,15,3);
  Vampiro v2(Desviado,50,10);
  //Vampiro v3(Desviado,10,10);

  //VampiroEnEspera vamp1(v1,2,3);
  VampiroEnEspera vamp2(v2,3,1);
  //VampiroEnEspera vamp3(v3,1,1);
  vector<VampiroEnEspera> spawninglist;
  //spawninglist.push_back(vamp1);
  spawninglist.push_back(vamp2);
  //spawninglist.push_back(vamp3);

  Nivel n1(5,5,10,spawninglist);

  // comprar soles
  //cout << "soles antes: " << n1.solesN() <<  endl;
  n1.comprarSoles(10);
  n1.comprarSoles(30);
  //cout << "soles despues: " << n1.solesN() <<  endl;

  // agregar flor
  Posicion pos1(1,2);
  Posicion pos2(2,2);
  Posicion pos3(3,3);

  n1.agregarFlor(f1,pos1);
  //n1.agregarFlor(f2,pos2);
  //n1.agregarFlor(f3,pos3);  
  
  // obsesivo compulsivo
  //cout << "obsesivo compulsivo: " << n1.obsesivoCompulsivo() << endl;

  // pasar turno
  n1.pasarTurno();
  if(n1.floresN().size() > 0){
    cout << "posicion flor: " << n1.floresN()[0].pos.fila << " " << n1.floresN()[0].pos.columna << endl;
    cout << "vida flor: " << n1.floresN()[0].vida << endl;
  }
  if(n1.vampirosN().size() > 0){
    cout << "posicion vampiro: " << n1.vampirosN()[0].pos.fila << " " << n1.vampirosN()[0].pos.columna << endl;
    cout << "vida vampiro: " << n1.vampirosN()[0].vida << endl;
  }
  cout << "soles del nivel: " << n1.solesN() << endl << endl;

  n1.pasarTurno();
  if(n1.floresN().size() > 0){
    cout << "posicion flor: " << n1.floresN()[0].pos.fila << " " << n1.floresN()[0].pos.columna << endl;
    cout << "vida flor: " << n1.floresN()[0].vida << endl;
  }
  if(n1.vampirosN().size() > 0){
    cout << "posicion vampiro: " << n1.vampirosN()[0].pos.fila << " " << n1.vampirosN()[0].pos.columna << endl;
    cout << "vida vampiro: " << n1.vampirosN()[0].vida << endl << endl;
  }
  cout << "soles del nivel: " << n1.solesN() << endl << endl;

  n1.pasarTurno();
  if(n1.floresN().size() > 0){
    cout << "posicion flor: " << n1.floresN()[0].pos.fila << " " << n1.floresN()[0].pos.columna << endl;
    cout << "vida flor: " << n1.floresN()[0].vida << endl;
  }
  if(n1.vampirosN().size() > 0){
    cout << "posicion vampiro: " << n1.vampirosN()[0].pos.fila << " " << n1.vampirosN()[0].pos.columna << endl;
    cout << "vida vampiro: " << n1.vampirosN()[0].vida << endl << endl;
  }
  cout << "soles del nivel: " << n1.solesN() << endl << endl;

  n1.pasarTurno();
  if(n1.floresN().size() > 0){
    cout << "posicion flor: " << n1.floresN()[0].pos.fila << " " << n1.floresN()[0].pos.columna << endl;
    cout << "vida flor: " << n1.floresN()[0].vida << endl;
  }
  if(n1.vampirosN().size() > 0){
    cout << "posicion vampiro: " << n1.vampirosN()[0].pos.fila << " " << n1.vampirosN()[0].pos.columna << endl;
    cout << "vida vampiro: " << n1.vampirosN()[0].vida << endl << endl;
  }
  cout << "soles del nivel: " << n1.solesN() << endl << endl;

  n1.pasarTurno();
  if(n1.floresN().size() > 0){
    cout << "posicion flor: " << n1.floresN()[0].pos.fila << " " << n1.floresN()[0].pos.columna << endl;
    cout << "vida flor: " << n1.floresN()[0].vida << endl;
  }
  if(n1.vampirosN().size() > 0){
    cout << "posicion vampiro: " << n1.vampirosN()[0].pos.fila << " " << n1.vampirosN()[0].pos.columna << endl;
    cout << "vida vampiro: " << n1.vampirosN()[0].vida << endl << endl;
  }
  cout << "soles del nivel: " << n1.solesN() << endl << endl;

  n1.pasarTurno();
  if(n1.floresN().size() > 0){
    cout << "posicion flor: " << n1.floresN()[0].pos.fila << " " << n1.floresN()[0].pos.columna << endl;
    cout << "vida flor: " << n1.floresN()[0].vida << endl;
  }
  if(n1.vampirosN().size() > 0){
    cout << "posicion vampiro: " << n1.vampirosN()[0].pos.fila << " " << n1.vampirosN()[0].pos.columna << endl;
    cout << "vida vampiro: " << n1.vampirosN()[0].vida << endl << endl;
  }
  cout << "soles del nivel: " << n1.solesN() << endl << endl;
    
  n1.pasarTurno();
  if(n1.floresN().size() > 0){
    cout << "posicion flor: " << n1.floresN()[0].pos.fila << " " << n1.floresN()[0].pos.columna << endl;
    cout << "vida flor: " << n1.floresN()[0].vida << endl;
  }
  if(n1.vampirosN().size() > 0){
    cout << "posicion vampiro: " << n1.vampirosN()[0].pos.fila << " " << n1.vampirosN()[0].pos.columna << endl;
    cout << "vida vampiro: " << n1.vampirosN()[0].vida << endl << endl;
  }
  cout << "soles del nivel: " << n1.solesN() << endl << endl;

  n1.pasarTurno();
  if(n1.floresN().size() > 0){
    cout << "posicion flor: " << n1.floresN()[0].pos.fila << " " << n1.floresN()[0].pos.columna << endl;
    cout << "vida flor: " << n1.floresN()[0].vida << endl;
  }
  if(n1.vampirosN().size() > 0){
    cout << "posicion vampiro: " << n1.vampirosN()[0].pos.fila << " " << n1.vampirosN()[0].pos.columna << endl;
    cout << "vida vampiro: " << n1.vampirosN()[0].vida << endl << endl;
  }
  cout << "soles del nivel: " << n1.solesN() << endl << endl;

  n1.pasarTurno();
  if(n1.floresN().size() > 0){
    cout << "posicion flor: " << n1.floresN()[0].pos.fila << " " << n1.floresN()[0].pos.columna << endl;
    cout << "vida flor: " << n1.floresN()[0].vida << endl;
  }
  if(n1.vampirosN().size() > 0){
    cout << "posicion vampiro: " << n1.vampirosN()[0].pos.fila << " " << n1.vampirosN()[0].pos.columna << endl;
    cout << "vida vampiro: " << n1.vampirosN()[0].vida << endl << endl;
  }
  cout << "soles del nivel: " << n1.solesN() << endl << endl;

  n1.pasarTurno();
  if(n1.floresN().size() > 0){
    cout << "posicion flor: " << n1.floresN()[0].pos.fila << " " << n1.floresN()[0].pos.columna << endl;
    cout << "vida flor: " << n1.floresN()[0].vida << endl;
  }
  if(n1.vampirosN().size() > 0){
    cout << "posicion vampiro: " << n1.vampirosN()[0].pos.fila << " " << n1.vampirosN()[0].pos.columna << endl;
    cout << "vida vampiro: " << n1.vampirosN()[0].vida << endl << endl;
  }
  cout << "soles del nivel: " << n1.solesN() << endl << endl;

  // guardar nivel
  ofstream os("miNivel");

  if(os.is_open()){
    n1.Guardar(os);
    os.close();
  }

  // cargar nivel
  ifstream is("cargarNivel");
  Nivel nivelCargado;

  if(is.is_open()){
    nivelCargado.Cargar(is);
    is.close();
  }

  //cout << "nivel que guardo:" << endl;
  //n1.Mostrar(cout);
  cout << endl << endl << "nivel que cargo: " << endl;
  nivelCargado.Mostrar(cout); */

  /*  TEST JUEGO  

  Flor f1(1,1,{Atacar});
  Flor f2(1,1,{Explotar,Generar});
  Flor f3(1,1,{Atacar,Generar,Explotar});
  std::vector<Flor> vectorFlor;  
  vectorFlor.push_back(f1);
  vectorFlor.push_back(f2);
  vectorFlor.push_back(f3);

  Vampiro v1(Desviado,15,5);
  Vampiro v2(Caminante,50,2);
  Vampiro v3(Desviado,10,10);
  std::vector<Vampiro> vectorVamp;
  vectorVamp.push_back(v1);
  vectorVamp.push_back(v2);
  vectorVamp.push_back(v3);

  Juego game(vectorFlor,vectorVamp);

  VampiroEnEspera vampiroEnEspera1 = VampiroEnEspera(v2, 1, 2);
  VampiroEnEspera vampiroEnEspera2 = VampiroEnEspera(v1, 2, 4);
  std::vector<VampiroEnEspera> spawning;
  spawning.push_back(vampiroEnEspera1);
  Nivel nivel1 = Nivel(10, 10, 50, spawning);
  Nivel nivel2 = Nivel(20, 20, 50, spawning);
  Nivel nivel3 = Nivel(30, 30, 50, spawning);
  Nivel nivel4 = Nivel(40, 40, 50, spawning);

  //agregar nivel
  game.agregarNivel(nivel1,0);
  game.agregarNivel(nivel2,1);
  game.agregarNivel(nivel3,2);
  game.agregarNivel(nivel4,3);

  std::vector<Nivel> vectorNivel;

  //pruebo cosas cargando un juego
  ifstream is("cargarJuego");
  Juego gameFacil;
  if(is.is_open()){
    gameFacil.Cargar(is);
    is.close();
  }
  //gameFacil.Mostrar(cout);

  //estos salen facil
  vectorNivel = gameFacil.estosSaleFacil();
  cout << "vector nivel size: " << vectorNivel.size() << endl;
  int i = 0;
  while(i < vectorNivel.size()){
    vectorNivel[i].Mostrar(cout);
    i++;
  }

  //alto cheat
  gameFacil.nivelesJ()[0].Mostrar(cout);
  gameFacil.altoCheat(0);
  gameFacil.nivelesJ()[0].Mostrar(cout);

  //muy de exactas
  cout << "muy de exactas: " << gameFacil.muyDeExactas() << endl;

*/

  /* TEST GUARDAR Y CARGAR JUEGO 

  // cargar JUEGO
  ifstream is("cargarJuego");
  Juego juegoCargado1;

  if(is.is_open()){
    juegoCargado1.Cargar(is);
    is.close();
  }

  juegoCargado1.Mostrar(cout);

  // guardar JUEGO
  ofstream os("miJuego");

  if(os.is_open()){
    juegoCargado1.Guardar(os);
    os.close();
  }

  // cargo el juego que guardé
  ifstream is2("miJuego");
  Juego juegoCargado2;

  if(is2.is_open()){
    juegoCargado2.Cargar(is2);
    is2.close();
  }
  
  cout << endl << endl << "MUESTRO EL JUEGO CARGADO" << endl << endl << endl;
  juegoCargado2.Mostrar(cout);
  */


  /*    TESTS DE JUEGO PARA ENTREGAR    */
  vector<Habilidad> hab1;  
  hab1.push_back(Atacar);
  hab1.push_back(Explotar);
  hab1.push_back(Generar);
  vector<Habilidad> hab2;
  hab2.push_back(Atacar);
  hab2.push_back(Explotar);
  vector<Habilidad> hab3;
  hab3.push_back(Generar);

  //el constructor de flor genera la vida y el cuanto pega segun las habilidades
  Flor f1(1,1,hab1);
  Flor f2(1,1,hab2);
  Flor f3(1,1,hab3);

  Vampiro vampiro1(Caminante,10,10);
  Vampiro vampiro2(Caminante,12,12);
  Vampiro vampiro3(Desviado,15,15);

  vector<Flor> floresJuego;
  floresJuego.push_back(f1);
  floresJuego.push_back(f2);
  floresJuego.push_back(f3);

  vector<Flor> floresVacio;

  vector<Vampiro> vampirosJuego;
  vampirosJuego.push_back(vampiro1);
  vampirosJuego.push_back(vampiro2);
  vampirosJuego.push_back(vampiro3);

  vector<Vampiro> vampirosVacio;

  VampiroEnEspera v1 = VampiroEnEspera(vampiro1, 1, 1);
  VampiroEnEspera v2 = VampiroEnEspera(vampiro2, 2, 2);
  VampiroEnEspera v3 = VampiroEnEspera(vampiro3, 3, 3);
  VampiroEnEspera v4 = VampiroEnEspera(vampiro1, 4, 4);
  VampiroEnEspera v5 = VampiroEnEspera(vampiro2, 3, 6);
  VampiroEnEspera v6 = VampiroEnEspera(vampiro3, 4, 2);

  vector<VampiroEnEspera> spawningList1;
  spawningList1.push_back(v1);
  spawningList1.push_back(v2);
  spawningList1.push_back(v3);
  vector<VampiroEnEspera> spawningList2;
  spawningList2.push_back(v4);
  spawningList2.push_back(v5);
  spawningList2.push_back(v6);
  vector<VampiroEnEspera> spawningList3;
  spawningList3.push_back(v1);
  spawningList3.push_back(v4);
  spawningList3.push_back(v6);
  vector<VampiroEnEspera> spawningList4;
  spawningList4.push_back(v2);
  spawningList4.push_back(v5);
  spawningList4.push_back(v3);
  vector<VampiroEnEspera> spawningVacio;
  
  Nivel n1(10,10,50,spawningList1);
  Nivel n2(9,9,13,spawningList2);
  Nivel n3(12,12,24,spawningList3);
  Nivel n4(15,15,47,spawningList4);
  Nivel n5(15,15,0, spawningVacio);

  Juego juegoTest(floresJuego,vampirosJuego);

  //  TESTS AGREGAR NIVEL


  /*
  Test 1:
  Agrego el nivel n1 a juegoTest, la lista de niveles deberia tener un nivel.
  */

  cout << "TEST 1 AGREGAR NIVEL" << endl;
  cout << "Longitud de la lista de niveles de juego: " << juegoTest.nivelesJ().size() << endl;
  juegoTest.agregarNivel(n1,0);
  cout << "Longitud de la lista de niveles de juego: " << juegoTest.nivelesJ().size() << endl;

  /*
  Salida del primer test:
  TEST 1 AGREGAR NIVEL
  Longitud de la lista de niveles de juego: 0
  Longitud de la lista de niveles de juego: 1
  */
  cout << endl << endl;
  
  /*
  Test 2:
  Agrego el nivel n2 a juegoTest en la posicion 1. El nivel deberia agregarse despues de n1.
  Reviso si el nivel se agrego correctamente viendo el ancho, algo y soles del nivel en
  cada posicion.
  */

  cout << "TEST 2 AGREGAR NIVEL" << endl;
  cout << "Longitud de la lista de niveles de juego: " << juegoTest.nivelesJ().size() << endl;
  juegoTest.agregarNivel(n2,1);
  cout << "Longitud de la lista de niveles de juego: " << juegoTest.nivelesJ().size() << endl;

  cout << endl << "Veo si los niveles estan en sus posiciones:" << endl << endl;
  if(juegoTest.nivelesJ().at(0).anchoN() == 10 && juegoTest.nivelesJ().at(0).altoN() == 10 &&
    juegoTest.nivelesJ().at(0).solesN() == 50){
    cout << "Nivel n1 en la posicion correcta." << endl;
  } else {
    cout << "Nivel n1 NO esta en la posicion correcta." << endl;
  }

  if(juegoTest.nivelesJ().at(1).anchoN() == 9 && juegoTest.nivelesJ().at(1).altoN() == 9 &&
    juegoTest.nivelesJ().at(1).solesN() == 13){
    cout << "Nivel n2 en la posicion correcta." << endl;
  } else {
    cout << "Nivel n2 NO esta en la posicion correcta." << endl;
  }

  /*
  Salida del segundo test:
  TEST 2 AGREGAR NIVEL
  Longitud de la lista de niveles de juego: 1
  Longitud de la lista de niveles de juego: 2

  Veo si los niveles estan en sus posiciones:

  Nivel n1 en la posicion correcta.
  Nivel n2 en la posicion correcta.
  */
  cout << endl << endl;
  
  /*
  Test 3:
  Agrego el nivel n3 a juegoTest en la posicion 1. El nivel deberia agregarse entre el n1 y n2.
  */

  cout << "TEST 3 AGREGAR NIVEL" << endl;
  cout << "Longitud de la lista de niveles de juego: " << juegoTest.nivelesJ().size() << endl;
  juegoTest.agregarNivel(n3,1);
  cout << "Longitud de la lista de niveles de juego: " << juegoTest.nivelesJ().size() << endl;

  cout << endl << "Veo si los niveles estan en sus posiciones:" << endl << endl;
  if(juegoTest.nivelesJ().at(0).anchoN() == 10 && juegoTest.nivelesJ().at(0).altoN() == 10 &&
    juegoTest.nivelesJ().at(0).solesN() == 50){
    cout << "Nivel n1 en la posicion correcta." << endl;
  } else {
    cout << "Nivel n1 NO esta en la posicion correcta." << endl;
  }

  if(juegoTest.nivelesJ().at(1).anchoN() == 12 && juegoTest.nivelesJ().at(1).altoN() == 12 &&
    juegoTest.nivelesJ().at(1).solesN() == 24){
    cout << "Nivel n3 en la posicion correcta." << endl;
  } else {
    cout << "Nivel n3 NO esta en la posicion correcta." << endl;
  }  

  if(juegoTest.nivelesJ().at(2).anchoN() == 9 && juegoTest.nivelesJ().at(2).altoN() == 9 &&
    juegoTest.nivelesJ().at(2).solesN() == 13){
    cout << "Nivel n2 en la posicion correcta." << endl;
  } else {
    cout << "Nivel n2 NO esta en la posicion correcta." << endl;
  }

  /*
  Salida del tercer test:
  TEST 3 AGREGAR NIVEL
  Longitud de la lista de niveles de juego: 2
  Longitud de la lista de niveles de juego: 3
  
  Veo si los niveles estan en sus posiciones:

  Nivel n1 en la posicion correcta.
  Nivel n3 en la posicion correcta.
  Nivel n2 en la posicion correcta.
  */
  cout << endl << endl;
  
  /*
  Test 4:
  Agrego el nivel n4 a juegoTest en la posicion 2. El nivel deberia agregarse entre el n3 y n2.
  */

  cout << "TEST 4 AGREGAR NIVEL" << endl;
  cout << "Longitud de la lista de niveles de juego: " << juegoTest.nivelesJ().size() << endl;
  juegoTest.agregarNivel(n4,2);
  cout << "Longitud de la lista de niveles de juego: " << juegoTest.nivelesJ().size() << endl;

  cout << endl << "Veo si los niveles estan en sus posiciones:" << endl << endl;
  
  if(juegoTest.nivelesJ().at(0).anchoN() == 10 && juegoTest.nivelesJ().at(0).altoN() == 10 &&
    juegoTest.nivelesJ().at(0).solesN() == 50){
    cout << "Nivel n1 en la posicion correcta." << endl;
  } else {
    cout << "Nivel n1 NO esta en la posicion correcta." << endl;
  }

  if(juegoTest.nivelesJ().at(1).anchoN() == 12 && juegoTest.nivelesJ().at(1).altoN() == 12 &&
    juegoTest.nivelesJ().at(1).solesN() == 24){
    cout << "Nivel n3 en la posicion correcta." << endl;
  } else {
    cout << "Nivel n3 NO esta en la posicion correcta." << endl;
  }

  if(juegoTest.nivelesJ().at(2).anchoN() == 15 && juegoTest.nivelesJ().at(2).altoN() == 15 &&
    juegoTest.nivelesJ().at(2).solesN() == 47){
    cout << "Nivel n4 en la posicion correcta." << endl;
  } else {
    cout << "Nivel n4 NO esta en la posicion correcta." << endl;
  }

  if(juegoTest.nivelesJ().at(3).anchoN() == 9 && juegoTest.nivelesJ().at(3).altoN() == 9 &&
    juegoTest.nivelesJ().at(3).solesN() == 13){
    cout << "Nivel n2 en la posicion correcta." << endl;
  } else {
    cout << "Nivel n2 NO esta en la posicion correcta." << endl;
  }

  /*
  Salida del cuarto test:
  TEST 4 AGREGAR NIVEL
  Longitud de la lista de niveles de juego: 3
  Longitud de la lista de niveles de juego: 4
  
  Veo si los niveles estan en sus posiciones:

  Nivel n1 en la posicion correcta.
  Nivel n3 en la posicion correcta.
  Nivel n4 en la posicion correcta.
  Nivel n2 en la posicion correcta.
  */
  cout << endl << endl;

  
  //  TESTS JUGAR NIVEL

  vector<VampiroEnEspera> spawningList5;
  spawningList5.push_back(v1);
  spawningList5.push_back(v2);
  spawningList5.push_back(v3);
  spawningList5.push_back(v4);
  Nivel nivelTest(9,9,100,spawningList5);

  /*
  Test:
  Agrego el nivelTest a la posicion 0 de la lista de niveles de juegoTest.
  Voy usando la funcion pasarturno en nivelTest para obtener un "estado futuro" del juego y
  luego aplico la funcion jugarNivel.
  El nivel deberia ir cambiandose al estado nuevo de nivelTest.
  */

  juegoTest.agregarNivel(nivelTest,0);

  cout << "TEST 1 JUGAR NIVEL" << endl;
  cout << "Nivel antes de usar la funcion: " << endl;
  cout << "Ancho: " << juegoTest.nivelesJ().at(0).anchoN() << endl;
  cout << "Alto: " << juegoTest.nivelesJ().at(0).altoN() << endl;
  cout << "Soles: " << juegoTest.nivelesJ().at(0).solesN() << endl;
  cout << "Turno: " << juegoTest.nivelesJ().at(0).turnoN() << endl;
  cout << "Longitud lista de vampiros: " << juegoTest.nivelesJ().at(0).vampirosN().size() << endl;
  cout << "Longitud lista de spawning: " << juegoTest.nivelesJ().at(0).spawningN().size() << endl;
  nivelTest.pasarTurno();
  juegoTest.jugarNivel(nivelTest,0);
  cout << "Nivel despues de usar la funcion: " << endl;
  cout << "Ancho: " << juegoTest.nivelesJ().at(0).anchoN() << endl;
  cout << "Alto: " << juegoTest.nivelesJ().at(0).altoN() << endl;
  cout << "Soles: " << juegoTest.nivelesJ().at(0).solesN() << endl;
  cout << "Turno: " << juegoTest.nivelesJ().at(0).turnoN() << endl;
  cout << "Longitud lista de vampiros: " << juegoTest.nivelesJ().at(0).vampirosN().size() << endl;
  cout << "Longitud lista de spawning: " << juegoTest.nivelesJ().at(0).spawningN().size() << endl;

  /*
  Salida del primer test:
  TEST 1 JUGAR NIVEL
  Nivel antes de usar la funcion: 
  Ancho: 9
  Alto: 9
  Soles: 100
  Turno: 0
  Longitud lista de vampiros: 0
  Longitud lista de spawning: 4
  Nivel despues de usar la funcion: 
  Ancho: 9
  Alto: 9
  Soles: 101
  Turno: 1
  Longitud lista de vampiros: 1
  Longitud lista de spawning: 3
  */
  cout << endl << endl;  

  cout << "TEST 2 JUGAR NIVEL" << endl;
  cout << "Nivel antes de usar la funcion: " << endl;
  cout << "Ancho: " << juegoTest.nivelesJ().at(0).anchoN() << endl;
  cout << "Alto: " << juegoTest.nivelesJ().at(0).altoN() << endl;
  cout << "Soles: " << juegoTest.nivelesJ().at(0).solesN() << endl;
  cout << "Turno: " << juegoTest.nivelesJ().at(0).turnoN() << endl;
  cout << "Longitud lista de vampiros: " << juegoTest.nivelesJ().at(0).vampirosN().size() << endl;
  cout << "Longitud lista de spawning: " << juegoTest.nivelesJ().at(0).spawningN().size() << endl;
  nivelTest.pasarTurno();
  juegoTest.jugarNivel(nivelTest,0);
  cout << "Nivel despues de usar la funcion: " << endl;
  cout << "Ancho: " << juegoTest.nivelesJ().at(0).anchoN() << endl;
  cout << "Alto: " << juegoTest.nivelesJ().at(0).altoN() << endl;
  cout << "Soles: " << juegoTest.nivelesJ().at(0).solesN() << endl;
  cout << "Turno: " << juegoTest.nivelesJ().at(0).turnoN() << endl;
  cout << "Longitud lista de vampiros: " << juegoTest.nivelesJ().at(0).vampirosN().size() << endl;
  cout << "Longitud lista de spawning: " << juegoTest.nivelesJ().at(0).spawningN().size() << endl;

  /*
  Salida del segundo test:
  TEST 2 JUGAR NIVEL
  Nivel antes de usar la funcion: 
  Ancho: 9
  Alto: 9
  Soles: 101
  Turno: 1
  Longitud lista de vampiros: 1
  Longitud lista de spawning: 3
  Nivel despues de usar la funcion: 
  Ancho: 9
  Alto: 9
  Soles: 102
  Turno: 2
  Longitud lista de vampiros: 2
  Longitud lista de spawning: 2
  */
  cout << endl << endl;

  cout << "TEST 3 JUGAR NIVEL" << endl;
  cout << "Nivel antes de usar la funcion: " << endl;
  cout << "Ancho: " << juegoTest.nivelesJ().at(0).anchoN() << endl;
  cout << "Alto: " << juegoTest.nivelesJ().at(0).altoN() << endl;
  cout << "Soles: " << juegoTest.nivelesJ().at(0).solesN() << endl;
  cout << "Turno: " << juegoTest.nivelesJ().at(0).turnoN() << endl;
  cout << "Longitud lista de vampiros: " << juegoTest.nivelesJ().at(0).vampirosN().size() << endl;
  cout << "Longitud lista de spawning: " << juegoTest.nivelesJ().at(0).spawningN().size() << endl;
  nivelTest.pasarTurno();
  juegoTest.jugarNivel(nivelTest,0);
  cout << "Nivel despues de usar la funcion: " << endl;
  cout << "Ancho: " << juegoTest.nivelesJ().at(0).anchoN() << endl;
  cout << "Alto: " << juegoTest.nivelesJ().at(0).altoN() << endl;
  cout << "Soles: " << juegoTest.nivelesJ().at(0).solesN() << endl;
  cout << "Turno: " << juegoTest.nivelesJ().at(0).turnoN() << endl;
  cout << "Longitud lista de vampiros: " << juegoTest.nivelesJ().at(0).vampirosN().size() << endl;
  cout << "Longitud lista de spawning: " << juegoTest.nivelesJ().at(0).spawningN().size() << endl;

  /*
  Salida del tercer test:
  TEST 3 JUGAR NIVEL
  Nivel antes de usar la funcion: 
  Ancho: 9
  Alto: 9
  Soles: 102
  Turno: 2
  Longitud lista de vampiros: 2
  Longitud lista de spawning: 2
  Nivel despues de usar la funcion: 
  Ancho: 9
  Alto: 9
  Soles: 103
  Turno: 3
  Longitud lista de vampiros: 3
  Longitud lista de spawning: 1
  */
  cout << endl << endl;

  cout << "TEST 4 JUGAR NIVEL" << endl;
  cout << "Nivel antes de usar la funcion: " << endl;
  cout << "Ancho: " << juegoTest.nivelesJ().at(0).anchoN() << endl;
  cout << "Alto: " << juegoTest.nivelesJ().at(0).altoN() << endl;
  cout << "Soles: " << juegoTest.nivelesJ().at(0).solesN() << endl;
  cout << "Turno: " << juegoTest.nivelesJ().at(0).turnoN() << endl;
  cout << "Longitud lista de vampiros: " << juegoTest.nivelesJ().at(0).vampirosN().size() << endl;
  cout << "Longitud lista de spawning: " << juegoTest.nivelesJ().at(0).spawningN().size() << endl;
  nivelTest.pasarTurno();
  juegoTest.jugarNivel(nivelTest,0);
  cout << "Nivel despues de usar la funcion: " << endl;
  cout << "Ancho: " << juegoTest.nivelesJ().at(0).anchoN() << endl;
  cout << "Alto: " << juegoTest.nivelesJ().at(0).altoN() << endl;
  cout << "Soles: " << juegoTest.nivelesJ().at(0).solesN() << endl;
  cout << "Turno: " << juegoTest.nivelesJ().at(0).turnoN() << endl;
  cout << "Longitud lista de vampiros: " << juegoTest.nivelesJ().at(0).vampirosN().size() << endl;
  cout << "Longitud lista de spawning: " << juegoTest.nivelesJ().at(0).spawningN().size() << endl;

  /*
  Salida del cuarto test:
  TEST 4 JUGAR NIVEL
  Nivel antes de usar la funcion: 
  Ancho: 9
  Alto: 9
  Soles: 103
  Turno: 3
  Longitud lista de vampiros: 3
  Longitud lista de spawning: 1
  Nivel despues de usar la funcion: 
  Ancho: 9
  Alto: 9
  Soles: 104
  Turno: 4
  Longitud lista de vampiros: 4
  Longitud lista de spawning: 0
  */
  cout << endl << endl;



  //  TESTS GUARDAR JUEGO

    //Test 1: guardo juego sin flores, con vampiros, sin niveles

    cout << "TEST 1 GUARDAR JUEGO" << endl;
    Juego juegoTest1(floresVacio, vampirosJuego);
    Juego juegoTestTemp1;

    ofstream ost1 ("TestGuardarJuego1_2");

    if (ost1.is_open()) {
  	  juegoTest1.Guardar(ost1);
  	  ost1.close();
    }

    ifstream ist1("TestGuardarJuego1_2");
    if (ist1.is_open()) {
  	    juegoTestTemp1.Cargar(ist1);
        ist1.close();
    }

    if(juegoTestTemp1.nivelesJ().size() == 0 && juegoTestTemp1.floresJ().size() == 0 &&
      juegoTestTemp1.vampirosJ().size() == 3){
      cout << "El juego se guardó y cargo correctamente." << endl;
    } else {
      cout << "El juego no es el correcto" << endl;
    }

  /*
  Salida del primer test:
  
  TEST 1 GUARDAR JUEGO
  El juego se guardó y cargo correctamente.
  */
  cout << endl << endl;

  //Test 2: guardo juego sin inicializar, sobreescribiendo el archivo del primer test

    cout << "TEST 2 GUARDAR JUEGO" << endl;
    Juego juegoTest2;
    Juego juegoTestTemp2;

    ofstream ost2 ("TestGuardarJuego1_2");
    if (ost2.is_open()) {
  	  juegoTest2.Guardar(ost2);
  	  ost2.close();
    }

    ifstream ist2("TestGuardarJuego1_2");
        if (ist2.is_open()) {
      	  juegoTestTemp2.Cargar(ist2);
          ist2.close();
        }

    if(juegoTestTemp2.nivelesJ().size() == 0 && juegoTestTemp2.floresJ().size() == 0 &&
      juegoTestTemp2.vampirosJ().size() == 0){
      cout << "El juego se guardó y cargo correctamente." << endl;
    } else {
      cout << "El juego no es el correcto" << endl;
    }

  /*
  Salida del segundo test:

  TEST 2 GUARDAR JUEGO
  El juego se guardó y cargo correctamente.
  */
  cout << endl << endl;

  // Test 3: guardo un juego sin flores, sin vampiros, con niveles. El último nivel tiene spawning vacío

    cout << "TEST 3 GUARDAR JUEGO" << endl;
    Juego juegoTest3(floresVacio, vampirosVacio);
    Juego juegoTestTemp3;
    juegoTest3.agregarNivel(n1, 0);
    juegoTest3.agregarNivel(n5, 1);

    ofstream ost3("TestGuardarJuego3");
    if (ost3.is_open()) {
    	juegoTest3.Guardar(ost3);
    	ost3.close();
    }

    ifstream ist3("TestGuardarJuego3");
    if (ist3.is_open()) {
    	juegoTestTemp3.Cargar(ist3);
    	ist3.close();
    }

    if(juegoTestTemp3.nivelesJ().size() == 2 && juegoTestTemp3.floresJ().size() == 0 &&
      juegoTestTemp3.vampirosJ().size() == 0){
      cout << "El juego se guardó y cargo correctamente." << endl;
    } else {
      cout << "El juego no es el correcto" << endl;
    }


  /*
  Salida del tercer test:
  TEST 3 GUARDAR JUEGO
  El juego se guardó y cargo correctamente.
  */
  // El spawning no es vacío, ya que el constructor de nivel crea
  // un vampiro "generico" para cumplir la especificación
  cout << endl << endl;


  // Test 4: uso para guardar el juego juegoTest del principio con 3 vampiros, 3 flores y 5 niveles
  cout << "TEST 4 GUARDAR JUEGO" << endl;
  Juego juegoTestTemp4;
  
  ofstream ost4("TestGuardarJuego4");
    if(ost4.is_open()) {
      juegoTest.Guardar(ost4);
      ost4.close();
  }

  ifstream is11("TestGuardarJuego4");
  if(is11.is_open()) {
    juegoTestTemp4.Cargar(is11);
    is11.close();
  }

  if(juegoTestTemp4.nivelesJ().size() == 5 && juegoTestTemp4.floresJ().size() == 3 &&
      juegoTestTemp4.vampirosJ().size() == 3){
      cout << "El juego se guardó y cargo correctamente." << endl;
    } else {
      cout << "El juego no es el correcto" << endl;
  }

  /*
  Salida del cuarto test:

  */
  cout << endl << endl;


  //  TESTS ESTOS SALE FACIL
  
  vector<Nivel> nivelesFaciles;
  /*
  Test 1:
  Pruebo juegoTest con la funcion, deberia devolver un vector con el nivel nivelTest que 
  quedo de la funcion jugarNivel, ya es el que tiene mas soles.
  */

  nivelesFaciles = juegoTest.estosSaleFacil();

  cout << "TEST 1 ESTOS SALE FACIL" << endl;
  cout << "Longitud de la lista de niveles faciles: " << nivelesFaciles.size() << endl;

  if(nivelesFaciles.at(0).anchoN() == 9 && nivelesFaciles.at(0).altoN() == 9 && 
    nivelesFaciles.at(0).solesN() == 104){
    cout << "Nivel correcto en la lista" << endl;
  } else {
    cout << "No es el nivel correcto" << endl;
  }

  /*
  Salida del primer test:

  TEST 1 ESTOS SALE FACIL
  Longitud de la lista de niveles faciles: 1
  Nivel correcto en la lista
  */
  cout << endl << endl;

  /*
  Test 2:
  Cargo un juego con niveles y vampiros para hacer el proximo test.
  El juego posee un vector con las mismas flores y los mismos vampiros y 2 niveles, ambos
  con 100 de soles y una flor cada uno. La funcion deberia devolver los 2 niveles.
  Nivel en posicion 0: ancho = 12, alto = 12, turno = 3, soles = 100.
  Nivel en posicion 1: ancho = 9, alto = 9, turno = 2, soles = 100
  */
  ifstream is("TestEstosSaleFacil2");

  if(is.is_open()){
    juegoTest.Cargar(is);
    is.close();
  }

  nivelesFaciles = juegoTest.estosSaleFacil();

  cout << "TEST 2 ESTOS SALE FACIL" << endl;
  cout << "Longitud de la lista de niveles faciles: " << nivelesFaciles.size() << endl;

  if(nivelesFaciles.at(0).anchoN() == 12 && nivelesFaciles.at(0).altoN() == 12 && 
    nivelesFaciles.at(0).solesN() == 100 && nivelesFaciles.at(0).turnoN() == 3){
    cout << "Nivel correcto" << endl;
  } else {
    cout << "No es el nivel correcto" << endl;
  }

  if(nivelesFaciles.at(1).anchoN() == 9 && nivelesFaciles.at(1).altoN() == 9 && 
    nivelesFaciles.at(1).solesN() == 100 && nivelesFaciles.at(1).turnoN() == 2){
    cout << "Nivel correcto" << endl;
  } else {
    cout << "No es el nivel correcto" << endl;
  }

  /*
  Salida del segundo test:

  TEST 2 ESTOS SALE FACIL
  Longitud de la lista de niveles faciles: 2
  Nivel correcto
  Nivel correcto
  */
  cout << endl << endl;

  /*
  Test 3:
  Cargo un juego con niveles y vampiros para hacer el proximo test.
  El juego posee un vector con las mismas flores y los mismos vampiros y 3 niveles.
  Nivel en posicion 0: ancho = 12, alto = 12, turno = 3, soles = 100, cantidad flores = 1.
  Nivel en posicion 1: ancho = 9, alto = 9, turno = 2, soles = 100, cantidad flores = 1.
  Nivel en posicion 2: ancho = 10, alto = 10, turno = 6, soles = 100, cantidad flores = 2.
  Deberia devolver el nivel de la posicion 2 por tener mas flores.
  */

  ifstream is2("TestEstosSaleFacil3");

  if(is2.is_open()){
    juegoTest.Cargar(is2);
    is2.close();
  }

  nivelesFaciles = juegoTest.estosSaleFacil();

  cout << "TEST 3 ESTOS SALE FACIL" << endl;
  cout << "Longitud de la lista de niveles faciles: " << nivelesFaciles.size() << endl;

  if(nivelesFaciles.at(0).anchoN() == 10 && nivelesFaciles.at(0).altoN() == 10 && 
    nivelesFaciles.at(0).solesN() == 100 && nivelesFaciles.at(0).turnoN() == 6){
    cout << "Nivel correcto" << endl;
  } else {
    cout << "No es el nivel correcto" << endl;
  }

  /*
  Salida del tercer test:

  TEST 3 ESTOS SALE FACIL
  Longitud de la lista de niveles faciles: 1
  Nivel correcto
  */
  cout << endl << endl;

  /*
  Test 4:
  Cargo un juego con niveles y vampiros para hacer el proximo test.
  El juego posee un vector con las mismas flores y los mismos vampiros y 4 niveles.
  Nivel en posicion 0: ancho = 12, alto = 12, turno = 3, soles = 100, cantidad flores = 1.
  Nivel en posicion 1: ancho = 9, alto = 9, turno = 2, soles = 100, cantidad flores = 1.
  Nivel en posicion 2: ancho = 10, alto = 10, turno = 6, soles = 100, cantidad flores = 2.
  Nivel en posicion 3: ancho = 8, alto = 8, turno = 1, soles = 100, cantidad flores = 2.
  Deberia devolver los ultimos dos niveles por tener la misma cantidad de soles y mayor
  cantidad de flores.
  */

  ifstream is3("TestEstosSaleFacil4");

  if(is3.is_open()){
    juegoTest.Cargar(is3);
    is3.close();
  }

  nivelesFaciles = juegoTest.estosSaleFacil();

  cout << "TEST 4 ESTOS SALE FACIL" << endl;
  cout << "Longitud de la lista de niveles faciles: " << nivelesFaciles.size() << endl;

  if(nivelesFaciles.at(0).anchoN() == 10 && nivelesFaciles.at(0).altoN() == 10 && 
    nivelesFaciles.at(0).solesN() == 100 && nivelesFaciles.at(0).turnoN() == 6){
    cout << "Nivel correcto" << endl;
  } else {
    cout << "No es el nivel correcto" << endl;
  }

  if(nivelesFaciles.at(1).anchoN() == 8 && nivelesFaciles.at(1).altoN() == 8 && 
    nivelesFaciles.at(1).solesN() == 100 && nivelesFaciles.at(1).turnoN() == 1){
    cout << "Nivel correcto" << endl;
  } else {
    cout << "No es el nivel correcto" << endl;
  }

  /*
  Salida del cuarto test:

  TEST 4 ESTOS SALE FACIL
  Longitud de la lista de niveles faciles: 2
  Nivel correcto
  Nivel correcto
  */
  cout << endl << endl;

  
  // TESTS ALTO CHEAT

  /*
  Test 1:
  Cargo un juego con niveles y vampiros para hacer el test.
  El juego posee un vector con las mismas flores y los mismos vampiros y 1 nivel.
  El nivel posee un vampiro con 10 de vida.
  Deberia la vida ponerse a la mitad cuando aplico el test.
  */

  ifstream is4("TestAltoCheat1");

  if(is4.is_open()){
    juegoTest.Cargar(is4);
    is4.close();
  }

  cout << "TEST 1 ALTO CHEAT" << endl;
  juegoTest.altoCheat(0);
  
  if(juegoTest.nivelesJ().at(0).vampirosN().at(0).vida == 5){
    cout << "Cumple con el test!" << endl;
  } else {
    cout << "No cumple con el test." << endl;
  }

  /*
  Salida del primer test:

  TEST 1 ALTO CHEAT
  Cumple con el test!
  */
  cout << endl << endl;

  /*
  Test 2:
  Cargo un juego con niveles y vampiros para hacer el test.
  El juego posee un vector con las mismas flores y los mismos vampiros y 2 niveles.
  Aplico la funcion altoCheat en el segundo nivel.
  El segundo nivel posee 2 vampiros, uno con 12 de vida y el otro con 15 de vida.
  Deberia la vida de ambos ponerse a la mitad (parte entera).
  */

  ifstream is5("TestAltoCheat2");

  if(is5.is_open()){
    juegoTest.Cargar(is5);
    is5.close();
  }

  cout << "TEST 2 ALTO CHEAT" << endl;
  juegoTest.altoCheat(1);

  if(juegoTest.nivelesJ().at(1).vampirosN().at(0).vida == 6 &&
    juegoTest.nivelesJ().at(1).vampirosN().at(1).vida == 7){
    cout << "Cumple con el test!" << endl;
  } else {
    cout << "No cumple con el test." << endl;
  }

  /*
  Salida del segundo test:

  TEST 2 ALTO CHEAT
  Cumple con el test!
  */
  cout << endl << endl;

  /*
  Test 3:
  Cargo un juego con niveles y vampiros para hacer el test.
  El juego posee un vector con las mismas flores y los mismos vampiros y 1 nivel.
  El nivel posee 3 vampiros, con vidas 12, 15 y 8.
  Deberia la vida de los tres ponerse a la mitad (parte entera).
  */

  ifstream is6("TestAltoCheat3");

  if(is6.is_open()){
    juegoTest.Cargar(is6);
    is6.close();
  }

  cout << "TEST 3 ALTO CHEAT" << endl;
  juegoTest.altoCheat(0);

  if(juegoTest.nivelesJ().at(0).vampirosN().at(0).vida == 6 &&
    juegoTest.nivelesJ().at(0).vampirosN().at(1).vida == 7 &&
    juegoTest.nivelesJ().at(0).vampirosN().at(2).vida == 4){
    cout << "Cumple con el test!" << endl;
  } else {
    cout << "No cumple con el test." << endl;
  }

  /*
  Salida del tercer test:

  TEST 3 ALTO CHEAT
  Cumple con el test!
  */
  cout << endl << endl;

  /*
  Test 4:
  Utilizo el juego cargado anterior pero esta vez aplico la funcion altoCheat en un nivel que no
  existe.
  La vida de los vampiros no deberia modificarse.
  */

  cout << "TEST 4 ALTO CHEAT" << endl;
  juegoTest.altoCheat(2);
  
  if(juegoTest.nivelesJ().at(0).vampirosN().at(0).vida == 6 &&
    juegoTest.nivelesJ().at(0).vampirosN().at(1).vida == 7 &&
    juegoTest.nivelesJ().at(0).vampirosN().at(2).vida == 4){
    cout << "Cumple con el test!" << endl;
  } else {
    cout << "No cumple con el test." << endl;
  }

  /*
  Salida del cuarto test:

  TEST 4 ALTO CHEAT
  Cumple con el test!
  */
  cout << endl << endl;


  // TESTS MUY DE EXACTAS

  /*
  Test 1
  Cargo un juego que posee 2 niveles sin vampiros en el juego y sin vampiros en la lista
  de spawning, ambos con una flor.
  Los dos niveles deberian ser considerados ganados y entrarian en el rango de fibonacci.
  1 1 2
  */

  ifstream is7("TestMuyDeExactas1");

  if(is7.is_open()){
    juegoTest.Cargar(is7);
    is7.close();
  }

  cout << "TEST 1 MUY DE EXACTAS" << endl; 
  if(juegoTest.muyDeExactas()){
    cout << "Cumple!" << endl;
  } else{
    cout << "No cumple." << endl;
  }

  /*
  Salida del primer test:

  TEST 1 MUY DE EXACTAS
  Cumple!
  */
  cout << endl << endl;

  /*
  Test 2
  Cargo un juego que posee 4 niveles sin vampiros en el juego y sin vampiros en la lista
  de spawning, todos con una flor.
  Los 4 niveles deberian ser considerados ganados y por las posiciones no entrarian en el 
  rango de fibonacci.
  1 1 2 3 5
  */

  ifstream is8("TestMuyDeExactas2");

  if(is8.is_open()){
    juegoTest.Cargar(is8);
    is8.close();
  }

  cout << "TEST 2 MUY DE EXACTAS" << endl; 
  if(!juegoTest.muyDeExactas()){
    cout << "Cumple!" << endl;
  } else{
    cout << "No cumple." << endl;
  }

  /*
  Salida del segundo test:

  TEST 2 MUY DE EXACTAS
  Cumple!
  */
  cout << endl << endl; 

  /*
  Test 3
  Cargo un juego que posee 5 niveles.
  El primer nivel sin vampiros en espera ni en spawning.
  El segundo nivel sin vampiros en espera ni en spawning.
  El tercer nivel sin vampiros en espera ni en spawning.
  El cuarto nivel con vampiros en espera y en spawning.
  El quinto nivel sin vampiros en espera ni en spawning.
  Los niveles sin vampiros deberian ser considerados como ganados y entran en el rango
  de fibonacci.
  1 1 2 3 5
  */

  ifstream is9("TestMuyDeExactas3");

  if(is9.is_open()){
    juegoTest.Cargar(is9);
    is9.close();
  }

  cout << "TEST 3 MUY DE EXACTAS" << endl; 
  if(juegoTest.muyDeExactas()){
    cout << "Cumple!" << endl;
  } else{
    cout << "No cumple." << endl;
  }

  /*
  Salida del tercer test:

  TEST 3 MUY DE EXACTAS
  Cumple!
  */
  cout << endl << endl;

  /*
  Test 4
  Cargo un juego que posee 6 niveles.
  Solo el cuarto nivel con vampiros en espera y en spawning.
  Los niveles sin vampiros deberian ser considerados como ganados y no entran en el rango
  de fibonacci.
  1 1 2 3 5 8
  */

  ifstream is10("TestMuyDeExactas4");

  if(is10.is_open()){
    juegoTest.Cargar(is10);
    is10.close();
  }

  cout << "TEST 4 MUY DE EXACTAS" << endl; 
  if(!juegoTest.muyDeExactas()){
    cout << "Cumple!" << endl;
  } else {
    cout << "No cumple." << endl;
  }

  /*
  Salida del cuarto test:

  TEST 4 MUY DE EXACTAS
  Cumple!
  */


}
