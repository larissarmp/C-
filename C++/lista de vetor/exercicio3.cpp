#include<iostream>
using namespace std;
int main()
{
    float vet[100];
    int x,i,aux;
    for(i=0;i<100;i++)
    {
                      cout<<"digite um valor para o conjunto"<<i+1<<"ºelemento;";
                      cin>>vet[i];
    }
    cout<<"digite um valor:";
    cin>>x;
    aux=1;
    for(i=0;i<100&&aux==1;i++)
    {
                      if(x==vet[i])
                      {
                            aux=0;
                      }
    }
    if(aux==0)
    cout<<"existe";
    else
    {
        cout<<"nao existe";
    }
    system("pause");
}
