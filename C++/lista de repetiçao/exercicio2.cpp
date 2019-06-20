#include<iostream>
using namespace std;
int main()
{
    float den,expo,soma;
    expo=2;
    soma=0;
    den=50;
    while(den>=1)
    {
                           soma=soma+(expo/den);
                           expo=expo*2;
                           den--;
    }
    cout<<"a somatoria é:"<<soma<<endl;
    system("pause");
}
                           
                           
