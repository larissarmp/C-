#include<iostream>
using namespace std;
int main()
{
    int n, aux, n2;
    string n1;    
    cout<<"informe um numero:";//terminar
    cin>>n;
    aux=n;
    n1="0 ";
    while(aux!=0)
    {
                 if(n1=="0"+n1)
                 {
                               n2=aux/2;
                 }
                 if(n1=="1"+n1)
                 {
                               n2=aux/2;
                 }
                 aux=aux%2;
    }
    cout<<"o equivalente da base 2 na base 10:"<<n2<<endl;
    system("pause");
}
                               
