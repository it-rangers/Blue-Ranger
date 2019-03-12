#include <iostream>

using namespace std;

int main()
{
    double wzrost;
    int wiek;
    cout<<"Podaj swój wzrost (w metrach): ";
    cin>>wzrost;
    cin.ignore();
    
    cout<<endl<<endl;
    
    cout<<"Podaj swój wiek: ";
    cin>>wiek;
    cin.ignore();
    
    cout<<endl<<endl;
    
    cout<<"Masz "<<wzrost<<" metrów wzrostu."<<endl;
    cout<<"Typ double zajmuje "<<sizeof(double)<<" bajtów."<<endl;
    cout<<"Twój wzrost zajmuje "<<sizeof(wzrost)<<" bajtów."<<endl;
    
    cout<<endl;
    
    cout<<"Masz "<<wiek<<" lat."<<endl;
    cout<<"Typ int zajmuje "<<sizeof(int)<<" bajtów."<<endl;
    cout<<"Twój wiek zajmuje "<<sizeof(wiek)<<" bajtów."<<endl;
    
    cout<<endl<<endl;

    cout<<"Naciśnij ENTER aby zakończyć."<<endl;
    getchar();
    return 0;
}
