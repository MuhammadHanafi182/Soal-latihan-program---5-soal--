#include <iostream>
using namespace std;

int main(){
	float jaker, gaper, gatot,totaljamlem, gapok, jamlembur,bonlem,gaber;
	
	cout<<"   Program Perhitungan Gaji Karyawan \n";
	cout<<""<<endl;
	cout<<"Masukan Jam kerja (seminggu)    : "; 
	cin>>jaker;
	cout<<"Gaji Perjam Karyawan   : "; 
	cin>>gaper;
	
	if (jaker>40){
	cout<<" \n";
	jamlembur=jaker-40;
	bonlem=jamlembur*1.5;
	totaljamlem=40+bonlem;
	gatot=totaljamlem*gaper;
	gaber=gatot-(0.15*gatot);

}
}
