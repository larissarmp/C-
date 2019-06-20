#include<iostream>
using namespace std;
int main()
{
    int i, vet1[30], vet2[30], vet3[60], k;
    for(i=0; i<30; i++)
    {
             cout<<"Digite o"<<i+1<<"º número:";
             cin>>vet1[i];
    }
    for(i=0; i<30; i++)
    {
             cout<<"Digite o"<<i+1<<"º número:";
             cin>>vet2[i];
    }
    i=0;
    for(k=0; i<60; k++)
    {
             vet3[k]=vet1[i];
             k=k+1;
             vet3[k]=vet2[i];
             i++;
    }
    for(k=0; k<20; k++)
    {
             cout<<vet3[k]<<endl;
    }
    system("pause");
    cout<<endl;
}
