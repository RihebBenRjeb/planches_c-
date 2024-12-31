//Riheb BEN RJEB CPI2 GRP A
#include "RobotChasseur.h"
#include"Robot.h"
#include"Point.h"
#include "iostream"
using namespace std;

int main()
{
    RobotChasseur robotChass1 ("Optimus",2,3,25.0,false);
    RobotChasseur* robotChass = robotChass1.deplace(35.00, 22.0);  // Utiliser un pointeur
    robotChass->afficher();
    Robot r1("x", 1, 1, 25, false);
    Robot r2("y", 30, 20, 25, false);
    robotChass->tuer(r1);
    robotChass->tuer(r2);
    delete robotChass;
    return 0;
}
