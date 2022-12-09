#include <iostream>

using namespace std;

int main(){

    float D,T,V;
    cout<< "Digite a distancia da viagem: " << endl;
    cin >>D;
    cout<< "Digite o tempo da viagem: " << endl;
    cin >>T;

    if(T>=1 && T<=4){
        V=D/T;
        cout<<"Velocidade e de "<<V<<"Km/h"<<endl;
    }else{
        cout<<"ERRO!"<<endl;
    }
    return 0;
}
