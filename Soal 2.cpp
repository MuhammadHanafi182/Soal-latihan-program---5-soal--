#include <iostream>
using namespace std ;

int main (){
	int Tinggi;
	int Lebar;
	int Alas;
	int Luas;
	int hasil;
	char inisial;
	
	cout << "Apa yang ingin anda hitung?? \n"
		 << "Ketik 'P' untuk menghitung luas Persegi 'S' Untuk menghitung luas Segitiga \n";
	cout <<"Ketik Pilihan Anda : ";
	cin >> inisial;	
	
	
	if (inisial=='p' || inisial=='P')
	{ 
		cout <<"masukan Tinggi Persegi: ";  
		cin >> Tinggi ;
		
		cout <<"masukan Lebar Persegi:" ;
		cin >> Lebar ;
		
		hasil=Tinggi*Lebar;
		cout << "Jadi Luas Persegi Adalah :" <<hasil;
		
    }
    
    	else if  (inisial=='s' || inisial=='S')
	{	 
		cout<<"Masukan Alas Segitiga : ";	
		cin >> Alas;
		
		cout <<"Masukan Tinggi Segitiga : ";
		cin >> Tinggi;
		
	
		hasil=0.5 * Alas * Tinggi;
		cout << "Jadi Luas Segitiga Adalah :" <<hasil;
	}
	
		else
		cout <<"Permintaan yang anda masukan salah !";
}

