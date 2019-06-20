#include<iostream>
using namespace std;
int main()
{
    int num,den;//mais correto
    float s,aux;
    s=0;
    num=1;
    //pg de razao 2
    den=15;
    aux=1;
    while(den>=1)
    {
                 if(aux>0)
                 {
                          s=s+num/(den*den);
                          aux=aux*(-1);
                 }
                 else
                 {
                     s=s-num/(den*den);
                     aux=aux*(-1);
                 }
                 num=num*2;
                 den=den-1;
    }
    cout<<"o valor do somatorio é:"<<s<<endl;
    system("pause");
}
                     
