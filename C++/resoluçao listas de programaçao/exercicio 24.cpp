#include<iostream>
using namespace std;
int main()
{
    int idade;
    string nome, cat;
    cout<<"Digite o nome do narrador";
    cin>>nome;
    cout<<"Digite a idade do narrador";
    cin>>idade;
    if(idade<5)
    {
               cat="categoria nao disponivel";
    }
    else
    {
        if(idade<8)
        {
                   cat="infantil A";
        }
        else
        {
            if(idade<11)
            {
                        cat="infantil B";
            }
            else
            {
                cat="sênior";
            }
        }
    }
    cout<<"o nadador"<<nome<<"com idade de"<<idade<<"anos, esta na categoria"<<cat<<endl;
system("pause");
}

               
