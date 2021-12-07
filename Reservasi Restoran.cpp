#include <iostream>
#include <windows.h>
using namespace std;

void header(){
	cout<<"\t\t\t\t\t================================== \n";
	cout<<"\t\t\t\t\t   [PROGRAM RESERVASI RESTORAN] \n";
	cout<<"\t\t\t\t\t================================== \n";
}
void footer(){
	cout<<"\n\t\t\t\t\t===================================\n";
}
void timer(){
	int waktu;
	for (waktu = 0; waktu <= 5; waktu++){
		cout << "Loading.....";
		Sleep(100);
		system("cls");
		cout << "Loading....";
		Sleep(100);
		system("cls");
		cout << "Loading..";
		Sleep(100);
		system("cls");
	}
}
int main(){
	string nama, tgl, hp, jwb;
	int jam, menu, meja;
	int total, um, kurang;
	string daftar[3]={"\n\t\t\t\t\t\t1. SUSHI OKAGE", "\t\t\t\t\t\t2. SHABU KITCHEN", "\t\t\t\t\t\t3. LIEP\'S CAFE"};
	
	header();
	cout<<"\n\t\t\t\t\t\tDAFTAR RESTAURAN\n";
	for(int i=0;i<3;i++){
		cout<<daftar[i]<<endl;
	}
	cout<<"\n\t\t\t\t  Silahkan Pilih Restoran Yang Ingin Di Tuju : "; cin>>menu;
	timer();
	system("cls");
	if(menu==1){
	cin.ignore(512,'\n');
	header();
	cout<<"\n";
	cout<<"\t\t\t\t\tNama Pelanggan\t\t: "; getline(cin,nama); 
	cout<<"\t\t\t\t\tNomor Telepon/HP\t: "; cin>>hp; cin.ignore(512,'\n');
	cout<<"\t\t\t\t\tTanggal [DD/MM/YY]\t: "; getline(cin,tgl);
	cout<<"\t\t\t\t\tJam Kedatangan\t\t: "; cin>>jam; cin.ignore(512,'\n');
	cout<<"\t\t\t\t\tJumlah Meja Yang Dipesan: "; cin>>meja;
	
	timer();
	system("cls");
	header();
	cout<<"\n";
	cout<<"\t\t\t\t\tAtas Nama\t\t : "<< nama;
	cout<<"\n\t\t\t\t\tTanggal\t\t\t : "<< tgl;
	cout<<"\n\t\t\t\t\tJumlah Meja Yang Dipesan : "<<meja;
	total=1500000*meja;
	footer();
	cout<<"\n\t\t\t\t\tBiaya Total\t: Rp. "<<total;	
	cout<<"\n\t\t\t\t\tUang Muka \t: Rp. "; cin>>um;
	kurang=total-um;
    if(total>um)
    {
        cout<<"\n\t\t\t\t\tKekurangan       : Rp. "<<kurang;
        cout<<"\n\t\t\t\t\tSilahkan Datang Ke Kasir Untuk Pelunasan";
    }
    else
    {
        cout<<"\n\t\t\t\t\tKembali          : Rp. "<<kurang*(-1);
    	cout<<"\n\t\t\t\t\tApakah Anda Ingin Memesan Meja Lagi ? [Y/N]"<<endl;
		cout<<"\n\t\t\t\t\t"; cin>>jwb;
    if(jwb=="Y" || jwb=="y")
    {
    	timer();
    	system("cls");
        main();
    }
	else
   	{
   		timer();
    	system("cls");
    	header();
        cout<<"\t\t\t\t\t  Terima Kasih Atas Kunjungannya";
        footer();
    }
	}
	}
	else if(menu==2){
	cin.ignore(512,'\n');
	header();
	cout<<"\n";
	cout<<"\t\t\t\t\tNama Pelanggan\t\t: "; getline(cin,nama); 
	cout<<"\t\t\t\t\tNomor Telepon/HP\t: "; cin>>hp; cin.ignore(512,'\n');
	cout<<"\t\t\t\t\tTanggal [DD/MM/YY]\t: "; getline(cin,tgl);
	cout<<"\t\t\t\t\tJam Kedatangan\t\t: "; cin>>jam; cin.ignore(512,'\n');
	cout<<"\t\t\t\t\tJumlah Meja Yang Dipesan: "; cin>>meja;
	
	system("cls");
	header();
	cout<<"\n";
	cout<<"\t\t\t\t\tAtas Nama\t\t : "<< nama;
	cout<<"\n\t\t\t\t\tTanggal\t\t\t : "<< tgl;
	cout<<"\n\t\t\t\t\tJumlah Meja Yang Dipesan : "<<meja;
	total=1250000*meja;
	footer();
	cout<<"\n\t\t\t\t\tBiaya Total\t: Rp. "<<total;	
	cout<<"\n\t\t\t\t\tUang Muka \t: Rp. "; cin>>um;
	kurang=total-um;
    if(total>um)
    {
        cout<<"\n\t\t\t\t\tKekurangan       : Rp. "<<kurang;
        cout<<"\n\t\t\t\t\tSilahkan Datang Ke Kasir Untuk Pelunasan";
    }
    else
    {
        cout<<"\n\t\t\t\t\tKembali          : Rp. "<<kurang*(-1);
    	cout<<"\n\t\t\t\t\tApakah Anda Ingin Memesan Meja Lagi ? [Y/N]"<<endl;
		cout<<"\n\t\t\t\t\t"; cin>>jwb;
    if(jwb=="Y" || jwb=="y")
    {
    	timer();
    	system("cls");
        main();
    }
	else
   	{
   		timer();
    	system("cls");
    	header();
        cout<<"\t\t\t\t\t  Terima Kasih Atas Kunjungannya";
        footer();
    }
	}
	}
	else if(menu==3){
	cin.ignore(512,'\n');
	header();
	cout<<"\n";
	cout<<"\t\t\t\t\tNama Pelanggan\t\t: "; getline(cin,nama); 
	cout<<"\t\t\t\t\tNomor Telepon/HP\t: "; cin>>hp; cin.ignore(512,'\n');
	cout<<"\t\t\t\t\tTanggal [DD/MM/YY]\t: "; getline(cin,tgl);
	cout<<"\t\t\t\t\tJam Kedatangan\t\t: "; cin>>jam; cin.ignore(512,'\n');
	cout<<"\t\t\t\t\tJumlah Meja Yang Dipesan: "; cin>>meja;
	
	system("cls");
	header();
	cout<<"\n";
	cout<<"\t\t\t\t\tAtas Nama\t\t : "<< nama;
	cout<<"\n\t\t\t\t\tTanggal\t\t\t : "<< tgl;
	cout<<"\n\t\t\t\t\tJumlah Meja Yang Dipesan : "<<meja;
	total=1000000*meja;
	footer();
	cout<<"\n\t\t\t\t\tBiaya Total\t: Rp. "<<total;	
	cout<<"\n\t\t\t\t\tUang Muka \t: Rp. "; cin>>um;
	kurang=total-um;
    if(total>um)
    {
        cout<<"\n\t\t\t\t\tKekurangan       : Rp. "<<kurang;
        cout<<"\n\t\t\t\t\tSilahkan Datang Ke Kasir Untuk Pelunasan";
    }
    else
    {
        cout<<"\n\t\t\t\t\tKembali          : Rp. "<<kurang*(-1);
    	cout<<"\n\t\t\t\t\tApakah Anda Ingin Memesan Meja Lagi ? [Y/N]"<<endl;
		cout<<"\n\t\t\t\t\t"; cin>>jwb;
    if(jwb=="Y" || jwb=="y")
    {
    	timer();
    	system("cls");
        main();
    }
	else
   	{
   		timer();
    	system("cls");
    	header();
        cout<<"\t\t\t\t\t  Terima Kasih Atas Kunjungannya";
        footer();
    }
	}
	}
return 0;
}
