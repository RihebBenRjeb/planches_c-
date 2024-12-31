#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int n,fact;
    cout << "donner un entier positif n : " << endl;
    cin>>n;
    while(n<0)
    {
        cout << "donner un entier positif n : " << endl;
        cin>>n;
    }
    if (n==0 || n==1)
        fact=1;
    else {
        fact=1;
        for (int i=2;i<=n;i++){
           fact=fact*i;
        }
    }
    cout<<" le factoriel de "<<n<<" est : "<<fact;
    return 0;
}
