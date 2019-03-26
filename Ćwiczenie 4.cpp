#include <iostream>

using namespace std;
int main() {
    int a;
    cout<<"Wpisz liczbę do sprawdzenia: ";
    cin>>a;
    cin.ignore();
    if(a%2==0){
        cout<<"To definitywnie liczba parzysta."<<endl;
    }else
        cout<<"To definitywnie liczba nieparzysta."<<endl;
    getchar();
    return 0;
}
