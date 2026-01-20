#include "Chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string s){

    chefName = s;
    cout<<"Chef = " <<chefName << " konstruktori " << endl;
}

Chef::~Chef(){
    cout<<"Chef = " << chefName << " destruktori" << endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int viisiainesta)
{
    cout<<"Chef = " << chefName << " with " << viisiainesta << " items can make salad " << viisiainesta/5 << endl;
    return viisiainesta/5;
}
int Chef::makeSoup(int kolmeainesta)
{
    cout<<"Chef = " << chefName << " with " << kolmeainesta << " items can make soup " << kolmeainesta/3 << endl;
    return kolmeainesta/3;
}
