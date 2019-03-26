#include <iostream>

using namespace std;
int main() {
    int i,j,y;
    cout<<"Witaj w tabliczce mnożenia :)"<<endl;
    short int k;
    cout<<endl<<"Wybierz jedną z następujących czynności:"<<endl;
    cout<<"1. Wyświetl całą tablicę mnożenia."<<endl;
    cout<<"2. Wyświetl tablicę dla konkretnej cyfry."<<endl;
    cout<<"3. Mnożenie dwóch różnych liczb."<<endl<<endl;
    cin>>k;
    cin.ignore();
    if(k==1){
        for(i=1;i<=10;i++)
            for(j=1;j<=10;j++)
            cout<<i<<" x "<<j<<"= "<<i*j<<endl;
            }
    else if(k==2){
        short int l,m;
        cout<<"Wpisz cyfrę: "<<endl;
        cin>>l;
        cin.ignore();
        m=1;
        for(;m<=10;m++)
            cout<<l<<" x "<<m<<"= "<<l*m<<endl;
        }
    else if(k==3){
        int n,o;
        cout<<"Wpisz wartość pierwszej liczby: ";
        cin>>n;
        cin.ignore();
        cout<<"Wpisz wartość drugiej liczby: ";
        cin>>o;
        cin.ignore();
        cout<<endl<<endl<<"Wynik: "<<n*o<<endl<<endl;
    }
    else if(k==4){
        for(i=1;i<=10;i++)
            for(j=1;j<=10;j++)
                for(y=1;y<=10;y++)
                cout<<i<<" x "<<j<<" x "<<y<<"= "<<i*j*y<<endl;
    }
    else
        cout<<"Niepoprawny wybór."<<endl;
    cout<<"Naciśnij ENTER aby zakończyć."<<endl;
    getchar();
    return 0;
    }
    
