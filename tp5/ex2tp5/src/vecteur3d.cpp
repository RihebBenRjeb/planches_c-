//Riheb BEN RJEB CPI2 GRP A

#include "vecteur3d.h"
using namespace std;
vecteur3d::vecteur3d(float x,float y,float z):x(x),y(y),z(z){}
void vecteur3d::affichage()const{
    cout<<"( "<<x<<","<<y<<","<<z<<")"<<endl;
}
vecteur3d vecteur3d::somme(const vecteur3d& v1,const vecteur3d& v2){
    return vecteur3d(v1.x+v2.x,v1.y+v2.y,v1.z+v2.z);
}
float vecteur3d::produit(const vecteur3d &v1,const vecteur3d &v2){
    return(v1.x*v2.x+v1.y*v2.y+v1.z*v2.z);
}
bool vecteur3d::coincide(const vecteur3d& v1,const vecteur3d &v2){
  return(v1.x==v2.x && v1.y==v2.y && v1.z+v2.z) ;
}
float vecteur3d::norme()const{
    return sqrt(x * x + y * y + z * z);
}
vecteur3d vecteur3d::normaxV(const vecteur3d& v1, const vecteur3d& v2) {
    return (v1.norme() > v2.norme()) ? v1 : v2;
}
vecteur3d* vecteur3d::normaxA(const vecteur3d& v1, const vecteur3d& v2) {
    return (v1.norme() > v2.norme()) ? const_cast<vecteur3d*>(&v1) : const_cast<vecteur3d*>(&v2);
}

vecteur3d& vecteur3d::normaxR(const vecteur3d& v1, const vecteur3d& v2) {
    return (v1.norme() > v2.norme()) ? const_cast<vecteur3d&>(v1) : const_cast<vecteur3d&>(v2);
}
