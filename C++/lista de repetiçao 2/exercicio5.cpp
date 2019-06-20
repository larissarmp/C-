#include<iostream>
using namespace std;
int main()
{
    int  n1,n2,a,b, r;
    cout<<"digite o primeiro numero:";
    cin>>n1;
    cout<<"digite o segundo numero:";
    cin>>n2;
    a=n1;
    b=n2;
    do
    {
         r=a%b; 
         a=b;
         b=r;
    }while(r!=0);
    cout<<"mdc("<<n1<<","<<n2<<")="<<a<<endl;
system("pause");
}
    
    
    
    
