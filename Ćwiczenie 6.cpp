#include <iostream>

using namespace std;
int main() {
    int a,b,c;
    cout<<"Wprowadź liczbę mniejszą od 22: ";
    cin>>a;
    c=a;
    for(b=1;c<25;++b,++c)
        cout<<"Pętla wykonała "<<b<<" powtórzeń aby "<<a<<" stała się 25"<<endl;
    getchar();
    return 0;
}
