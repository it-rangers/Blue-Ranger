#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string imie;
    cout<<"Wpisz swoje imię: "<<endl;
    cin>>imie;
    cin.ignore();
    cout<<"Witaj "<<imie<<endl;
    cout<<"To twój pierwszy samodzielnie napisany program!"<<endl;
    cout<<"Gratulacje! Teraz naciśnij ENTER aby skończyć."<<endl;
    getchar();
    return 0;
}
