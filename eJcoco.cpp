//
// Created by perez on 19/04/2022.
//

#include "eJcoco.h"

using namespace std;


eJcoco::eJcoco() {

}

void eJcoco::calculadora() {
    system("java -jar JCoCo.jar PuntoC.casm");
}

void eJcoco::factorial() {
    system("java -jar JCoCo.jar PuntoB.casm");
}

void eJcoco::pascal() {
    system("java -jar JCoCo.jar PuntoA.casm");
}

