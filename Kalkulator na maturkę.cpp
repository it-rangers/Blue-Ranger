#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int l1,l2,znak;
    
    cout<<"Wprowadź dwie liczby na których chcesz wykonać działanie: "<<endl;
    cout<<"Liczba: ";
    cin>>l1;
    cin.ignore();
    cout<<"Liczba: ";
    cin>>l2;
    cin.ignore();
    
start:
    
    cout<<"Wybierz sobie działanie, które chcesz wykonać: "<<endl<<endl;
    cout<<"[1] Dodawanie."<<endl;
    cout<<"[2] Odejmowanie."<<endl;
    cout<<"[3] Mnożenie."<<endl;
    cout<<"[4] Dzielenie."<<endl;
    cout<<"[5] Zakończ."<<endl;
    cout<<"Wprowadź: ";
    cin>>znak;
    cin.ignore();
    
    if(znak==1){
        cout<<"Wynik dodawania: "<<l1+l2<<"."<<endl;
    }
    else
        if(znak==2){
            cout<<"Wynik odejmowania: "<<l1-l2<<"."<<endl;
        }
    else
        if(znak==3){
            cout<<"Wynik mnożenia: "<<l1*l2<<"."<<endl;
        }
    else
        if(znak==4){
            cout<<"Wynik dzielenia: "<<l1/l2<<"."<<endl;
        }
        else
            if(znak==5){
                cout<<"Program zakończył działanie."<<endl;
                return 0;
            }
            cout<<"Zła cyfra."<<endl;
            goto start;
}

