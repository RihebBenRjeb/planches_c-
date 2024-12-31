//Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include<vector>
#include <utility>
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
pair<int,int> min_max(vector<int> v1){
    int mini=v1[0];
    int maxi=v1[0];
    for(int i=0;i<v1.size();i++){
        if(v1[i]>maxi){
            maxi=v1[i];
        }
        if(v1[i]<mini){
            mini=v1[i];
        }
    }
    return {mini,maxi};
}
int main()
{
    const int SIZE=5;
    vector<int> v1=remplirVector(SIZE);
    pair<int,int> pair1=min_max(v1);
    cout<<"le min de ce vector est : "<<pair1.first<<" et le max est : "<<pair1.second<<endl;
    return 0;
}
