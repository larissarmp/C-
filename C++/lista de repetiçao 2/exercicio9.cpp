#include<iostream>
using namespace std;
int main()
{
    int n, aux;
    string n2;
    cout<<"digite um numero:";
    cin>>n;
    aux=n;
    n2=" ";
    aux=n;
    while(aux!=0)
    {
                 if(aux%8==0)
                 {
                             n2="0" +n2;
                 }
                 if(aux%8==1)
                 {
                     n2="1"+n2;
                 }
                 if(aux%8==2)
                 {
                             n2="2"+n2;
                 }
                 if(aux%8==3)
                 {
                             n2="3"+n2;
                 }
                 if(aux%8==4)
                 {
                             n2="4"+n2;
                 }
                 if(aux%8==5)
                 {
                             n2="5"+n2;
                 }
                 if(aux%8==6)
                 {
                             n2="6"+n2;
                 }
                 if(aux%8==7)
                 {
                             n2="7"+n2;
                 }
                 aux=aux/8;
    }
    cout<<"o numero na base 8: "<<n2<<endl;
    system("pause");
} 
                             
