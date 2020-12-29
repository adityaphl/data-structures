#include <iostream>//untuk cout dan cin
#include<conio.h>// pasangannya getch

using namespace std;

int main()

{
     int array[100];// untuk panjang baris nya
     int a, b, n,hold, jumlah=0;//untuk pendeklarasian
     int pil;
     cout<<"=======Program bubble sort======"<<endl;
      cout<<"1. Ascending"<<endl;//
      cout<<"2. Descending"<<endl;
     cout<<"================================="<<endl;

     cout << "Masukan pilihan anda = "; cin >> pil;

switch(pil) {//untuk memilih pilihan dari case

     case 1:
     cout<<"Masukkan jumlah array :";
     cin>>n;//menampilkan data

     for(a=0;a<n; a++)//untuk pengulangan
     {
          cout<<"Masukkan Angka ke "<<(a+1)<<":";//untuk memasukkan data angka yg akan di pilih
          cin>>array[a];

     }
     cout<<endl<<endl;
     cout<<"hasil data yg di masukkan :"<<endl;
     for(int i=0;i<n;i++)
     {
     	   cout<<"angka ke-"<<i+1<<" indeks ["<<i<<"]="<<array[i]<<endl;
					 //untuk memasukkan data angka dan indeks nya
					}

     cout<<"\nArray sebelum diurutkan : ";
     cout<<endl;


     for(int j=0; j<n; j++) {
 cout<<array[j];
 cout<<"  ";
     }


  cout <<endl<< "proses simulasi sorting"<<endl;
 for(int i=0; i<n; i++) {
  for(int j=i+1; j<n; j++) {
   if(array[i]>array[j]) {
    hold=array[i];
    array[i]=array[j];
    array[j]=hold;

    for(int i=0; i<n; i++) {
  cout<<array[i]<<"  ";
  }
  cout<<endl;
   }


  }

 }
         cout<<"\narray setelah diurutkan secara ascending  : ";
									cout<<endl;

     for(int i=0; i<n; i++)
					{
  cout<<array[i]<<"  ";
 }
 break;//untuk exit

          getch();//untuk menahan tampilan
case 2:
	 cout<<"Masukkan jumlah array :";
     cin>>n;
     for(a=0;a<n; a++)
     {
          cout<<"Masukkan Angka ke "<<(a+1)<<":";
          cin>>array[a];

     }
     cout<<endl<<endl;
     cout<<"hasil data yg di masukkan :"<<endl;
     for(int i=0;i<n;i++)
     {
     	   cout<<"angka ke-"<<i+1<<" indeks ["<<i<<"]="<<array[i]<<endl;
					}
     cout<<"\nArray sebelum diurutkan : ";
     cout<<endl;


     for(int j=0; j<n; j++) {
 cout<<array[j];
 cout<<"  ";
     }


  cout <<endl<< "proses simulasi sorting"<<endl;
 for(int i=0; i<n; i++) {
  for(int j=i+1; j<n; j++) {
   if(array[i]<array[j]) {
    hold=array[i];
    array[i]=array[j];
    array[j]=hold;

    for(int i=0; i<n; i++) {
  cout<<array[i]<<"  ";
  }
  cout<<endl;
   }


  }

 }
         cout<<"\narray setelah diurutkan secara descending  : ";
									cout<<endl;

     for(int i=0; i<n; i++)
					{
  cout<<array[i]<<"  ";

 }
          getch();
     }
    }

