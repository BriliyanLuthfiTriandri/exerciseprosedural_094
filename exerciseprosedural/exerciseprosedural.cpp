#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double c, double d) {
	if (c >= 70 && d >= 80)
		return "Diterima";
	else
		return "Ditolak";
}

double reratanil[20];
string namakandidat[20];
int nilMtk[20], nilBinggris[20];

void input() {
	for (int i = 0; i < 20; i++) {
		cout << "Masukan Nama Kandidat: ";
		cin >> namakandidat[i];
		cout << "Masukan Nilai Matematika: ";
		cin >> nilMtk[i];
		cout << "Masukan Nilai Bahasa Inggris: ";
		cin >> nilBinggris[i];
	}
}

void TampilanLayar() {
	cout << "Nama Kandidat\tStatus" << endl;
	for (int i = 0; i < 20; i++) {
		cout << namakandidat[i] << status(reratanil[i], nilMtk[i]) << endl; 
	}
}

void JumlahKandidat() {
	int jumlahditerima = 0;
	int jumlahditolak = 0;
	for (int i = 0; i < 20; i++) {
		if (status(reratanil[i], nilMtk[i]) == "Anda Diterima") {
			 jumlahditerima++;
		}
		else {
			jumlahditolak++;
		}
		cout << "Jumlah Kandidat Diterima" << jumlahditerima << endl;
		cout << "Jumlah Kandidat Tidak Diterima" << jumlahditolak << endl;
	}
}

int main() {
	void input();
	void TampilanLayar();
	void JumlahKandidat();
	return 0;
}