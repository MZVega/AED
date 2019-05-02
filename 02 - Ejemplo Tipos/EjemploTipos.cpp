/* 
Ejemplo Tipos
Programa que utiliza los distintos tipos de variables vistos en clase para ingresar datos personales y asignar una categoría.
Melissa Zoe Vega - Curso K1051
Última modificación 01/05/2019
*/

#include <iostream>
#include <string>
#include <assert.h>
using namespace std;

int main()
{
	string nombre;
	std::cin >> nombre;
	
	int dd, mm, aaaa;
	std::cin >> dd >> mm >> aaaa;
	assert(aaaa <= 2002);

	unsigned char documento[8];
	std::cin >> documento;

	bool comp_edad; // Compara la edad del usuario con la del programador
	bool category = true;
			if(aaaa <= 1998)
			{
				category = false;
			}
	
	unsigned char categoria;
	if (category == true) 
	{
		categoria = 65;
	}
	else 
	{
		categoria = 69;
	}
	std::cout << categoria;
}