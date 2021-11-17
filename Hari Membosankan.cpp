#include<iostream>
using namespace std;
int main(){
    long int jam,menit,detik;
    
    
    cin>>detik;
    

    if(1<=detik && detik<=100000){
    
    jam = detik / (60*60);
    detik = detik - ((60*60)*jam);
    menit = detik / 60;
    detik = detik - (60*menit);
    
    cout<<jam<<" jam "<<menit<<" menit "<<detik<<" detik ";
    }else{
    cout<<"nilai salah"<<endl;
    }
    
    return 0;
}
