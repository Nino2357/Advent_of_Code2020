#include <string>
#include <cmath>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(void)
{
    string temp_ligne;
    char temp_symbole;
    int nb_ligne_ok_c1 = 0; // 1:1
    int nb_ligne_ok_c2 = 0; // 3:1
    int nb_ligne_ok_c3 = 0; // 5:1
    int nb_ligne_ok_c4 = 0; // 7:1
    int nb_ligne_ok_c5 = 0; // 1:2
    int pos_x = 0;
    int pos_y = 0;
    char arbre ='#';
    string nom_fic="liste.txt";
    ifstream liste(nom_fic.c_str());
    if(liste)
    {
        //PREMIERE LIGNE 
        getline(liste, temp_ligne);
        pos_y++;
        //BOUCLE
        while(getline(liste, temp_ligne))
        {
            //AFFICHAGE
            cout<<"num"<<pos_y<<endl<<"ligne"<<temp_ligne<<endl;
            cout<<temp_ligne[pos_x]<<endl;

            //VERIF
            if(temp_ligne[(pos_x+3*pos_y)%31]==arbre)
            {
                nb_ligne_ok++;
                cout<<"ok"<<endl;
            }
            else
            {
                cout<<"non ok"<<endl;
            }
            pos_y++;
        }
    cout<<"nombre d'arbres : "<<nb_ligne_ok<<endl;
    }
    else
    {
        cout << "ERREUR lecture du fichier" <<endl;
    }

    return 0;
}   