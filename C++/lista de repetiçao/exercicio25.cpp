#include<iostream>
using namespace std;
int main()
{
    long long soma, valor, expo;
    
    soma=0;
    valor=1;
    for(expo=0; expo<64; expo++)
    {
                soma=soma+valor;
                valor=valor*2;
    }
    cout<<"somatorio:"<<soma<<endl;
    system("pause");
}
    
