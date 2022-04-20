#include <iostream>
#include "Menu.cpp"
#include "SistemaO.cpp"
using namespace std;

int main() {

    Menu *m = new Menu();
    SistemaO *s = new SistemaO();

    cout << s->verificar();
    cout << m->pantalla();
    int sw;
    cin >> sw;

    m->setValor(sw);
    m->swtCs(m->getValor());

    return 0;
 }
