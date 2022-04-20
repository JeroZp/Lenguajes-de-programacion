#include <iostream>
#include <string>
#include "Menu.cpp"
#include "eJcoco.cpp"
#include "SistemaO.cpp"
using namespace std;


int main() {
    Menu *m = new Menu();
    SistemaO *sis = new SistemaO();
    eJcoco *eJ = new eJcoco();

    cout << m->pantalla() << endl;
    int val;
    cin >> val;
    m->setValor(val);

    cout << sis->verificar() << endl;
    return 0;
}
