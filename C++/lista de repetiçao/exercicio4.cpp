#include<iostream>
using namespace std;
int main()
{
    float num,soma,sinal;
    num=1;
    soma=0;
    sinal=1;
    while(num<=10)
    {
                  soma=soma+(num/(num*num)*sinal);
                  sinal=sinal*(-1);
                  num=num+1;
    }
    cout<<"somatorio:"<<soma<<endl;
    system("pause");
}
                  
                 
