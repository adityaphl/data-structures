#include<stdio.h>
#include<iostream>
#include<conio.h>
#include <windows.h>
#define MAX 5
using namespace std;
typedef struct{
               int data[MAX];
               int head;
               int tail;
   }Queue;
   Queue antrian;

void Create(){
   antrian.head=antrian.tail=-1;
   }
int IsEmpty(){
   if(antrian.tail==-1)
   return 1;
   else
   return 0;
   }
int IsFull(){
if(antrian.tail==MAX-1)
return 1;
else
return 0;
}

void Enqueue(int data){
if(IsEmpty()==1){
antrian.head=antrian.tail=0;
antrian.data[antrian.tail]=data;
printf("%d sudah dimasukan",antrian.data[antrian.tail]);
} else
if(IsFull()==0){
antrian.tail++;
antrian.data[antrian.tail]=data;
printf("%d sudah dimasukan",antrian.data[antrian.tail]);
}
}
int Dequeue(){
int i;
int e = antrian.data[antrian.head];
for(i=antrian.head; i<=antrian.tail-1;i++){
antrian.data[i]=antrian.data[i+1];
}
antrian.tail--;
return e;
}
void Clear(){
antrian.head=antrian.tail=-1;
printf("CLEAR");
}
void Tampil(){
if(IsEmpty()==0){
for(int i=antrian.head;i<=antrian.tail;i++){
printf(" %d",antrian.data[i]);
}
}else printf("data kosong!\n");
}
main(){
int pil;
int data;
Create();
do{
system("cls");
cout<<"=============================="<<endl;
cout<<"PROGRAM ANTRIAN MAHASISWA"<<endl;
cout<<"==============================\n\n"<<endl;
cout<<"1. ENQUEUE\n "<<endl;
cout<<"2. DEQUEUE\n "<<endl;
cout<<"3. TAMPIL\n "<<endl;
cout<<"4. CLEAR\n "<<endl;
cout<<"5. EXIT\n "<<endl;
cout<<" Masukan Pilihan : ";cin>>pil;
switch(pil){
case 1:
cout<<"Masukan Data : ";cin>>data;
Enqueue(data);
break;
case 2:
Dequeue();
break;
case 3:
Tampil();
break;
case 4:
Clear();
break;
case 5:
cout<<endl<<"\nTHANKS";
break;
}
getch();
}while(pil!=5);
return 0;
}
