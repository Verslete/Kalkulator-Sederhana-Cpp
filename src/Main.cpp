#include <iostream>
using namespace std;

int main() {

	int d = 1;
	float a, b, hasil;
	char aritmatika;
	bool hasil1, hasil2, hasil3, hasil4;
	char mulai;



	while (d == 1) {


	cout << "SELAMAT DATANG DI CALCULATOR SEDERHANA \n \n";

	cout << " .o88b.       .d8b.       db            .o88b.      db    db      db            .d8b.       d888888b       .d88b.       d8888b.  " << endl;
	cout << "d8P  Y8      d8' `8b      88           d8P  Y8      88    88      88           d8' `8b      `~~88~~'      .8P  Y8.      88  `8D  " << endl;
	cout << "8P           88ooo88      88           8P           88    88      88           88ooo88         88         88    88      88oobY'  " << endl;
	cout << "8b           88~~~88      88           8b           88    88      88           88~~~88         88         88    88      88`8b    " << endl;
	cout << "Y8b  d8      88   88      88booo.      Y8b  d8      88b  d88      88booo.      88   88         88         `8b  d8'      88 `88.  " << endl;
	cout << " `Y88P'      YP   YP      Y88888P       `Y88P'      ~Y8888P'      Y88888P      YP   YP         YP          `Y88P'       88   YD  " << endl;
	cout << " " << endl;


	


		// Memasukkan input dari user
		cout << "Masukkan Nilai Pertama: ";
		cin >> a;
		cout << "Masukkan Operator (+, - , /, *, %): ";
		cin >> aritmatika;
		cout << "Masukkan Nilai Kedua: ";
		cin >> b;



		// Logika perhitungan
		if (aritmatika == '+') {
			hasil = a + b;
		}
		else if (aritmatika == '-') {
			hasil = a - b;
		}
		else if (aritmatika == '/') {
			hasil = a / b;
		}
		else if (aritmatika == '*') {
			hasil = a * b;
		}
		else {
			cout << "\nOperator yang anda masukkan salah" << endl;
		}





		// Hasil dari perhitungan
		hasil1 = (aritmatika == '+');
		hasil2 = (aritmatika == '-');
		hasil3 = (aritmatika == '/');
		hasil4 = (aritmatika == '*');

		if (hasil1 == true) {
			cout << "\nHasil perhitungan dari:\n";
			cout << a << aritmatika << b << " = ";
			cout << hasil << endl;
		}
		else if (hasil2 == true) {
			cout << "\nHasil perhitungan dari:\n";
			cout << a << aritmatika << b << " = ";
			cout << hasil << endl;
		}
		else if (hasil3 == true) {
			cout << "\nHasil perhitungan dari:\n";
			cout << a << aritmatika << b << " = ";
			cout << hasil << endl;
		}
		else if (hasil4 == true) {
			cout << "\nHasil perhitungan dari:\n";
			cout << a << aritmatika << b << " = ";
			cout << hasil << endl;
		}
		else {
			cout << "\nHasil tidak ditemukan" << endl;
		}
	
		cout << endl;
		cout << endl;

		cout << "Ingin mengulang lagi? (y/n): ";
		cin >> mulai;

		if (mulai == 'y'){
			d = 1;
			system("cls");
		}else if (mulai == 'n') {
			d =+ 1;
			cout << "| EXIT | ";
			system("pause");
			exit(0);
		}
	}

	cin.get();
	return 0;
}