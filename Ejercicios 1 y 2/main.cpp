#include <iostream>
#include "Persona.h"
#include "Estudiante.h"
#include <string>

int suma(int a, int b)
{
    return a + b;
}

int g = 20;

int main(){
    std::cout << "valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma (5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    Persona persona1;
    persona1.setNombre("Marc");
    persona1.setEdad(18);
    persona1.setGenero("Masculino");

    std::cout << "Nombre de la persona: " << persona1.getNombre() << std::endl;
    std::cout << "Edad de la persona: " << persona1.getEdad() << std::endl;
    std::cout << "Genero de la persona: " << persona1.getGenero() << std::endl;

    Estudiante estudiante1;
    estudiante1.setNombre("Marc");
    estudiante1.setEdad(18);
    estudiante1.setGenero("Masculino");
    estudiante1.setGrado("Ingieneria Informatica");

    std::cout << "Nombre del estudiante: " << estudiante1.getNombre() << std::endl;
    std::cout << "Edad del estudiante: " << estudiante1.getEdad() << std::endl;
    std::cout << "Genero del estudiante: " << estudiante1.getGenero() << std::endl;
    std::cout << "Grado del estudiante: " << estudiante1.getGrado() << std::endl;

    return 0;
}