#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Podaj dwie liczby całkowite"<<endl<<"a: ";
    cin>>a;
    cout<<endl<<"b: ";
    cin>>b;
    cout<<endl;
    if(a>b){
        cout<<"Liczba 'a' jest większa od 'b'"<<endl<<endl;
    }
    else if(b>a){
        cout<<"Liczba 'b' jest większa od 'a'"<<endl<<endl;
    }
    cout<<"Naciśnij ENTER aby zakończyć"<<endl;
    getchar();
    return 0;
}
