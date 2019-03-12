#include <iostream>

using namespace std;

int main()
{
    float mojaLiczba;
    cout<<"Podaj wartość liczby: ";
    cin>>mojaLiczba;
    cin.ignore();
    cout<<endl;
    cout<<"Wartość twojej liczby to: "<<mojaLiczba<<endl;
    cout<<"Typ float zajmuje "<<sizeof(float)<<" bajtów"<<endl;
    cout<<"Twoja zmienna zajmuje "<<sizeof(mojaLiczba)<<endl;
    cout<<endl;
    cout<<"Naciśnij ENTER aby zakończyć"<<endl;
    getchar();
    return 0;
    
}
