#include<iostream>
using namespace std;
int main()
{
    int n, i, fat;
    cout<<"informe um numero inteiro:";
    cin>>n;
    fat=2;
    for(i=1;i<n;i++)
    {
                    fat=fat*(i-1)*i; //terminar
    }
    cout<<"o fatorial é:"<<fat<<endl;
    system("pause");
}
