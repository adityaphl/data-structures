#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct tumpukan  //struktur tumpukan
{
 char data[15][100], max[15];
 int i, j;
} stack;

void push()  //push untuk mengisi data
{
 stack.i++;
 cout << "Masukan data : ";
 cin >> stack.max;
 strcpy (stack.data[stack.i], stack.max);  //perintah mennyalin data char panjang menggunakan fungsi string
}

void pop()  //pop untuk menggambil data
{
 if (stack.i > 0)
 {
  cout << "data yang terambil : " << stack.data[stack.i] << endl;  //data akan terambil paling atas
  stack.i--; stack.j--;
 }
 else
  cout << "tak ada data yang terambil" << endl;  //jika tidak ada data
}

void view (int n)  //print untuk menampilkan data
{
 if (stack.j > 0)  //menampilkan isi data menggunakan perulangan for
 {
  for (int e = n; e >= 1; e--)
  {
   cout << stack.data[e] << endl;
  }
 }
 else
  cout << "tak ada data tersimpan" << endl;  //jika tidak ada data
}

void clear()  //clear untuk menghapusdata
{
 stack.j = 0; stack.i = 0;  //perintah untuk menghapus keseluruhan data
}

main (void)
{
 int n, pilih;
 ayo:
  cout << "Program Stack (tumpukan)\n";
  stack.data[n];
  stack.i = 0;
  stack.j = 0;
  balik:  //fungsi goto

   cout << "\n1. push\n2. pop\n3. view\n4. clear\n5. quit\n";
   cout << "\npilih : ";  cin >> pilih;
   cout << "\n";
   if (pilih == 1)  //pemilihan pilihan menggunakan if
   {
    if (stack.j < n)
    {
     stack.j++;  push();
    }
    else
     {
      cout << "tumpukan penuh" << endl;
      getch();
     }
     goto balik;
   }
   else
    if (pilih == 2)
    {
     pop ();  getch();  goto balik;
    }
    else
     if (pilih == 3)
     {
      view (stack.i);  getch();  goto balik;
     }
     else
      if (pilih == 4)
      {
       clear();  getch();  goto balik;
      }
      else
       if (pilih == 5)
       {
        getch();  goto ayo;
       }
       else
        {
         cout << "Input anda masukan salah !!!";
         getch();  goto ayo;
        }
}
