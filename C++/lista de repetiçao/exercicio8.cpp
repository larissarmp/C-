#include<iostream>
using namespace std;
int main()
{
    double pi,termo,den,sinal;
    pi=0;
    termo=4;
    den=1;
    sinal=1;
    while(termo>0.0000001)
    {
                       pi=pi+termo*sinal;
                       sinal=sinal*(-1);//sinal=-sinal;
                       den+=2;//den=den+2;
                       termo=4/den;
    }
    cout<<"valor de pi:"<<pi<<endl;
    system("pause");
}
    
    
