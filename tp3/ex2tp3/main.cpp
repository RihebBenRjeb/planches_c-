//Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include<vector>
#include <array>
using namespace std;
int* allocationDynamique( int SIZE) {
    int* tab = new int[SIZE];
    int x;
    for (int i = 0; i < SIZE; i++) {
        cout<<"donner un entier pour tab"<<endl;
        cin>>x;
        tab[i] = x;
    }
    return tab;
}
vector<int> remplirVector(int SIZE) {
    vector<int> v;
    int x;
    for (int i = 0; i < SIZE; i++) {
        cout<<"donner un entierpour vector : "<<endl;
        cin>>x;
        v.push_back(x);
    }
    return v;
}
std::array<int,5> remplirArray() {
    std::array<int,5> tab;
    int x;
    for (int i = 0; i < 5; i++) {
        cout << "Donner un entier pour array  : " << endl;
        cin >> x;
        tab[i] = x;
    }
    return tab;
}
void recherchetab(int* tab,int val,int SIZE){
    bool test=false;
    for(int i=0;i<SIZE;i++){
        if(tab[i]==val){
            cout<<val<<" se trouve dans le tableau à la position "<<i<<endl;
            test=true;
            break;
        }
    }
    if(test==false){
        cout<<val<< " ne se trouve pas dans le tableau "<<endl;
    }
}
void recherchevector(vector<int> tab,int val){
    bool test=false;
    for(int i=0;i<tab.size();i++){
        if(tab[i]==val){
            cout<<val<<" se trouve dans le tableau à la position "<<i<<endl;
            test=true;
            break;
        }
    }
    if(test==false){
        cout<<val<< " ne se trouve pas dans le vector "<<endl;
    }
}
void recherchearray(array<int,5> tab,int val){
    bool test=false;
    for(int i=0;i<5;i++){
        if(tab[i]==val){
            cout<<val<<" se trouve dans le tableau à la position "<<i<<endl;
            test=true;
            break;
        }
    }
    if(test==false){
        cout<<val<< " ne se trouve pas dans le array "<<endl;
    }
}
int main()
{
    const int SIZE=5;
    int* tab=allocationDynamique(SIZE);
    vector<int> v=remplirVector( SIZE);
    std::array<int,5> array1=remplirArray();
    recherchetab( tab,8,SIZE);
    recherchevector(v,-1);
    recherchearray(array1,6);
    return 0;
}
