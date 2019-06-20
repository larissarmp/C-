#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int e,den;
    float s,p,sinal,x;
    setlocale(LC_ALL,"");
    cout<<"informe um valor";
    cin>>x;
    den=1;
    s=0;
    e=25;
    sinal=1;
    while(den<=25)
    {
           p=pow(x,e);
           p=p/den;
           if(sinal>0)
           {
                      s=s+p;
                      sinal=sinal*(-1);
           }          
           else
           {
               s=s-p;
               sinal=sinal*(-1);
           }
           den=den+1;
           e=e-1;           
    }
    cout<<"a soma do valor="<<x<<" "<<"é"<<" "<<s<<endl;
    system("pause");
}      
