cmake_minimum_required(VERSION 3.29)
project(Coleccion_de_Ejercicios_para_Nociones_Clave)



set(CMAKE_CXX_STANDARD 14)

add_executable(Coleccion_de_Ejercicios_para_Nociones_Clave
        "Ejercicios 1 y 2/main.cpp"
        "Ejercicios 1 y 2/Persona.h"
        "Ejercicios 1 y 2/Persona.cpp"
        "Ejercicios 1 y 2/Estudiante.h"
        "Ejercicios 1 y 2/Estudiante.cpp")

add_executable(Coleccion_de_Ejercicios_para_Nociones_Clave2
        "Ejercicios 3, 4, 5, 6 y 7/main.cpp")

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)

target_link_libraries(Coleccion_de_Ejercicios_para_Nociones_Clave fmt::fmt)