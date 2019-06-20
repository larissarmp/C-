#include<iostream>
using namespace std;
int main()
{
    int qi, si, idade, media;
    qi=0;
    si=0;
    cout<<"digite a idade(e zero para sair):";
    cin>>idade;
    while(idade!=0)
    {
                   si=si+idade;
                   qi=qi+1;
                   cout<"digite a idade (zero para sair:)";
    }
    media=si/qi;
    cout<<"media das idades:"<<media<<endl:
                 system("pause");
}
    
