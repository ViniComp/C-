#include <iostream>

using namespace std;

int main()
{
     float n1,n2;
     char op;

     cout<<"Digite o primeiro numero: "<<endl;
     cin>>n1;
     cout<<"Digite o segundo numero: "<<endl;
     cin>>n2;

     cout<<"Digite S - soma | T - subtracao\t";
     cin>>op;

     switch(op){
     case 'S':
        cout<<"A soma dos numeros sao:\t";
        cout<<n1+n2<<endl;
        break;
     case 'T':
        cout<<"A subtracao dos numeros sao:\t";
        cout<<n1-n2<<endl;
        break;
     }

    return 0;
}

