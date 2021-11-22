#include <iostream>
using namespace std;

int main()
{
int max,n,i;
float A[100];
   
cout <<"Masukkan Jumlah Data : ";
cin>>n;
      
   for(i=0;i<n;i++)
   {
		cout <<"masukkan bilangan ke "<<i+1<<" : ";
		cin >> A[i];
	}
   
   max = A[0];
    for (i=1;i<n;i++){
       if (max <  A [i])
            max = A[i];
    }

    cout <<"Nilai Terbesar adalah : "<<max<<endl;
    return 0;
}
