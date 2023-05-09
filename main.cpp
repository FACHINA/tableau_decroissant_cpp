#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int effectif , note, n = 1 , i , j , min, index_min ;
    string nom, nom_min;

    cout << "Entrer l'effectif de la classe" << endl;
    cin >> effectif;

    int tableau_note[effectif];
    string tableau_nom[effectif];

    for(i = 0 ; i < effectif ; i++){

        cout << "Entrer le nom de l'etudiant numero " << n  << endl;
        cin >> nom;
        tableau_nom[i] = nom;

        cout << "Entrer la note de l'etudiant " << nom << endl;
        cin >> note;
        tableau_note[i] = note;

        n = n + 1;
    }

    for(i = 0; i < (effectif -1)  ; i++){

        min = tableau_note[i];
        index_min = i;

        for(j = i+1 ; j < effectif; j++){

            if(tableau_note[j] < min){

                min = tableau_note[j];
                index_min = j;
                nom_min = tableau_nom[j];

            }

        }

        note = tableau_note[i];
        nom = tableau_nom[i];

        tableau_note[i] = min;
        tableau_nom[i] = nom_min;

        tableau_note[index_min] = note;
        tableau_nom[index_min] = nom;

    }

    cout << "Affichage des notes par ordre croissant" << endl;

    for(i=0 ; i < effectif ; i++){

        cout << tableau_nom[i] << " : " << tableau_note[i] <<endl;

    }

    return 0;
}
