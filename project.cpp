#include <iostream>
#include <math.h>
using namespace std;

void persegi()
{
	cout<<"PERSEGI"<<endl;

	int sisi;
	
	cout<<"Masukkan Panjang Sisi : ";
	cin>>sisi;
	
	float luas = sisi * sisi;
	float keliling = 4 * sisi;
	
	cout<<"Luas Persegi = "<<luas<<endl;
	cout<<"Keliling Persegi = "<<keliling<<endl;
}

void persegipanjang()
{
	cout<<"PERSEGI PANJANG"<<endl;

	int panjang, lebar;
		
	cout<<"Masukan Panjang : ";
	cin>>panjang;
	cout<<"Masukan Lebar : ";
	cin>>lebar;
	
	float luas = panjang*lebar;
	float keliling = 2 * (panjang + lebar);
	
	cout<<"Luas Persegi Panjang : "<<luas<<endl;
	cout<<"Keliling Persegi Panjang : "<<keliling<<endl;
}

void segitigasikusiku()
{
	cout<<"SEGITIGA SIKU - SIKU"<<endl;
	
	int alas, tinggi;
	
	cout<<"Masukan Alas : ";
	cin>>alas;
	cout<<"Masukan Tinggi : ";
	cin>>tinggi;
	
	float luas = 0.5 * (alas * tinggi);
	float keliling = alas + tinggi + sqrt(alas * alas + tinggi * tinggi);
	
	cout<<"Luas Segitiga Siku - Siku : "<<luas<<endl;
	cout<<"Keliling Segitiga Siku - Siku : "<<keliling<<endl;
}

void segitigasamakaki()
{
	cout<<"SEGITIGA SAMA KAKI"<<endl;
	
	int alas, tinggi;
	
	cout<<"Masukan Alas : ";
	cin>>alas;
	cout<<"Masukan Tinggi : ";
	cin>>tinggi;
	
	int sisimiring = sqrt(pow(alas / 2, 2) + pow(tinggi, 2));
	float luas = (alas * tinggi) / 2;
	float keliling =  2 * sisimiring + alas;
	
	cout<<"Luas Segitiga Sama Kaki : "<<luas<<endl;
	cout<<"Keliling Segitiga Sama Kaki : "<<keliling<<endl;
}

void segitigasembarang()
{
	cout<<"SEGITIGA SEMBARANG"<<endl;
	
	int sisiA, sisiB, sisiC;
	
	cout<<"Masukan Sisi A : ";
	cin>>sisiA;
	cout<<"Masukan Sisi B : ";
	cin>>sisiB;
	cout<<"Masukan Sisi C : ";
	cin>>sisiC;
	
	int s = (sisiA + sisiB + sisiC) / 2;
	float luas = sqrt(s * (s - sisiA) * (s - sisiB) * (s - sisiC));
	float keliling =  sisiA + sisiB + sisiC;
	
	cout<<"Luas Segitiga Sembarang : "<<luas<<endl;
	cout<<"Keliling Segitiga Sembarang : "<<keliling<<endl;
}

void trapesium()
{
	cout<<"TRAPESIUM"<<endl;
	
	int alasA, alasB, tinggi;
	
	cout<<"Masukan Alas A : "; //Alas Atas
	cin>>alasA;
	cout<<"Masukan Alas B : "; //Alas Bawah
	cin>>alasB;
	cout<<"Masukan Tinggi : ";
	cin>>tinggi;
	
	float keliling = alasA + alasB + sqrt( (alasA * alasA) + (tinggi * tinggi) );
	float luas = (alasA + alasB) * tinggi / 2;
	
	cout<<"Luas Trapesium : "<<luas<<endl;
	cout<<"Keliling Trapesium : "<<keliling<<endl;
}


void jajargenjang()
{
	cout<<"JAJAR GENJANG"<<endl;
	
	int alas, tinggi;
	
	cout<<"Masukan Alas : ";
	cin>>alas;
	cout<<"Masukan Tinggi : ";
	cin>>tinggi;
	
	float luas = alas * tinggi;
	float keliling =  2 * (alas + tinggi);
	
	cout<<"Luas Jajar Genjang : "<<luas<<endl;
	cout<<"Keliling Jajar Genjang : "<<keliling<<endl;
}


void belahketupat()
{
	cout<<"BELAH KETUPAT"<<endl;
	
	int diagonal1, diagonal2, sisi;
	
	cout<<"Masukan Diagonal 1 : ";
	cin>>diagonal1;
	cout<<"Masukan Diagonal 2 : ";
	cin>>diagonal2;
	cout<<"Masukkan Sisi  :";
	cin>>sisi;
	
	float luas = (diagonal1 * diagonal2) / 2;
	float keliling =  4 * sisi;
	
	cout<<"Luas Belah Ketupat : "<<luas<<endl;
	cout<<"Keliling Belah Ketupat : "<<keliling<<endl;
}

void layanglayang()
{
	cout<<"LAYANG-LAYANG"<<endl;
	
	int diagonal1, diagonal2, sisi1, sisi2;
	
	cout<<"Masukan Diagonal 1 : ";
	cin>>diagonal1;
	cout<<"Masukan Diagonal 2 : ";
	cin>>diagonal2;
	cout<<"Masukkan Sisi 1 :";
	cin>>sisi1;
	cout<<"Masukkan Sisi 2 :";
	cin>>sisi2;
	
	float luas = (diagonal1 * diagonal2) / 2;
	float keliling =  2 * (sisi1 + sisi2);
	
	cout<<"Luas Belah Ketupat : "<<luas<<endl;
	cout<<"Keliling Belah Ketupat : "<<keliling<<endl;
}

void lingkaran()
{
	cout<<"LINGKARAN"<<endl;
	
	int jari;
	
	cout<<"Masukan Jari : ";
	cin>>jari;
	
	float luas = 3.14 * jari * jari;
	float keliling =  2 * 3.14 * jari;
	
	cout<<"Luas Lingkaran : "<<luas<<endl;
	cout<<"Keliling Lingkaran : "<<keliling<<endl;
}


main() 
{
	char ulang;
	
	do
	{
	int pilih;
	
	cout<<"Pilih Bangun datar"<<endl;
	cout<<"1. Persegi"<<endl;
	cout<<"2. Persegi Panjang"<<endl;
	cout<<"3. Segitiga"<<endl;
	cout<<"4. Trapesium"<<endl;
	cout<<"5. Jajar Genjang"<<endl;
	cout<<"6. Belah Ketupat"<<endl;
	cout<<"7. Layang-Layang"<<endl;
	cout<<"8. Lingakaran"<<endl;
	cin>>pilih;
	switch(pilih)
	{
		case 1:
			persegi();
			break;
		case 2:
			persegipanjang();
			break;
		case 3:
				int segitiga;
				cout<<"Pilih Segitiga"<<endl;
				cout<<"1. Segitiga Siku-Siku"<<endl;
				cout<<"2. Segitiga Sama kaki"<<endl;
				cout<<"3. Segitiga Sembarang"<<endl;
				cin>>segitiga;
				switch(segitiga)
				{
					case 1:
						segitigasikusiku();
						break;
					case 2:
						segitigasamakaki();
						break;
					case 3:
						segitigasembarang();
						break;
					default:
						cout<<"Pilihan Yang Anda Masukkan salah"<<endl;
				}
				break;
		case 4:
			trapesium();
			break;
		case 5:
			jajargenjang();
			break;
		case 6:
			belahketupat();
			break;
		case 7:
			layanglayang();
			break;
		case 8:
			lingkaran();
			break;
		default:
			cout<<"Pilihan Yang Anda Masukkan salah"<<endl;
	}
	cout<<"Apakah Anda Ingin Mengulang (y/n) :";
	cin>>ulang;
	}while (ulang == 'y' || ulang == 'Y');
	cout<<"Terima Kasih Telah Menggunakan Program ini"<<endl;
}

