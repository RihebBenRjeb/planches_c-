#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x,minimum,i;
    cout << "donner un entier " << endl;
    cin>> minimum;
    for(int i =1;i<=9;i++){
        cout << "donner un entier " << endl;
        cin >> x ;
        if (x<minimum){
            minimum=x;
        }
    }
    cout<< " le minimum est "<<minimum;

    return 0;
}
