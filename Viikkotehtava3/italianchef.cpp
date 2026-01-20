#include "italianChef.h"
#include <iostream>

using namespace std;


italianChef::italianChef(string s) : Chef(s){

    chefName= s;
    cout<<"italianChef = " << chefName << " konsturktori" << endl;

}

    italianChef::~italianChef(){
    cout << "italianChef = " << chefName << " destruktori" << endl;
}

    bool italianChef::askSecret(string s,int flour,int water){
        if(password.compare(s) == 0){
            cout << "Password OK!" << endl;
            makepizza(flour,water);

            return true;
        }
        else{
            return false;
        }

    }
    int italianChef::makepizza(int aines1 ,int aines2){
        cout<<"Chef = " << chefName << " with " << aines1 << " and " << aines2 << " can make pizza " <<  min(aines1/5, aines2/5) <<endl;
        return min(aines1/5, aines2/5);
    }
