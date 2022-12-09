#include <iostream>

using namespace std;

int main()
{
     char a[50];
     int qtd =0;

     cout<<"Digite uma palavra\n";
     cin>>a;

     for(int i = 0; i<a[i] != 0; i++){
        qtd++;
     }

     cout<<"A quantidade de letras da palavra "<< a << " e "<<qtd<<endl;

    return 0;
}


