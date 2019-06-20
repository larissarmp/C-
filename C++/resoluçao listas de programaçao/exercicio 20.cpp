#include<iostream>
using namespace std;
int main()
{
    string np; //string é quando a variavel é uma letra
    float consumo,consumomensal, preco;
    cout<<"digite o nome do posto";
    cin>>np;
    cout<<"Digite o consumo anual";
    cin>>consumo;
    cout<<"digite o consumo mensal";
    cin>>consumomensal;
    if(consumomensal<=50000)
    {
      preco=2.13+2.13*2.20;
    }
    else
    {
      preco=2.13*1.12;
    }

    cout<<"o novo preço é"<<endl;
system ("pause");
}
