// 2022_11_15_Palindromo.cpp
// Daniel Callejas Rayón
// programa que te diga si una palabra es un palindormos con recursividad
//

#include <iostream>
#include<cstdlib>
#include<string>

bool palindromo(char palabra[], int  inicio, int final) {
	if (inicio >= final) return true;
	if (palabra[inicio] == palabra[final])
		palindromo(palabra, inicio + 1, final - 1);
	else return false;
}

int main(void)
{
	std::string palabra;
	int size;
	bool pal;

	std::cout << "dime una palabra\n";
	std::cin >> palabra;
	char* c = const_cast<char*>(palabra.c_str());
	size = strlen(c);

	pal = palindromo(c, 0, size - 1);

	if (pal == true) {
		std::cout << "la palabra es un palindromo" << std::endl;
	}
	else {
		std::cout << "la palabra no es un palindromo " << std::endl;
	}
}
