#include <iostream>
using namespace std;

int main(){
	int n = 0;
	double ukr, suhu_ke[31], total = 0, tertinggi, terendah;
	string bulan;
	char ulang;
	
	//input
	cout << "Entry Data Suhu\n";
	cout << "Ukuran Ruangan: "; cin >> ukr;
	cout << endl;
	cout << "Bulan: "; cin >> bulan;
	
	do{
		cout << "Suhu hari ke-" << n+1 << ": "; cin >> suhu_ke[n];
		total += suhu_ke[n];
		cout << "Tambah data lagi? Y/T: "; cin >> ulang;
		n++;
	} while(ulang=='Y' || ulang=='y');
	
	//output
	tertinggi = suhu_ke[0];
	terendah = suhu_ke[0];
	
	for(int i=1; i<n; ++i){
		if(tertinggi < suhu_ke[i]){
			tertinggi = suhu_ke[i];
		}
		else if(terendah > suhu_ke[i]){
			terendah = suhu_ke[i];
		}
	}
	
	cout << "\n\n";
	cout << "HASIL PENGUKURAN SUHU RUANGAN\n";
	cout << "UKURAN RUANGAN " << ukr << " BULAN " << bulan << "\n\n";
	cout << "Total suhu    : " << total << endl;
	cout << "Suhu rata-rata: " << total / n << endl;
	cout << "Suhu tertinggi: " << tertinggi << endl;
	cout << "Suhu terendah : " << terendah;
	
	return 0;
}
