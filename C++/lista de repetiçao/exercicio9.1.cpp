#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double s,den,pi;
    int sinal,termo;
    s=0;
    den=1;
    sinal=1;
    termo=0;
    while(termo<=51)
    {
                    s=s+(1.0/den)*sinal;
                    den=den+2;
                    den=den*den*den;
                    termo++;
                    sinal=(-1)*sinal;
    }
    pi=s*32;
    pi=pow(pi,1.0/3.0);
    cout<<"a somatoria de pi é:"<<pi<<endl;
    system("pause");
}
