#include<iostream>
#include<windows.h>
using namespace std;

struct data
{
    string nama;
    string kode;
    string mata;
    int umur;
    string status;
}guru[10];;

int main()
{
    system("cls");
    int jmlh;

    cout <<"Total Personil Guru? : ";
    cin>>jmlh;
    cout <<"--------------------------------- \n";
    for(int i=0; i<jmlh; i++)
    {
        cout<<"Nama Guru : ";
        cin>>guru[i].nama;
        cout<<"Kode Guru  : ";
        cin>>guru[i].kode;
        cout<<"Mata Pelajaran : ";
        cin>>guru[i].mata;
        cout<<"Umur : ";
        cin>>guru[i].umur;
        cout<<"Status : ";
        cin>>guru[i].status;
        cout<<endl;
    }
    system("cls");

    cout<<"------------------------- \n";
    cout<<" Data Guru saat ini"<<endl;
    cout<<"--------------------- \n"<<endl;
    for(int i=0; i<jmlh; i++)
    {
        cout<<"Nama Guru : "<<guru[i].nama<<endl;
        cout<<"Kode Guru  : "<<guru[i].kode<<endl;
        cout<<"Mata Pelajaran : "<<guru[i].mata<<endl;
        cout<<"Umur : "<<guru[i].umur<<endl;
        cout<<"Status : "<<guru[i].status<<endl;
        cout<<"--------------------------\n";
    }
    cout<<"\n----------------------- \n"<<endl;
    return 0;
}
