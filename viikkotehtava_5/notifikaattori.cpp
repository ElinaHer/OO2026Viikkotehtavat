#include "notifikaattori.h"
#include "seuraaja.h"

Notifikaattori::Notifikaattori()
{
    cout << "Luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *lisays)
{
    cout << "Notifikaattori lisaa seuraajan " << lisays->getNimi() << endl;
    lisays -> next = seuraajat;
    seuraajat = lisays;

}
void Notifikaattori::poista(Seuraaja *ohitus)
{
    cout << "Notifikaattori poistaa seuraajan " << ohitus->getNimi() << endl;

    Seuraaja *nykyinen = seuraajat;

    if(seuraajat == ohitus){
        seuraajat = seuraajat -> next;
        return;
    }

    while(nykyinen != nullptr){
        if(nykyinen ->next == ohitus){
            nykyinen -> next = nykyinen -> next -> next;
            return;
        }
        nykyinen = nykyinen ->next;


    }

}

void Notifikaattori::tulosta()
{
    Seuraaja *o = seuraajat;

    cout << "Notifikaattorin seuraajat: " << endl;

    while (o != nullptr){
        cout << o->getNimi() << endl;
        o = o->next;
    }


}

void Notifikaattori::postita(string text)
{
    cout << "Notifikaattori postaa viestin " << text << endl;

    Seuraaja *o = seuraajat;

    while(o != nullptr){
        o ->paivitys(text);
        o = o -> next;
    }

}



