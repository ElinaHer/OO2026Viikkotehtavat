#include "asiakas.h"

Asiakas::Asiakas(string Nimi, double lRaja): kayttotili(Nimi), luottotili(Nimi,lRaja)
{
    nimi=Nimi;
    cout << "asiakas luotu " << nimi << endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout<<"PankkitilinSaldo: "<< kayttotili.getBalance() <<endl;
    cout<<"LuottotilinSaldo: "<< luottotili.getBalance() <<endl;
}

bool Asiakas::talletus(double talletus)
{
    if(talletus<0){
        return false;
    }
    else {
        kayttotili.deposit(talletus);
        return true;
    }
}

bool Asiakas::nosto(double nosto)
{
   return kayttotili.withdraw(nosto);
}

bool Asiakas::luotonMaksu(double maksu)
{
    return luottotili.deposit(maksu);
}

bool Asiakas::luotonNosto(double lNosto)
{
    return luottotili.withdraw(lNosto);
}

bool Asiakas::tiliSiirto(double tarkistus, Asiakas& siirto)
{
    if(tarkistus <0 || tarkistus > kayttotili.getBalance()){
        cout << "Siirto ei onnistu" << endl;
        return false;
    }
    else{
        nosto(tarkistus);
        cout << getNimi() << " siirtaa summan: " << tarkistus << " henkilolle " << siirto.getNimi() << endl;

        return true;
    }
}
