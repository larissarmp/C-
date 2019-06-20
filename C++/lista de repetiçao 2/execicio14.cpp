#include<iostream>
using namespace std;
int main()
{
    long long cpf11, cpf9,cpf10;
    int soma,peso,dvc1,c,dvc2,dv,dvc;
    cout<<"digite o cpf com 11 digitos:";
    cin>>cpf11;
    while(cpf11<=0||cpf11>99999999999LL)
    {
                  cout<<"digite outro com 11 digitos";
                  cin>>cpf11;
    }
    cpf9=cpf11/100;
    dv=cpf11%100;//o digito de verificacao digitado
    soma=0;
    peso=2;
    while(cpf9!=0)
    {
                 soma=soma+(cpf9%10)*peso;
                 cpf9=cpf9/10;
                 peso=peso+1;
    }
    c=soma%11;
    dvc1=11-c;
    if(dvc1==10||dvc1==11)
    {
                          dvc1=0; //ate aqui foi ao calculo do 1 digito
    }
    cpf10=(cpf11/100)*10+dvc1;   //123*10+8=1230+8=1238
    soma=0;
    for(peso=2;cpf10!=0;peso=peso+1)
    {
                                  soma=soma+(cpf10%10)*peso;
                                  cpf10=cpf10/10;
    }
    dvc2=11-soma%11;
    if(dvc2==10||dvc2==11)
       dvc2=0;
       
       dvc=dvc1*10+dvc2;
    if(dvc==dv)
    {
               cout<<"valido:"<<endl;
    }
    else
    {
        cout<<"invalido:"<<endl;
    }
    system("pause");
}
    
               
       
    
    
