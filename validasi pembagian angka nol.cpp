#include <iostream>

using namespace std;

int main ()

{
	int a,b,hasil;
	
	cout<<"Masukkan Bilangan a = ";
	cin>>a;
	
	cout<<"Masukkan Bilangan b = ";
	cin>>b;
	
	if (b==0)
	{
		cout<<"Pembagian Tidal Bisa dengan Angka NOL(0) "<<endl;
	}
	else {
		hasil = a/b;
		cout<<"Hasil Dari Pembagian Tersebut Adalah = "<<hasil;
		}
		
		return 0;
}
