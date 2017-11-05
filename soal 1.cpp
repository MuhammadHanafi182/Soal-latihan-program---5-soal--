#include <iostream>
using namespace std;

int main(){
	int x;
	int y;
	int selisih;
	
	cout <<"masukan nilai x";
	cin >> x;
	
	cout <<"masukan nilai y";
	cin >> y;
	
    selisih = x-y;
	if (selisih<0)
	cout << selisih*-1;
	else
	cout << selisih;	
	
}
