#include <iostream>

using namespace std;
bool valeur(int x,int y){
    if(x==y){
        return true;
    }
    else{
        return false;
    }
}
bool adresse(int *x,int *y){
    if(*x==*y){
        return true;
    }
    else{
        return false;
    }
}
bool refe(int &x,int &y){
    if(x==y){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int x,y;
    cout << "donner x: " << endl;
    cin>>x;
    cout << "donner y: " << endl;
    cin>>y;
    if(valeur(x,y)){
        cout<<x<<" et "<<y<<" sont egaux"<<endl;
    }
    else{
        cout<<x<<" et "<<y<<" ne sont pas egaux"<<endl;
    }
     if(adresse(&x,&y)){
        cout<<x<<" et "<<y<<" sont egaux"<<endl;
    }
    else{
        cout<<x<<" et "<<y<<" ne sont pas egaux"<<endl;
    }
     if(refe(x,y)){
        cout<<x<<" et "<<y<<" sont egaux"<<endl;
    }
    else{
        cout<<x<<" et "<<y<<" ne sont pas egaux"<<endl;
    }
    return 0;
}
