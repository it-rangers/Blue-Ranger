#include <iostream>

using namespace std;
int main() {
    int a,b;
    cout<<"Wpisz długość pierwszego boku prostokąta: ";
    cin>>a;
    cin.ignore();
    cout<<endl<<"Wpisz długość drugiego boku prostokąta: ";
    cin>>b;
    cin.ignore();
    cout<<endl;
    if(a==b){
        cout<<"To nie jest prostokąt matole!"<<endl;
        cout<<endl;
    }else
        cout<<"Pole tego prostokąta wynosi: "<<a*b<<endl<<endl;
    cout<<"Naciśnij ENTER aby zakończyć program"<<endl;
    getchar();
    return 0;
}
