#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i;
    bool primo=true;
    cout<<"informe um numero inteiro:";
    cin>>n;
    i=2;
    while(i<=sqrt(n)&& primo)
    {
                     if(n%i==0)
                       primo=false;// não é primo
                       
                       i=i+1;
    }
    if(n==0||n==1)
    {
                  cout<<n<<"nao e primo:"<<endl;
    }
    else
    {
        if(primo)
        {
                 cout<<n<<"e primi:"<<endl;
        }
        else
        {
            cout<<n<<"nao e"<<endl;
        }
    }
        system("pause");
}
    
                               
