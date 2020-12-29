#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//Data nama utama, hanya bisa diubah secara manual oleh user (hanya dibaca saat pengurutan).
string nama_benda[5];
//deklarasi fungsi
void insertionSort(string* nama, int jumlah, bool isAscending);
void dataBaru(string* nama, int jumlah);
void printListNama(string* nama, int jumlah, string pesan);

//memindahkan data string pada dua index array(string arg1, string arg2)
template <typename T>
void balik(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	//char nama[5][30], temp[30];
	char edit, sort = '6';
	string nama[5];
	int jumlah = sizeof(nama) / sizeof(nama[5]);

	//Nilai awal / default untuk test
	nama_benda[0] = "Pensil";
	nama_benda[1] = "Pulpen";
	nama_benda[2] = "Penghapus";
	nama_benda[3] = "Papan Tulis";
	nama_benda[4] = "Penggaris";
edit:
	system("cls");
	//List nama benda default
	printListNama(nama_benda, jumlah, " Nama benda saat ini : ");

	//pilihan edit data, user memasukkan semua nama jika pilihan 'n'
	cout << "\n[!] Ketik 'O' lanjut atau 'N' input data baru : "; cin >> edit;
	switch (tolower(edit))
	{
	case 'o':
	case '0':
		goto next;
		break;
	case 'n':
		dataBaru(nama, jumlah);
		break;
	default:
		goto next;
		break;
	}

next:
	//menyalin data utama yang nilainya belum berubah
	for (int i = 0; i < jumlah; i++)
		nama[i] = nama_benda[i];

	system("cls");

	//menampilkan list nama sebelum disorting
	printListNama(nama, jumlah, "Nama benda sebelum disorting : ");

	//pilihan menu
	switch (sort)
	{
	case '0':
		sort = '2';
		goto edit;
		break;
	case '1':
		insertionSort(nama, jumlah, true);
		break;
	case '2':
		insertionSort(nama, jumlah, false);
		break;
	default:
		system("cls");
		cout << "[!] Pilihan yang dimasukkan tidak tersedia\n"
			<< "Silakan ulangi inputan" << endl;
		goto menu;
		break;
	}

	//menampilkan list nama setelah disorting
	printListNama(nama, jumlah, "\nNama benda disorting : ");
menu:
	//menampilkan list pilihan menu yang tersedia dan inputannya
	cout << "\n\n================ MENU PENGURUTAN ================\n"
		<< " 1. Insertion sort (Ascending)\n"
		<< " 2. Insertion sort (Descending)\n"
		<< "=============== 0 Input Data Baru ===============\n"
		<< "Pilihan : "; cin >> sort;
	goto next;
}


void insertionSort(string* nama, int jumlah, bool isAscending = true) {
	string temp;
	for (int i = 0; i < jumlah; i++)
	{
		int n = i;
		//index pertama dianggap urut (n>0)
		//nama[n] harus lebih kecil/sama dengan nama[n-1]
		//agar nilainya lbh kecil/sama dgn 0
		while (n > 0 && (isAscending ? nama[n].compare(nama[n - 1]) <= 0 : nama[n].compare(nama[n - 1]) >= 0))
		{
			balik(nama[n], nama[n - 1]);
			n--;
		}
	}
	string apa = isAscending ? "Ascending" : "Descending";
	cout << "\n[!] Nama diurutkan menggunakan Insertion Sort ( " << apa << " ) " << endl;
}

//Mengubah semua data lama ke data baru yang diinputkan user(string arg ... arg-n, int jumlah)
void dataBaru(string* nama, int jumlah) {
	cout << "\nMasukkan 5 nama benda anda :" << endl;
	for (int i = 0; i < jumlah; i++) {
		cout << "nama_benda[" << i << "] = "; cin >> nama_benda[i];
	}
}

//menampilkan daftar nama
void printListNama(string* nama, int jumlah, string pesan) {
	cout << pesan << endl;
	for (int i = 0; i < jumlah; i++)
		cout << " " << i + 1 << ". " << nama[i] << endl;
}
