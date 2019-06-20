#include<iostream>
using namespace std;
int main()
{
    int dia,c;
    float p;
    cout<<"informe o preço normal da fita:";
    cin>>p;
    cout<<"informe o dia da semana (1,2,3...):";
    cin>>dia;
    cout<<"informe a categoria do filme em 1-comum ou 2-lançamento:";
    cin>>c;
    if(c==2)
    {
           p=p+0.15*p;
    }
    if(dia==2|| dia==3||dia==5)
    {
                p=p-0.4*p;
    }
    cout<<"o preco do filme e: "<<p<<endl;
system("pause");
}
    
