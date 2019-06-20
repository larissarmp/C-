#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int e, aux;
    float s, den, num, d, p;
    s=0;
    den=15;
    aux=1;
    num=2;
    e=0;
    while(den>=1)
    {
          d=den*den;
          p=pow(num,e);
          if(aux>0)
          {
                   s=s+p/d;
                   aux=aux*(-1);
          }
          else
          {
              s=s-p/d;
              aux=aux*(-1);
          }
          den=den-1;
          e=e+1;
    }
    cout<<"o somatorio é:"<<s<<endl;
    system("pause");
}
    
