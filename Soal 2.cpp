#include <iostream>
using namespace std ;

int main (){
	int Tinggi;
	int Lebar;
	int Alas;
	int Luas;
	char inisial;
	
	cout << "Apa yang ingin anda hitung?? \n"
		 << "Ketik 'P' untuk menghitung Persegi 'S' Untuk menghitung Segitiga \n";
	cout <<"Ketik Pilihan Anda : ";
	cin >> inisial;	
	
	
	if (inisial=='p' || inisial=='P')
	{ 
		cout <<"masukan Tinggi Persegi: ";  
		cin >> Tinggi ;
		
		cout <<"masukan Lebar Persegi:" ;
		cin >> Lebar ;
		
		cout << Tinggi*Lebar;
    }
}
