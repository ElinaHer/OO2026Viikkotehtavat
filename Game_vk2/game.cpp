#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int max)
{
    maxNumber = max;

    srand(time(0));

}

void Game::play()
{
    cout<< "GAME CONSTRUCTOR: objet initialized with 10 as a maximum value"<<endl;

    randomNumber = rand()% maxNumber + 1;
    cout << "Arvaa luku 1-" << maxNumber << endl;
    numOfGuesses = 0;

    do{
        cout << "Anna arvaus: " << endl;
        cin >> playerGuess; //lukee arvauksen
        numOfGuesses++; //lisää arvausten määrää

        if (playerGuess == randomNumber){
            cout << "oikein" << endl;
        }
        else if (playerGuess < randomNumber){
            cout << "liian pieni" << endl;
        }
        else{
            cout << "liian suuri" << endl;
        }
    }while (playerGuess != randomNumber);

    printGameResult();
}

void Game::printGameResult()
{
  cout << "Oikea vastaus: " << randomNumber<<endl;
  cout << "yritykset: " << numOfGuesses<<endl;
  cout << "GAME DESTRUCTOR: object cleared from stack memory";
}
