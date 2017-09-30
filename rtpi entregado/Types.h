#pragma once
#include <tuple>

enum Habilidad {Generar, Atacar, Explotar};
enum ClaseVampiro {Caminante, Desviado};
typedef int Vida;

struct Posicion
{
	Posicion()
		{
			fila = 0;
			columna = 0;
		}
		Posicion(int x, int y)
		{
			fila = x;
			columna = y;
		}

		int fila, columna;
};
