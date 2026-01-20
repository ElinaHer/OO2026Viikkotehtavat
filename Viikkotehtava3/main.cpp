#include <iostream>
#include "Chef.h"
#include "italianchef.h"
//#include "italianchef.h"

using namespace std;

int main()
{
    Chef Chef("Gordon");
    Chef.makeSalad(11);
    Chef.makeSoup(14);

    italianChef italianChef("Mario");
    italianChef.makeSalad(9);
    italianChef.askSecret("pizza",12,12);

    return 0;
}
