#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Pankkitili k("Kari");
    k.deposit(-10);
    k.deposit(100);
    k.withdraw(200);
    k.withdraw(50);
    cout << "saldo = "<<k.getBalance() << endl;

    Luottotili A("Pekka",200);
    A.deposit(-20);
    A.deposit(200);
    cout << "saldo = " << A.getBalance() << endl;
    A.withdraw(200);
    A.withdraw(60);
    cout << "saldo = " << A.getBalance() << endl;

    Asiakas B("Matti", 300);
    cout << B.getNimi() << endl;
    B.showSaldo();
    B.talletus(100);
        B.nosto(60);
    B.luotonNosto(100);
        B.luotonMaksu(50);
    B.showSaldo();

    Asiakas C("Jaakko", 200);
    cout << C.getNimi() << endl;
     C.talletus(100);
    C.tiliSiirto(10, B);
    C.nosto(50);
    C.luotonNosto(100);
    C.luotonMaksu(200);
    C.showSaldo();
}
