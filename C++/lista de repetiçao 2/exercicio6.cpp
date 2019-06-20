#include<iostream>
using namespace std;
int main()
{
    int n1, n2, a, b, r,mmc;
    cout<<"informe um numero inteiro (maior numero):";
    cin>>n1;
    cout<<"informe um segundo numero inteiro:";
    cin>>n2;
    a=n1;
    b=n2;
    do
    {
         r=a%b;
         mmc=a*b/r;
         a=b;
         b=r;
    }while(r==0);
    cout<<"o mmc("<<n1<<","<<n2<<")="<<mmc<<endl;
    system("pause");//terminar
}
         
