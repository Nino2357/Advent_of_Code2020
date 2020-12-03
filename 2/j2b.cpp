#include <string>
#include <cmath>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;



int main(void)
{
    string temp_str;
    int temp_int;
    char car_temp1;
    char car_temp2;
    int min=0;
    int max=0;
    char lettre;
    string code;
    int nb_app= 0;
    int code_correct=0;
    int lettre_ok=0;
    vector<int> tab(0);
    string nom_fic="liste.txt";
    ifstream liste(nom_fic.c_str());
    int j=0;

    if(liste)
    {
        while(liste>>min>>car_temp2>>max>>lettre>>car_temp1>>code)
        {
            //Affichage test
            cout<<"min : "<<min<<endl<<"max : "<<max<<endl<<"lettre : "<<lettre<<endl<<"code : "<<code<<endl;

            //VERIF
            if(code[min-1]==lettre)
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