#include<iostream>
using namespace std;
int main()
{
    int n, aux;
    string n1;    
    cout<<"informe um numero:";
    cin>>n;
    aux=n;
    n1=" ";
    while(aux!=0)
    {
                 if(aux%16==0)
                 {
                              n1="0"+n1;
                 }
                 if(aux%16==1)
                 {
                              n1="1"+n1;
                 }
                 if(aux%16==2)
                 {
                              n1="2"+n1;
                 }
                 if(aux%16==3)
                 {
                              n1="3"+n1;
                 }
                 if(aux%16==4)
                 {
                              n1="4"+n1;
                 }
                 if(aux%16==5)
                 {
                             n1="5"+n1;
                 }
                 if(aux%16==6)
                 {
                              n1="6"+n1;
                 }
                 if(aux%16==7)
                 {
                              n1="7"+n1;
                 }
                 if(aux%16==8)
                 {
                              n1="8"+n1;
                 }
                 if(aux%16==9)
                 {
                              n1="9"+n1;
                 }
                 if(aux%16==10)
                 {
                               n1="10"+n1;
                 }
                 if(aux%16==11)
                 {
                               n1="11"+n1;
                 }
                 if(aux%16==12)
                 {
                              n1="12"+n1;
                 }
                 if(aux%16==13)
                 {
                               n1="13"+n1;
                 }
                 if(aux%16==14)
                 {
                               n1="14"+n1;
                 }
                 if(aux%16==15)
                 {
                               n1="15"+n1;
                 }
                 aux=aux/16;
    }
    cout<<"o numero na base 16:"<<n1<<endl;
    system("pause");
}
                 
