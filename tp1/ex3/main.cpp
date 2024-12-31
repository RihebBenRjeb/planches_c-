#include <iostream>
#include<cmath>

using std::cout;
using std::endl;
using std::cin;
float distance(int xa,int ya,int xb,int yb ){
    float d ;
    d=pow((pow((xb-xa),2)+pow((yb-ya),2)),0.5);
    return d;
}
int main()
{
    int xa,ya,xb,yb;
    cout <<" donner l'abscisse su point A "<<endl;
    cin>> xa;
    cout <<" donner l'ordonnée  su point A "<<endl;
    cin>> ya;
    cout <<" donner l'abscisse su point B "<<endl;
    cin>> xb;
    cout <<" donner l'ordonnée su point B "<<endl;
    cin>> yb;
    cout<<" la distance AB est : "<<distance(xa,ya,xb,yb);


    return 0;
}
