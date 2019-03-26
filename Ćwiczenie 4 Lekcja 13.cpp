#include <iostream>

using namespace std;
int main() {
    int i,j,k;
    cout<<"Wpisz liczbę: "<<endl;
    cin>>i;
    cin.ignore();
    for(j=1,k=0;j<=i;j++){
        k+j;
    }
    cout<<"Suma: "<<k<<endl;
    cout<<endl<<"Naciśnij ENTER aby zakończyć."<<endl;
    getchar();
    return 0;
    
}
