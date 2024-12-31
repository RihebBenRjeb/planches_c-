//Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include"Vehicule.h"
#include"Camion.h"
#include"Voiture.h"
using namespace std;

int main()
{
    Voiture v(2011,12.5,5);
    v.afficher();
    v.accelerer();
    Camion c(2011,6.5,1024);
    c.afficher();
    c.accelerer();
    return 0;
}
