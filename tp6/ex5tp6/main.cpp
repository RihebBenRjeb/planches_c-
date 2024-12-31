//Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include "Contractuel.h"
#include "Personne.h"
#include "Enseignant.h"
#include "Etudiant.h"

using namespace std;

int main()
{
    Etudiant e("Riheb",20,"Fille","CPI2");
    e.getPersonne();
    Enseignant en("x",34,"Fille",12.5);
    en.getPersonne();
    Contractuel c("y",27,"homme","GL",45);
    c.getPersonne();
    return 0;
}
