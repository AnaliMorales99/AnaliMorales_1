/******************************************************************************

                              Online C++ Compiler.
Primera Actividad de lenguajes de programación 1
Desarrollado por Anali Morales Santos
10/08/2024

*******************************************************************************/

#include <iostream>
#include <stdio.h>

int main()
{
    int edad;
    std::cout<<"ingrese su edad: ";
    std::cin >> edad;
    
    if (edad >=18) {
        std::cout << "usted es mayor de edad." << std::endl;
    } else { 
        std::cout << "usted es menor de edad." << std::endl;
    }
    

    return 0;
}