#include<iostream>
using namespace std;
int main()
{
    int ts,hora,min,seg;
    cout<<"digite o tempo em segundos:";
    cin>>ts;
    hora=ts/3600;
    min=(ts%3600)/60;
    seg=(ts%3600)%60;
    cout<<"tempo:"<<hora<<"h:"<<min<<"m:"<<seg<<"s"<<endl;
    system("pause");
}
