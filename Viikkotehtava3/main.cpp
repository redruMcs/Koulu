#include <iostream>
#include <string>

using namespace std;

class Chef {
private:
    string chefName;

public:
    Chef(const string& name) : chefName(name) {
        cout << "Chef " << chefName << " konstruktori" << endl;
    }

    ~Chef() {
        cout << "Chef " << chefName << " destruktori" << endl;
    }

    string getName() const {
        return chefName;
    }

    int makeSalad(int ingredients) {
        cout << ingredients << " ingredients can make:" << endl;
        return ingredients / 5;
    }

    int makeSoup(int ingredients) {
        cout << ingredients << " ingredients can make:" << endl;
        return ingredients / 3;
    }
};

class ItalianChef : public Chef {
private:
    string password = "pizza";
    int flour;
    int water;

    int makePizza() {
        int pizzas = min(flour / 5, water / 5);
        cout << "ItalianChef with " << flour << " flour and " << water << " water can make " << pizzas << " pizzas." << endl;
        flour -= pizzas * 5;
        water -= pizzas * 5;
        cout << "ItalianChef made " << pizzas << " pizzas." << endl;
        return pizzas;
    }

public:
    ItalianChef(const string& name) : Chef(name), flour(0), water(0) {
        cout << "ItalianChef konstruktori." << endl;
    }

    ~ItalianChef() {
        cout << "ItalianChef destruktori." << endl;
    }

    bool askSecret(const string& pass, int flourAmount, int waterAmount) {
        if (pass == password) {
            cout << "Password ok!" << endl;
            flour = flourAmount;
            water = waterAmount;
            makePizza();
            return true;
        } else {
            cout << "Password incorrect." << endl;
            return false;
        }
    }
};

int main() {
    Chef chef("Gordon");
    cout << "Chef " << chef.getName() << " with " << chef.makeSalad(10) << " salads." << endl;
    cout << "Chef " << chef.getName() << " with " << chef.makeSoup(9) << " soups." << endl;

    ItalianChef italianChef("Luigi");
    italianChef.askSecret("pizza", 25, 20);

    return 0;
}
