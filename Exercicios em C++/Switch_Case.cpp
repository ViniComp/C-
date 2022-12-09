#include <iostream>

using namespace std;

int main(){
    int p;

    cout<<"Escolha uma dos lanches"<<endl;
    cout<<"1- hotdog\n2- X-Burger\n3- Pizza\n"<<endl;
    cin>>p;
        switch (p){
        case 1: cout<<"hotdog - R$10,00"<<endl;
            break;
        case 2: cout<<"X-Burger - R$15,00"<<endl;
            break;
        case 3: cout<<"Pizza - R$10,00"<<endl;
            break;

        default: cout<<"Nao existe essa opcao! Por favor escolha uma opcao valida!"<<endl;
        }
}
