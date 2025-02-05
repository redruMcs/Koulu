#include "luottotili.h"

Luottotili::Luottotili(string o, double lr)
    : Pankkitili(o), luottoRaja(lr) {
    cout << "Luottotili luotu " << omistaja << ":lle, luottoraja " << luottoRaja << endl;
}

bool Luottotili::deposit(double summa)
{
    if (summa <= 0) return false;

    saldo += summa;
    cout << "Luottotili: talletus " << summa << " tehty" << endl;
    return true;
}

bool Luottotili::withdraw(double summa)
{
    if (summa > 0 && (saldo - summa) >= -luottoRaja) {
        saldo -= summa;
        cout << "Luottotili: nosto " << summa << " tehty, luottoa jaljella " << (luottoRaja + saldo) << endl;
        return true;
    }
    return false;
}
