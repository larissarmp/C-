#include<iostream>
using namespace std;
int main()
{
    int i,n,prod;
    cout<<"digite um numero inteiro:";
    cin>>n;
    i=1;
    prod=i*(i+1)*(i+2);
    while(prod<n)
    {
                 i=i+1;
                 prod=i*(i+1)*(i+2);
    }
    if(prod==n)
    {
               cout<<n<<"é triângular:"<<endl;
    }
    else
    {
        cout<<n<<"não é triângular:"<<endl;
    }
    system("pause");
}             
                 
