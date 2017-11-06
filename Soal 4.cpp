#include<iostream>
using namespace std;

int main(){
	int bil;
	
	cout<<"Program menentukan jenis biangan Negatif,Positif,nol \n" ;
	cout<<" \n ";
	cout<<" Input Bilangan Yang Anda Inginkan : ";
	cin>>bil;
	cout<<" \n ";
	
		if (bil < 0)
	{
		cout<<"Biangan yang anda input adalah bilangan negatif \n";
	}
	
	else if (bil>0)
	{
		cout<<"Bilangan yang anda input adalah bilangan positif \n";
	}
}
