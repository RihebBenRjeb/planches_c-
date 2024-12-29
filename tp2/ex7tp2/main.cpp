/*Riheb Ben Rjeb CPI2 grp A*/
#include <iostream>

using namespace std;
 double u(int N){
        double res=0;
        if (N==0){
            return 3;
        }
        else{
            res+=3*u(N-1)+4;
        }
        return res;
    }

int main()
{
    int N;
    cout<<"donner un entier N : "<<endl;
    cin>>N;
    cout<<u(N);
}
