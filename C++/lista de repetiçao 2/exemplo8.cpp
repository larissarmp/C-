#include<iostream>
using namespace std;
int main()
{
    int n, aux;
    string n2;
    cout<<"digite um numero:";
    cin>>n;
    n2="";
    aux=n;
    while(aux!=0)
    {
                 if(aux%2==0)
                 {
                    n2="0"+n2;
                 }
                 else
                 {
                    n2="1"+n2;
                 }
                 aux=aux/2;//sempre dividido por 2
    }
    cout<<"numero na base 2:"<<n2<<endl;
    system("pause");
}
    
