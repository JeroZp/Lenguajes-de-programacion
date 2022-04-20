//
// Created by perez on 19/04/2022.
//

#include "Menu.h"
#include "eJcoco.cpp"
#include <string>
#include <iostream>
using namespace std;

string Menu::pantalla() {
    return "Bienvendio, Indique el programa a ejecutar: \n1.Calculadora\n2.Factorial\n3.Pascal\n";
}

void Menu::setValor(int v) {
    valor = v;
}

int Menu::getValor() {
    return valor;
}

void Menu::swtCs(int swt, eJcoco ej) {
    switch (swt){
        case 1:
            //agregar los cin y cout dependiendo del Jcoco
            ej.calculadora();

        case 2:
            //agregar los cin y cout dependiendo del Jcoco
            ej.factorial();

        case 3:
            //agregar los cin y cout dependiendo del Jcoco
            ej.pascal();
    }
}

Menu::Menu() {
    valor;
}
