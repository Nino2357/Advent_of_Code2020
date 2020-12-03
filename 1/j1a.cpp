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
    int nb1;
    int nb2;
    vector<int> tab(0);
    string nom_fic="liste.txt";
    ifstream liste(nom_fic.c_str());
    cout<<"test1"<<endl;
    if(liste)
    {
        while(getline(liste, temp_str))
        {
            temp_int = std::stoi(temp_str); //transforme str en int
            //cout<<temp_int<<endl;
            tab.push_back(temp_int);
        }
    }
    else
    {
        cout << "ERREUR lecture du fichier" <<endl;
    }

    cout<<"test1"<<endl;
    int taille_tab = tab.size();
    for(int i=0;i<taille_tab;i++)
    {
        for(int j=0;j<taille_tab;j++)
        {
            if(tab[i]+tab[j]==2020)
            {
                nb1 = tab[i];
                nb2 = tab[j];
                break;

            }
        }
    }
    cout<<"nb1 : "<<nb1<<endl<<"nb2 : "<<nb2<<endl<<"produit : "<<nb1*nb2<<endl;


    return 0;
}