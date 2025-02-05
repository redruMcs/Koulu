#include "pankkitili.h"

Pankkitili::Pankkitili(string o) : omistaja(o) {
    cout << "Pankkitili luotu " << omistaja << ":lle" << endl;
}

bool Pankkitili::deposit(double summa)
{
    if (summa <= 0) return false;

    saldo += summa;
    cout << "Pankkitili: talletus " << summa << " tehty" << endl;
    return true;
}

bool Pankkitili::withdraw(double summa)
{
    if (summa > 0 && saldo >= summa) {
        saldo -= summa;
        cout << "Pankkitili: nosto " << summa << " tehty" << endl;
        return true;
    }
    return false;
}

double Pankkitili::getBalance() const {
    return saldo;
}
