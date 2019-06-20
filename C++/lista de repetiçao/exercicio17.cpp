#include<iostream>
using namespace std;
int main()
{
    double xr,x, cos, termo, n, fat, i,sinal, expo,cont;
    cout<<"digite o valor ddo angulo:";
    cin>>x;
    xr=(3.14159*x)/180;
    cos=1;
    sinal=-1;
    expo=xr*xr;
    fat=2;
    i=2;
    for(cont=1;cont<20;cont++)
    {           
                           cos=cos+(expo/fat)*sinal;
                           expo=expo*xr*xr;
                           i=i+2;
                           fat=fat*(i-1)*i;//fat=fat*(2*cont+1)*(2*cont+2)                          
                           sinal=-sinal;//sinal(-1)*sinal;
    }
    cout<<"o cosseno("<<x<<")="<<cos<<endl;
    system("pause");
}
                           
                           
                           
