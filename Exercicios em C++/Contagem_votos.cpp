#include <iostream>

using namespace std;

int main()
{
     int qtdSim = 0;
     int qtdNao = 0;
     char resp;

        cout<<"Brasil vai ser campeao da copa do mundo de 2022?\n";
        cout<<"Digite s para sim\n";
        cout<<"Digite n para nao\n";

        for(int i=0; i<10; i++){
            cin>>resp;
            if(resp == 's'){
                qtdSim++;
            }else if (resp == 'n'){
                qtdNao++;
            }else{
                cout<<"Resposta invalida!\n";
                i--;
            }
        }
        cout<<"Quantidade de sim: "<<qtdSim<<endl;
        cout<<"Quantidade de nao: "<<qtdNao<<endl;

    return 0;
}
