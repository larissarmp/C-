#include<iostream>
using namespace std;
int main()
{
    int n,p1,p2,soma,quad;
    cout<<"numeros com tal caracteristica:";
    for(n=1000;n<=9999;n++)
    {
                           p1=n/100;
                           p2=n%100;
                           soma=p1+p2;
                           quad=soma*soma;
                           if(quad==n)
                           {
                                  cout<<n<<" ";
                           }
    
    }
    system("pause");
} 
