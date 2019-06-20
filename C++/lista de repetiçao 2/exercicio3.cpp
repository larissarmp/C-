#include<iostream>
using namespace std;
int main()
{
    int n, i, mult;
    cout<<"informe um numero inteiro positivo:";
    cin>>n;
    for(i=1;i<n/2;i++)
    {
             mult=n/i;
             if(mult*i==n)
             {
             cout<<"os divisores são:"<<mult<<endl;
             }
    }
    system("pause");
}
               
                
              
         
