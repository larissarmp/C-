#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    float r;
    cout<<"digite um numero inteiro";
    cin>>n;
    if(n<0)
    {
           cout<<"nao existe raiz quadrada real"<<endl;
    }
    if(n>0&& r*r==n)
    {
            r=sqrt(n);
            cout<<"E quadrado perfeiro";
    }
    else
    {
        cout<<"Nao e quadrado perfeito";
    }
    system("pause");
}
