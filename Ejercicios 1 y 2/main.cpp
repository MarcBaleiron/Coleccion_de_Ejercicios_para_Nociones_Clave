#include <iostream>

int suma (int a, int b)
{
    return a + b;
}

int g = 20;

int main() {
    std::cout << "valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma (5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;
    return 0;
}