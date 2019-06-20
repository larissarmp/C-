#include<iostream>
using namespace std;
int main()
{
    float num,den,soma,sinal,cont;
    num=480;
    den=10;
    soma=0;
    sinal=1;
    while(den<=40)
    {
                  soma=soma+(num/den)*sinal;
                  den++;
                  num=num-5;
                  sinal=sinal*(-1);
    }
    cout<<"o somatorio é:"<<soma<<endl;
    system("pause");
}
