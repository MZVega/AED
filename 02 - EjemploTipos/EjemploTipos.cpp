/*
Ejemplo Tipos
Programa que utiliza los distintos tipos de variables vistos en clase.
Melissa Zoe Vega - Curso K1051
Última modificación 01/05/2019
*/

#include <iostream>
#include <string.h>
#include <assert.h>
using namespace std;

int main()
{
	string nombre = "Melissa";
	string nombre2 = "Zoe";
	string apellido = "Vega";
	string NyA = nombre + " " + nombre2 + " " + apellido;  //concatenación
	
	int a = 4;
	int b = 10;
	int c;
	c = a + b; //suma de enteros 
	assert(c <= 10000);

	double x = 3.14;
	double y = 55.18;
	double z;
	z = x + y; //suma de reales

	bool comparador = true; // comparación de valores que devuelve 0 o 1.
	if (a <= 10)
	{
		comparador = false;
	}

	char q = '33';  //caracter !
	char r = '44';  //caracter ,
	char s;
	s = q + r;  //caracter M

	int i = 2147483648; // Al sobrepasar la capacidad, se vuelve negativo el número (devuelve -2147483648).
	unsigned int j = 2147483648; // Unsigned int permite devolverlo positivo (devuelve 2147483648).	
}