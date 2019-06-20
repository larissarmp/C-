#include<iostream>
using namespace std;
int main()
{
    float den, num, soma;
    den=1;
    num=37;
    soma=0;
    while(den<=37)
    {
                  soma=soma+num*(num+1);
                  den=den+1;//den++;
                  num--;//num=num-1;
    }
    cout<<"somatorio:"<<soma<<endl;
    system("pause");
}
