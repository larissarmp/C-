#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,p1,p2,s;
    for(n=0;n<10000;n++)
    {
                        p1=n/100;
                        p2=n%100;
                        s=p1+p2;
                        if(s*s == n);
                        {
                        cout<<n<<":"<<s<<endl;
                        }    
    }
    system("pause");
}
                               
                                 
