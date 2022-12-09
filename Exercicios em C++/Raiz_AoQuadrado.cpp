#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     float R,Z;
     int x,y;

     cout<<"Digite o primeiro numero: "<<endl;
     cin>>x;
     cout<<"Digite o segundo numero: "<<endl;
     cin>>y;

     R=pow(x,y);
     Z=sqrt(x);

     cout<<x<<" elevado a "<<y<<" e igual a "<<R<<endl;
     cout<<"A Raiz de "<<x<<" e igual a "<<Z<<endl;


    return 0;
}

