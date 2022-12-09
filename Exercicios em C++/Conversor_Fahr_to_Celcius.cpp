#include <iostream>

using namespace std;

int conversor(int x){
    int c;
    c = 5*(x-32)/9;
    return c;
}
int main()
{
     int resposta, x;
     cout<<"Digite a temperatura em fahrenheit: "<<endl;
     cin>>x;

     resposta = conversor(x);
     cout<<"Resposta: "<<resposta<<" C"<<endl;
    return 0;
}


