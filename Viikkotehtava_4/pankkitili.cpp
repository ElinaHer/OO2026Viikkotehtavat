#include "pankkitili.h"
#include <iostream>


Pankkitili::Pankkitili(string Nimi)
{
    omistaja=Nimi;
    cout << "Pankkitili luotu omistajalle: " << omistaja << endl;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double Talletus)
{
    if(Talletus>0){
        saldo = Talletus + saldo;
        return true;

    }

    else{
        return false;
    }
}

bool Pankkitili::withdraw(double Nosto)
{
    if(Nosto>0 && Nosto<saldo){
        saldo = saldo - Nosto;
        return true;
    }

    else{
        return false;
    }
}
