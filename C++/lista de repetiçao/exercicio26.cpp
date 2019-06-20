#include<iostream>
using namespace std;
int main()
{
    long long n, aux, ni, dig;
    cout<<"digite um numero inteiro:";
    cin>>n;
    aux=n;
    ni=0;
    while(aux!=0)
    {
                 dig=aux%10;
                 ni=ni*10+dig;
                 aux=aux/10;
    }
    if(ni==n)
    {
             cout<<n<<"e capicula"<<endl;
    }
    else
    {
        cout<<n<<"nao e capicula"<<endl;
    }
    system("pause");
}
