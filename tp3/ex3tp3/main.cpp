#include <iostream>
#include<vector>
using namespace std;
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
int produitVec(vector<int> v1,vector<int> v2){
    int prod=0;
    for(int i=0;i<v1.size();i++){
        prod+=v1[i]*v2[i];
    }
    return prod;
}
int main()
{
    const int SIZE=3;
    vector<int> v1=remplirVector(SIZE);
    vector<int> v2=remplirVector(SIZE);
    cout<<"le produit de v1 et v2 est : "<<produitVec(v1,v2)<<endl;
    return 0;
}
