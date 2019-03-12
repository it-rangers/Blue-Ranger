#include <iostream>

using namespace std;

int main()
{
    int i;
    char znak;
    cout<<"Jak bardzo ci sie nudzi (skala 1-5): ";
    cin>>i;
    cin.ignore();
    
    cout<<endl<<endl;
    
    if(i==1){
        cout<<"To chyba się uczysz. Nie masz tu czego szukać."<<endl<<endl;}
    else
        if(i==2){
            cout<<"Obyś był zimny albo gorący..."<<endl<<endl;}
    else
        if(i==3){
            cout<<"Widzę, że nie możesz się zdecydować, przyjdź później."<<endl<<endl;}
    else
        if(i==4){
            cout<<"Okej, w takim razie zaraz się zabawisz :)"<<endl;
            cout<<endl<<"Wpisz sobie dowolny znak z klawiatury: ";
            cin>>znak;
            cin.ignore();
            cout<<"Twój znak to: "<<znak<<". Podobało się? To wracaj do nauki"<<endl<<endl;}
        else
            cout<<"Weź się za naukę i nie zawracaj mi dupy."<<endl<<endl;
    cout<<"Naciśnij ENTER aby zakończyć."<<endl;
    getchar();
    return 0;
}
