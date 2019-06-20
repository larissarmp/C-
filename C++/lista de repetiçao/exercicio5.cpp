#include<iostream>
using namespace std;
int main()
{
    float num,soma,sinal;
    num=1000;
    soma=0;
    sinal=1;
    while(num<=1000)
    {
                    soma=soma+(num/(num-3)*sinal);
                    sinal=sinal*(-1);
                    num=num+1;
    }
    cout<<"somatoria:"<<soma<<endl;
    system("pause");
}
    
