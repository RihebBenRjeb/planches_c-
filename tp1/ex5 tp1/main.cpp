#include <iostream>
#include<cmath>
using std::cout;
using std ::endl;
using std::cin;
double f(double x,bool &ok){
    double eq=(x-1)*(x-2);
    if(eq>=0){
        ok=true;
        return sqrt(eq);
    }
    else{
        ok=false;
        return 0.0;
    }
}
int main()
{
    double x;
    bool ok;
    cout << "donner un réel x " << endl;
    cin>>x;
    double res=f(x,ok);
    if(ok){
        cout<<"la resultat est :"<<res;
    }
    else{
        cout<<"la fonction n'est pas definie pour x ="<<x;
    }
    return 0;
}
