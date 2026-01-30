
#include "luottotili.h"
#include <iostream>

Luottotili::Luottotili(string a , double lRaja): Pankkitili(a)
{
    luottoRaja = lRaja;
}

bool Luottotili::deposit(double luottoTalletus)
{
    if(luottoTalletus>0){
        saldo = luottoTalletus+saldo;
        cout << "Luottotalletus = " << luottoTalletus << endl;

        return true;
    }

    else{
        return false;
    }

}

bool Luottotili::withdraw(double luottoNosto)
{
    if(saldo-luottoNosto<-luottoRaja){
        cout << "Luottoraja ylittyy!" << endl;
        return false;

    }
    else{
        saldo=saldo-luottoNosto;
        return true;
    }
}

