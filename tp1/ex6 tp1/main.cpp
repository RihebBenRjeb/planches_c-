#include <iostream>

using std::cout;
using std::endl;
using std::cin;
void echangep(int *a,int *b ){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void  echange(int a , int b){
    int c;
    c=a;
    a=b;
    b=c;

}
int main()
{
    int a,b;
    cout << "donner a : " << endl;
    cin>>a;
    cout << "donner b : " << endl;
    cin>>b;
    cout<<" en utilisant les pointeurs dans la permutation : "<<endl;
    cout << "Avant permutation : a = " << a << ", b = " << b << endl;
    echangep(&a, &b);  // Passe les adresses de a et b
    cout << "Après permutation : a = " << a << ", b = " << b << endl;
    cout<<" en utilisant une variable de passage dans la permutation : "<<endl;
    cout << "Avant permutation : a = " << a << ", b = " << b << endl;
    echange(a,b);  // Passe les valeurs  de a et b
    cout << "Après permutation : a = " << a << ", b = " << b << endl;
    return 0;
}
