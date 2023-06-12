#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;		//variable untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() {		//kontruktor
		x = 0;
	}
	virtual void input() {}		//menerima dan mengirim input melalui setX untuk disimpan di variable x
	virtual float Luas(int a) { return 0;}		//menghitung luas
	virtual float Keliling(int a) { return 0;}		//menghitung keliling
	void setX(int a) {		//memberi atau mengirim nilai dalam x(enkapsulasi)
		this-> x = a; 
	}
	int getX() {		//membaca atau mengambil nilai dalam x(enkapsulasi)
		return x;
	}
};

class Lingkaran : public bidangDatar {		//inheritance
public :
	void input() {
		int jejari;
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukkan jejari : ";
		cin >> jejari;
		setX(jejari);
	}
	float Luas(int a) {
		return 3.14 * a * a;
	}
	float Keliling(int a) {
		return 2 * 3.14 * a;
	}
};

class Bujursangkar : public bidangDatar {		//inheritance
public:
	void input() {
		int sisi;
		cout << "Bujursangkar dibuat" << endl;
		cout << "Masukkan sisi : ";
		cin >> sisi;
		setX(sisi);
	}
	float Luas(int a) {
		return a * a;
	}
	float Keliling(int a) {
		return 4 * a;
	}
};

int main() {
	bidangDatar* objek;

	objek = new Lingkaran;		//Lingkaran 
	objek->input(); 
	cout << "Luas Lingkaran = " << objek->Luas(objek->getX()) << endl; 
	cout << "Keliling Lingkaran = " << objek->Keliling(objek->getX()) << endl; 
	delete objek; 

	cout << endl;

	objek = new Bujursangkar;		//Bujursangkar 
	objek->input();  
	cout << "Luas Bujursangkar = " << objek->Luas(objek->getX()) << endl; 
	cout << "Keliling Bujursangkar = " << objek->Keliling(objek->getX()) << endl; 
	delete objek; 

	return 0;
}