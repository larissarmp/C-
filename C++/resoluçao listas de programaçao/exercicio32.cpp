#include<iostream>
using namespace std;
int main()
{
    float altura, peso;
    string sexo;
    cout<<"digite o sexo(masculino ou feminino)";
    cin>>sexo;
    cout<<"digite a altura do pessoa:";
    cin>>altura;
    if(sexo=="masculino")
    {
                       peso=(72.7*altura)-5.8;
    }
    else
    {
        peso=62.1*altura-44.7;
    }
    cout<<"peso ideal: "<<peso<<endl;
    system("pause");
}
