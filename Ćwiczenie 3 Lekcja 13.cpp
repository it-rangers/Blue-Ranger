#include <iostream>

using namespace std;
int main() {
    char i;
    int j;
    i='*';
    cout<<"Aby rozpocząć rysowanie naciśnij ENTER."<<endl;
    getchar();
    for(j=1;j<=10;j++){
        if(j==1||j==10){
            cout<<i<<' '<<i<<' '<<i<<' '<<i<<' '<<i<<' '<<i<<' '<<i<<' '<<i<<' '<<i<<' '<<i<<' '<<endl;
        }
        else
            cout<<i<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<i<<endl;
    }
    getchar();
    return 0;
}
