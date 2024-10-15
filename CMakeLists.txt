cmake_minimum_required(VERSION 3.29)
project(Coleccion_de_Ejercicios_para_Nociones_Clave)

set(CMAKE_CXX_STANDARD 14)

add_library(Matematicas SHARED Matematicas.cpp)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        10.1.0
)

FetchContent_MakeAvailable(fmt)

add_executable(Ejercicios_1_2
        "Ejercicios_1_2/main.cpp"
        "Ejercicios_1_2/Persona.h"
        "Ejercicios_1_2/Persona.cpp"
        "Ejercicios_1_2/Estudiante.h"
        "Ejercicios_1_2/Estudiante.cpp"
)

target_link_libraries(Ejercicios_1_2 PRIVATE fmt::fmt)

add_executable(Ejercicios_3_7
        "Ejercicios_3_7/main.cpp"
        "Ejercicios_3_7/Funciones.cpp"
        "Ejercicios_3_7/Funciones.h"
        "Ejercicios_3_7/Matematicas.cpp"
)

target_link_libraries(Ejercicios_3_7 PRIVATE fmt::fmt)
target_link_libraries(Ejercicios_3_7 PRIVATE Matematicas)