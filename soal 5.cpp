#include <iostream>

using namespace std;
int main(){
	float beratbadan;
    int tinggibadan;
    
    cout<<"Program Penentuan kestabilan berat badan (Underweight,Normal,Overweight) \n";
    cout << "Silahkan masukkan tinggi badan (cm) : ";
	cin >>tinggibadan;
    cout << "Silahkan masukkan berat badan (kg) : " ;
    cin >> beratbadan;
    
    if (beratbadan<tinggibadan/2.5)
    cout << "  Maaf untuk saat ini anda kekurangan berat badan (UnderWeight) \n";
    else if (tinggibadan/2.3 < beratbadan)
    cout << "  Maaf untuk saat ini anda kelebihan berat badan (Overweight) \n";
    else if (tinggibadan/2.5 <= beratbadan <= tinggibadan/2.3)
	cout << "  Selamat berat badan dan tinggi badan anda proporsional (normal) \n";
}
