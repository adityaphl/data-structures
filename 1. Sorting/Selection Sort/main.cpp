#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//Data nama utama, hanya bisa diubah secara manual oleh user (hanya dibaca saat pengurutan).
string nama_mahasiswa[5];
//deklarasi fungsi
void selectionSort(string* nama, int jumlah, bool isAscending);
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
	nama_mahasiswa[0] = "Lionel Messi";
	nama_mahasiswa[1] = "Cristiano Ronaldo";
	nama_mahasiswa[2] = "Neymar";
	nama_mahasiswa[3] = "Luis Suarez";
	nama_mahasiswa[4] = "Thomas Mueller";
edit:
	system("cls");
	//List nama mahasiswa default
	printListNama(nama_mahasiswa, jumlah, " Nama mahasiswa saat ini : ");

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
		nama[i] = nama_mahasiswa[i];

	system("cls");

	//menampilkan list nama sebelum disorting
	printListNama(nama, jumlah, "Nama mahasiswa sebelum disorting : ");

	//pilihan menu
	switch (sort)
	{
	case '0':
		sort = '2';
		goto edit;
		break;
	case '1':
		selectionSort(nama, jumlah, true);
		break;
	case '2':
		selectionSort(nama, jumlah, false);
		break;
	default:
		system("cls");
		cout << "[!] Pilihan yang dimasukkan tidak tersedia\n"
			<< "Silakan ulangi inputan" << endl;
		goto menu;
		break;
	}

	//menampilkan list nama setelah disorting
	printListNama(nama, jumlah, "\nNama mahasiswa setelah disorting : ");
menu:
	//menampilkan list pilihan menu yang tersedia dan inputannya
	cout << "\n\n================ MENU PENGURUTAN ================\n"
		<< " 1. Selection sort (Ascending)\n"
		<< " 2. Selection sort (Descending)\n"
		<< "=============== 0 Input Data Baru ===============\n"
		<< "Pilihan : "; cin >> sort;
	goto next;
}



void selectionSort(string* nama, int jumlah, bool isAscending = true) {
	int belumDisorting = jumlah;//jumlah n index yang belum disorting
	for (int i = 0; i < jumlah; i++)
	{
		int maxmin = 0;
		for (int j = 0; j < belumDisorting; j++)
			//nama[j] harus lebih besar dari nama[max] agar nilainya 1
			if (isAscending ? nama[j].compare(nama[maxmin]) > 0 : nama[j].compare(nama[maxmin]) < 0)
				maxmin = j;

		balik(nama[maxmin], nama[belumDisorting - 1]);
		belumDisorting--;
	}
	string apa = isAscending ? "Ascending" : "Descending";
	cout << "\n[!] Nama diurutkan menggunakan Selection Sort ( " << apa << " ) " << endl;
}

//Mengubah semua data lama ke data baru yang diinputkan user(string arg ... arg-n, int jumlah)
void dataBaru(string* nama, int jumlah) {
	cout << "\nMasukkan 5 nama teman anda :" << endl;
	for (int i = 0; i < jumlah; i++) {
		cout << "nama_mahasiswa[" << i << "] = "; cin >> nama_mahasiswa[i];
	}
}

//menampilkan daftar nama
void printListNama(string* nama, int jumlah, string pesan) {
	cout << pesan << endl;
	for (int i = 0; i < jumlah; i++)
		cout << " " << i + 1 << ". " << nama[i] << endl;
}
