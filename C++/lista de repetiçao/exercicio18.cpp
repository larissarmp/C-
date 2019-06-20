#include<iostream>
using namespace std;
int main()
{
    double x,xr,num,i,den,sinal,termo,seno;    
    cout<<"informe o angulo:";
    cin>>x;
    xr=(3.14159*x)/180;
    num=xr*xr*xr;
    i=1;
    den=3;
    sinal=-1;
    seno=1;
    for(termo=0;termo<20;termo++)
    {
                                 seno=seno+(num/den)*sinal;
                                 num=num*xr*xr;
                                 i=i+2;
                                 den=den*(i-1)*i;
                                 sinal=-sinal;
    }
    cout<<"seno("<<x<<")="<<seno<<endl;
    system("pause");
}

                                 
    
