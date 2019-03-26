#include <iostream>

using namespace std;
int main() {
    int a,x,b,c;
    cout<<"Wpisz trzy liczby: "<<endl<<"a: ";
    cin>>a;
    cin.ignore();
    cout<<"x: ";
    cin>>x;
    cin.ignore();
    cout<<"b: ";
    cin>>b;
    cin.ignore();
    c=a*x+b;
    if(a==0){
        cout<<endl<<endl<<"Liczba 'a' nie może być równa 0"<<endl;
    }else
        cout<<endl<<"Wynikiem działania 'Ax+b=c' jest: "<<c<<endl<<endl;
    getchar();
    return 0;
}
