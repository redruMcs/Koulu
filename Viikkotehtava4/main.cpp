#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas A("Aapeli", 1000);
    A.talletus(250);
    A.luotonNosto(150);
    A.showSaldo();

    cout << endl;

    Asiakas B("Bertta", 1000);

    A.showSaldo();
    cout << "Pankkitili: Aapeli siirtaa 50 Bertta:lle" << endl;
    A.tiliSiirto(50, B);

    A.showSaldo();
    B.showSaldo();

    return 0;
}
