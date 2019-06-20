#include<iostream>
using namespace std;
int main()
{
    int n1, n2, q,n,s,a,b;
    cout<<"digite o primeiro numero inteiro:";
    cin>>n1;
    cout<<"informe o segundo numero inteiro:";
    cin>>n2;
    a=n1;
    b=n2;
    for(q=1;q<b;q++)
    {
             n=a-b;
            a=n;
            
    }
    cout<<"o quociente("<<n1<<","<<n2<<")="<<n<<endl;
    cout<<"o resto("<<n1<<","<<n2<<")="<<q<<endl;
    system("pause");
}
            
