#include <iostream>
#include <ostream>
#include <fmt/core.h>
#include "Funciones.h"
#include "Matematicas.cpp"

int main() {
    fmt::print("Hello, {}!\n", "world");

    int resultado_suma = suma(3, 5);
    std::cout << "La suma es: " << resultado_suma << std::endl;

    int resultado_resta = resta(5, 3);
    std::cout << "La resta es: " << resultado_resta << std::endl;

    int resultado_multi = multi(2, 8);
    std::cout << "La multiplicacion es: " << resultado_multi << std::endl;

    int resultado_divi = divi(8, 2);
    std::cout << "La division es: " << resultado_divi << std::endl;

    return 0;
}