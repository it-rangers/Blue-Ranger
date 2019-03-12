#include <iostream>

using namespace std;

int main()
{
    int pytka;
    string imie;
    cout<<"Wpisz swoje imię: ";
    cin>>imie;
    if (imie=="Kuba"){
        cout<<"Hej Kuba, wpisz rozmiar swojej pałki: ";
        cin>>pytka;
        cin.ignore();
        
        cout<<endl<<endl;
        
        if (pytka>19){
            cout<<"Masz wyjebaną pytkę, gratulacje!"<<endl<<endl;
        }
        else
            cout<<"Masz małą pytkę, wstyd."<<endl<<endl;
            cout<<"Naciśnij ENTER aby zakończyć."<<endl;
            getchar();
    }
    else
        cout<<"Nie jesteś Kubą i spierdalaj xd"<<endl;
    return 0;
}
