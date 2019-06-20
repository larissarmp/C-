#include<iostream>
using namespace std;
int main()
{
    int n,i,soma;
    soma=0;
    cout<<"informe um numero inteiro:";
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
                       if(n%i==0)
                       {
                          soma=soma+i;
                       }
    }
    if(soma==n)
    {
               cout<<n<<"é perfeita"<<endl;
    }
    else
    {
        cout<<n<<"nao é perfeita"<<endl;
    }
    system("pause");
}
