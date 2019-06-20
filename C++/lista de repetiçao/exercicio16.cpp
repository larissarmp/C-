#include<iostream>
using namespace std;
int main()
{
    double x,ex,termo,num,fat,i;
    cout<<"digite o valor de x:";
    cin>>x;
    ex=0;
    termo=1;
    num=x;
    fat=1;
    i=2;
    while(termo>0.0001)
    {
                       ex=ex+termo;
                       termo=num/fat;
                       fat=fat*i;
                       i=i+1;
    }
    cout<<"e elevado a"<<x<<"é:"<<ex<<endl;
    system("pause");
}
    
