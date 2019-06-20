#include<iostream>
using namespace std;
int main()
{
    float div;
    char operacao;
    int n1, n2, res;
    cout<<"Digite o primeiro numero inteiro";
    cin>>n1;
    cout<<"Digite o segundo numero inteiro";
    cin>>n2;
    cout<<"digite a operaçao(+,-,*,/)";
    cin>>operacao;
    if(operacao=='+')
    {
      res=n1+n2;
      cout<<n1<<" "<<operacao<<" "<<n2<<"="<<res<<endl;
    }
    if(operacao=='-')
    {
      res=n1-n2;
      cout<<n1<<"b"<<operacao<<" "<<n2<<"="<<res<<endl;
    }
    if(operacao==n1*n2)
    {
      res=n1*n2;
      cout<<n1<<" "<<operacao<<" "<<n2<<"="<<res<<endl;
    }
    if(operacao=='/')
    {
      if(n2==0)
      {
         cout<<"Não existe divisao por zero"<<endl;
      }
      else
      {
          div=(float)n1/n2;
          cout<<n1<<" "<<operacao<<" "<<n2<<'='<<div<<endl;
      }
    }
    if(operacao!='+' && operacao!='-' && operacao !='*' && operacao!='/')
    {
       cout<<"operaçao invalida"<<endl;
    }
       system("pause");
       
}
    
