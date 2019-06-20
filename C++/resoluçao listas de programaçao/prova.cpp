#include<iostream>
using namespace std;
int main()
{
    string nome,;
    float she,he,sb,des=0,desI=0,sl;
    cout<<"digite o nome do funcionario:";
    cin>>nome;
    cout<<"digite a quantidade de horas extras trabalhadas:";
    cin>>he;
    she=he*11.50;
    sb=3*622+she;
    if(sb>1500)
    {
               des=0,09*sb;
    }
    if(sb>2000)
    {
               desI=0,24*sb;
    }
               sl=sb-(des+desI);
               cout<<"O salario bruto e:"<<sb<<endl;
               cout<<"o salario liquido e:"<<sl<<endl;
    system("pause");
}
    
