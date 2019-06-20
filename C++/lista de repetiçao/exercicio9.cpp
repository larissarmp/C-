#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double pi,soma, sinal,termo,den;
    termo=0;
    soma=0;
    den=1;
    sinal=1;
    while(termo<=51)
    {
                    if(sinal>0)
                    {
                               soma=soma+(1.0/(den*den*den));
                               sinal=-1;
                    }
                    else
                    {
                        soma=soma-(1.0/(den*den*den));
                        sinal=1;
                    }
                    den=den+2;
                    termo++;
    }
    pi=soma*32;
    pi=pow(pi,1.0/3.0);
    cout<<"o valor calculado é:"<<pi<<endl;
    system("pause");
}

                    
