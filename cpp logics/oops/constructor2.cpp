#include <iostream>
using namespace std;

class Bank {
public:
    int interest;
    int Amount;
    string name;

    Bank(int p, int q, string r) {
        interest = p;
        Amount = q;
        name = r;
    }

    void savingAcc() {
        cout << "Name: " << name
             << "\nInterest: " << interest
             << "\nAmount: " << Amount << endl;
    }

    void CurrentAcc() {
        cout << "Name: " << name
             << "\nInterest: " << interest
             << "\nAmount: " << Amount << endl;
    }

    void MutualfundAcc() {
        cout << "Name: " << name
             << "\nInterest: " << interest
             << "\nAmount: " << Amount << endl;
    }
};

int main() {

    Bank c1(12200, 220000, "Niharika");
    //  Bank c2(12200, 220000, "Niharika");

    c1.savingAcc();
    c1.CurrentAcc();
    c1.MutualfundAcc();

    return 0;
}
    