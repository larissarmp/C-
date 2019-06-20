#include<iostream>
using namespace std;
int main()
{
    float soma,num,den;
    soma=0;
    num=1;
    den=1;
    while(den<=50)
    {
                   soma=soma+num/den;
                   num=num+2;
                   den=den+1;
    }
    cout<<"a soma:"<<soma<<endl;
    system("pause");
}
    
