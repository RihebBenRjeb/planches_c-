//Riheb BEN RJEB CPI2 GRP A
#include "RobotChasseur.h"
#include"Robot.h"
#include"Point.h"
#include "iostream"
using namespace std;
RobotChasseur::RobotChasseur(string nom,double x,double y,double portee,bool statut):Robot(nom,x,y,portee,statut){}
bool RobotChasseur::tester(const Robot& r)const{
    return(Point::distance(getPosition(),r.getPosition())<=getPortee());
}
RobotChasseur* RobotChasseur::deplace(double dx, double dy)const {
    return new RobotChasseur(getNom(), dx, dy, getPortee(), getStatut());
}
void RobotChasseur::tuer( Robot& r)const{
    if(tester(r)){
        r.setStatut(true);
        cout<<"le robot "<<r.getNom()<<" est tue "<<endl;
    }
    else{
        cout<<"impossible de le tuer "<<endl;
    }
}
