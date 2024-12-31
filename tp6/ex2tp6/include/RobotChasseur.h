//Riheb BEN RJEB CPI2 GRP A
#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H
#include"robot.h"

class RobotChasseur: public Robot
{
    public:
        RobotChasseur(string nom,double x,double y,double portee,bool statut);
        RobotChasseur* deplace(double dx,double dy)const ;
        bool tester(const Robot& r)const;
        void tuer( Robot& r)const;
};

#endif // ROBOTCHASSEUR_H
