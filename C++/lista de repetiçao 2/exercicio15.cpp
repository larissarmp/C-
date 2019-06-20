#include<iostream>
using namespace std;
int main()
{
    int n,aut1,aut2,prox,cont,i;
    setlocale(LC_ALL,"");
    cout<<"informe um numero inteiro positivo:";
    cin>>n;
    while(n<=0)
    {
               cout<<"digite um valor maior que 0:";
               cin>>n;
    }
    aut1=1;
    aut2=1;
    i=1;
    if(n>1)
    {
           while(i<n)
           {
                    prox=aut1+aut2;
                    aut1=aut2;
                    aut2=prox;
                    i=i+1;
           }
    }
    cout<<"o "<<n<<"ºnumero da serie é:"<<aut1<<endl;
    system("pause");
}
    
    
    
