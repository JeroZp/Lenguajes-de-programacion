//
// Created by perez on 19/04/2022.
//

#include "Menu.h"
#include "eJcoco.cpp"
#include <string>

using namespace std;

string Menu::pantalla() {
    return "Bienvenido, Indique el programa a ejecutar: \n1.Calculadora\n2.Factorial\n3.Pascal\n";
}

void Menu::setValor(int v) {
    valor = v;
}

int Menu::getValor() {
    return valor;
}

void Menu::swtCs(int swt) {

    eJcoco *j = new eJcoco();

    switch (swt){

        case 1:
            j->calculadora();
            break;

        case 2:
            j->factorial();
            break;

        case 3:
            j->pascal();
            break;
    }
}

Menu::Menu() {
    valor;
}