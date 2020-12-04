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
    int nb_ligne_ok = 0;
    int pos_x = 0;
    int pos_y = 0;
    string nom_fic="liste.txt";
    ifstream liste(nom_fic.c_str());
    if(liste)
    {
        while(getline(liste, temp_ligne))
        {
            //AFFICHAGE
            cout<<"num"<<pos_y<<endl<<"ligne"<<temp_ligne<<endl;

            //VERIF
            if(temp_ligne[pos_y])
                lettre_ok++;
            if(code[max-1]==lettre)
                lettre_ok++;
                
            if(lettre_ok==1)
            {
                code_correct++;
                cout<<"ok"<<endl;
            }
            else
            {
                cout<<"faux"<<endl;
            }
            
            lettre_ok = 0;



        }
    cout<<"nombre de codes corrects : "<<code_correct<<endl;
    }
    else
    {
        cout << "ERREUR lecture du fichier" <<endl;
    }

    return 0;
}