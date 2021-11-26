#include <iostream>
using namespace std;

int main()
{
	int x;
	
	cout<<"Masukkan tahun : ";
	cin>>x;
	
	if(x%4==0 && x%100!=0){
		cout<<"Tahun "<<x<<" adalah tahun kabisat"<<endl;
	}else if(x%100==0 && x%400==0){
		cout<<"Tahun "<<x<<" adalah tahun kabisat"<<endl;
	}else{
		cout<<"Tahun "<<x<<" bukan tahun kabisat"<<endl;
	}
	
	
	return 0;
}
