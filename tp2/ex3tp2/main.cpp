#include <iostream>
#include<utility>
using namespace std;
int incadr(int *x){
    *x=*x+1;
    return *x;
}
int incval(int x){
    x++;
    return x;
}
int incref(int &x){
    x=x+1;
    return x;
}
pair<int,int>echangeval(int x,int y){
    int d;
    d=x;
    x=y;
    y=d;
    return{x,y};
}
pair<int,int>echangeadr(int* x,int* y){
    int* d=new int;
    *d=*x;
    *x=*y;
    *y=*d;
    delete d;
    return{*x,*y};
}
pair<int,int>echangeref(int &x,int &y){
    int d=x;
    x=y;
    y=d;
    return{x,y};
}


int main()
{
    int x,y;
    cout << "entrer un entier x: " << endl;
    cin>>x;
    cout << "entrer un entier y: " << endl;
    cin>>y;
    cout<<"la valeur de x avant le changement est : "<<x<<endl;
    cout<<"la valeur de x apres incrementation et passage par valeur  est : "<<incval(x)<<endl;
    cout<<"la valeur de x apres incrementation et passage par reference  est : "<<incref(x)<<endl;
    //la valeur de x sera modifier apres l'appel de la incref ou incadr mais change juste pendant l'appel
    cout<<"la valeur de x apres incrementation et passage par adresse  est : "<<incadr(&x)<<endl;
    //juste plus pour comprendre plus mieux
    auto result=echangeval(x,y);
    cout<<" les valeurs de x et y avant la permutation sont: "<<x<<" , "<<y<<"et apres permutation : "<<result.first<<" , "<<result.second<<endl;
    //echange avec adresse
     cout<<x<<" , "<<y<<endl;
     auto result1=echangeadr(&x,&y);
    cout<<" les valeurs de x et y avant la permutation sont: "<<x<<" , "<<y<<"et apres permutation : "<<result1.first<<" , "<<result1.second<<endl;
    cout<<x<<" , "<<y<<endl;
    pair<int,int> result2=echangeref(x,y);
    cout<<" les valeurs de x et y avant la permutation sont: "<<x<<" , "<<y<<"et apres permutation : "<<result2.first<<" , "<<result2.second<<endl;
    cout<<x<<" , "<<y<<endl;
    return 0;
}
