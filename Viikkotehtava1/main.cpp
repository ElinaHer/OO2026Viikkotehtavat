#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main(){
 srand(time(0));

 int yritykset = game(40);
 cout << "yritykset: " << yritykset; //tulostaa yritysten määrän

 return 0;

}

int game(int maxnum){
    int arvaus;
    int etsittavaLuku;
    int laskuri = 0;

    etsittavaLuku = rand()% maxnum + 1; // %laskee jakojäännöksen, +1 avulla väli on 1-maxnum
    //cout<<"random arvo on [0, " << maxnum <<"]: " << std::rand()<<'\n';
    cout << "Arvaa luku 1-" << maxnum << endl; //tulostaa

    do{ //aloittaa silmukan ja tarkistaa lopussa ehdon
        cout << "Anna arvaus: " << endl;
        cin >> arvaus; //lukee arvauksen
        laskuri++; //lisää arvausten määrää

        if (arvaus == etsittavaLuku){
            cout << "oikein" << endl;
        }
        else if (arvaus < etsittavaLuku){
            cout << "liian pieni" << endl;
        }
        else{
            cout << "liian suuri" << endl;
            }
        }while (arvaus != etsittavaLuku); //toistaa kunnes ehto täyttyy

    return laskuri;
}


