/*Riheb Ben Rjeb CPI2 grp A*/
/* pour cet exercice j'ai utilisé des resources parce qu'on a pas étudier la biblitheque random dans la classe */
#include <iostream>
#include <random>
#include <ctime>

using namespace std;
int alea(int premier, int dernier, mt19937& gener) {
    uniform_int_distribution<> dist(premier, dernier);
    return dist(gener);
}
double alead(double premierd, double dernierd, mt19937& gener) {
    uniform_real_distribution<> dist(premierd, dernierd);
    return dist(gener);
}
int main() {
    int x,y;
    double z,f;
    cout << "donner le premier nombre de l'intervale: " << endl;
    cin >> x;
    cout << "donner le dernier nombre de l'intervale: " << endl;
    cin >> y;
    cout << "donner le premier reel de l'intervale: " << endl;
    cin >> z;
    cout << "donner le dernier reel de l'intervale: " << endl;
    cin >> f;
    mt19937 gener(static_cast<unsigned int>(time(0)));
    for (int i =0 ; i<5; i++){
        cout   << alea(x,y,gener) << endl;
    }
    for (int i =0 ; i<5; i++){
        cout   << alead(z,f,gener) << endl;
    }
}
