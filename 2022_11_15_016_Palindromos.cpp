// 2022_11_15_016_Palindromos.cpp 
// Daniel Callejas Rayón
// Palindromos con recursividd

//Daniel Callejas Rayón
// ver recursividad
#include <iostream>
#include <string>
void pali(char letra)
{
    if (letra == "")
    {
        pali(letra / 2);
        std::cout << letra % 2;
    }
}

int main()
{
    std::string  palindromo;
    std::cout << "Dame la frase para verificar que sea un palindromo: \n";
    std::getline(std::cin, palindromo);
    char* c = const_cast<char*>(palindromo.c_str());
    std::cout << c << std::endl; 
}
