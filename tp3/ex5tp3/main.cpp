//  Riheb BEN RJEB CPI2 GRP A
/*map est beaucoup plus efficace pour la recherche de valeurs associées à une clé unique (nom de ville ici) . en effet si on veut
rechercher fréquemment des villes par leur nom, une map sera la solution optimale en termes de performance. */
#include <iostream>
#include<vector>
#include<map>
#include<utility>
using namespace std;
struct ville{
    string nom;
    pair<double,double> position;
};
ville creation(){
    ville vil;
    string nom;
    double x,y;
    cout<<"donner le nom de la ville "<<endl;
    cin>>nom;
    cout<<"donner la position longitude de la ville :  "<<endl;
    cin>>x;
    cout<<"donner la position latitude de la ville :  "<<endl;
    cin>>y;
    vil.nom=nom;
    vil.position={x,y};
    return vil;

}
void trouverPos(map <string,ville> villes,string name){
    if(villes.find(name) != villes.end()){
        cout<<"la position longitude de la ville "<<name<<" "<<villes[name].position.first<<" et la position latitude est : "<<villes[name].position.second<<endl;
    }
    else{
        cout<<" cette ville n'existe pas dans villes!"<<endl;
    }
}
void trouverPosVec(const vector<ville>& villes, const string& name) {
    bool existe = false;
    for (const auto& v : villes) {
        if (v.nom == name) {
            cout << "La position longitude de la ville " << name << " est " << v.position.first << " et la position latitude est " << v.position.second << endl;
            existe = true;
            break;
        }
    }
    if (!existe) {
        cout << "Cette ville n'existe pas dans les villes!" << endl;
    }
}
int main()
{
    // solution avec les map
    map<string,ville>villes;
    villes["Tunis"]=creation();
    villes["Sfax"]=creation();
    villes["Gabes"]=creation();
    string name;
    cout<<"donner le nom de la ville "<<endl;
    cin>>name;
    trouverPos(villes,name);
    // solution avec vector
    vector<ville> vil;
    vil.push_back(creation());
    trouverPosVec(vil,name);
    return 0;
}
