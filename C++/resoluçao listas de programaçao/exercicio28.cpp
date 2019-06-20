#include<iostream>
using namespace std;
int main()
{
    float des=0,s, sl, dir=0, she, he;
    string nome;
    cout<<"informe o nome do funcionario";
    cin>>nome;
    cout<<"informe a quantidade de horas extras:";
    cin>>he;
    she=he*10;
    s=3*622+she;
    if(s>1500.00)
    {
                   des=0.12*s;
    }
    if(s>2000.00)
    {
                 dir=0.20*s;
    }
                 sl=s-(des+dir);
                 cout<<" O salario liquido do funcionario e:"<<sl<<endl;
system("pause");
}   
    
    
                                 
                   
