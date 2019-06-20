#include<iostream>
using namespace std;
int main()
{
    float n1, n2, n3, mf, me;
    int ni;
    cout<<"Informe o numero de indentificacao:";
    cin>>ni;
    cout<<"digite a primeira nota:";
    cin>>n1;
    cout<<"digite a segunda nota";
    cin>>n2;
    cout<<"digite a terceira nota";
    cin>>n3;
    cout<<"informe a media dos exercicios";
    cin>>me;
    mf=((n1+n2+n3)+3*me)/7;
    if(mf>=6.1)
    {
               cout<<"Aprovado"<<endl;
               cout<<"numero de indentificacao"<<ni<<endl;
               cout<<"nota1"<<n1<<"/"<<"nota2"<<n2<<"/"<<"nota3"<<n3<<endl;
               cout<<"media dos exercicios"<<mf<<endl;
               if(mf>=9.1)
               {
                          cout<<"conceito A";
               }
               if(mf>=7.6&& mf<=9.0)
               {
                          cout<<"conceito B";
               }
               if(mf>=6.1&& mf <=7.1)
               {
                          cout<<"conceito C";
               }
    }
    else
    {
               
               cout<<"Reprovado"<<endl;
               cout<<"numero de indentificacao:"<<ni<<endl;
               cout<<"nota1: "<<n1<<"/"<<"nota2:"<<n2<<"/"<<"nota3:"<<n3<<endl;
               cout<<"media final: "<<mf<<endl;
               if(mf>=4.1)
               {
                          cout<<"conceito D";
               }
               else
               {
                          cout<<"conceito E";
               }
    }       
system("pause");
}
    
    
    
