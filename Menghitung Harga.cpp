#include <iostream>
using namespace std;

int main()
{
	int pena,buku,penghapus,penggaris;
	
	cout<<"Masukkan Harga Pena\t\t:";
	cin>>pena;
	cout<<"Masukkan Harga buku\t\t:";
	cin>>buku;
	cout<<"Masukkan Harga Penghapus\t:";
	cin>>penghapus;
	cout<<"Masukkan Harga Penggaris\t:";
	cin>>penggaris;
	
	cout<<"\nHarga 7 buah pena adalah\t= Rp."<<pena*7<<endl;
	cout<<"Harga 5 buah buku adalah\t= Rp."<<buku*5<<endl;
	cout<<"Harga 1 buah penghapus adalah\t= Rp."<<penghapus*1<<endl;
	cout<<"Harga 4 buah penggaris adalah\t= Rp."<<penggaris*4<<endl;
	
	
	return 0;
}
