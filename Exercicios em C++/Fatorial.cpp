#include <iostream>

using namespace std;

int fatorial(int n){
    int fat,i;
    fat=1;
    for (i=2; i<=n;i++){
        fat = fat*i;
    }
    return (fat);
}
int main()
{
    int n, fat;
    cout<<"Digite um numero inteiro para o fatorial: ";
    cin>>n;

    fat = fatorial(n);
    cout<<"\nFatorial = "<<fat<<"\n\n";
    return 0;
}


