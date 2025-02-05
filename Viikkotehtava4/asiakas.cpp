#include "asiakas.h"

Asiakas::Asiakas(string n, double lr)
    : nimi(n), kayttotili(n), luottotili(n, lr) {
    cout << "Asiakkuus luoto " << nimi << endl;
    cout << "Kayttotilin saldo " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo " << luottotili.getBalance() + lr << endl;
}

void Asiakas::showSaldo() const {
    cout << endl;
    cout << nimi << endl;
    cout << "Kayttotilin saldo " << kayttotili.getBalance() << endl;
    cout << "Luottotili saldo " << luottotili.getBalance() + 1000 << endl;
}

bool Asiakas::talletus(double summa) {
    cout << endl;
    cout << nimi << endl;
    bool onnistuiko = kayttotili.deposit(summa);
    return onnistuiko;
}

bool Asiakas::nosto(double summa) {
    return kayttotili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa) {
    return luottotili.deposit(summa);
}

bool Asiakas::luotonNosto(double summa) {
    return luottotili.withdraw(summa);
}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja) {
    //cout << "Pankkitili: " << nimi << " siirtaa " << summa << " " << saaja.getNimi() << ":lle" << endl;
    if (kayttotili.withdraw(summa)) {
        saaja.talletus(summa);
        return true;
    }
    return false;
}
