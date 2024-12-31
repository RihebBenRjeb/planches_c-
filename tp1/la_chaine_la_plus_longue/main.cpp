#include <iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string tab[5];
    int i ;
    for (i=0;i<=4;i++){
        cout<<" donner une chaine : "<<endl;
        cin >>tab[i];
    }
    //cout<<max(tab[0].length(),tab[1].length(),tab[2].length(),tab[3].length(),tab[4].length());

    string  chl=tab[0];
    for (int i =1;i<=4;i++){
        if (tab[i].length()>chl.length())
            chl=tab[i];
    }
    cout<<"la chaine la plus longue est : "<<chl;
    return 0;
}
