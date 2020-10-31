#include <iostream>
#include <string>
using namespace std ;
int main ()
{
 string  name, password, kalkulus, algo ;
 int harian, uts, uas, harian1, uts1, uas1,  pilih;


 	cout <<"Login Akun ==============="<<endl ;
 	cout <<"Username   :  ";
	cin >>name ;
 	cout <<"Password   :  ";
 	cin >>password;
 	cout <<"==========================="<<endl ;
 
 
	if ((name == "Fadel" or name =="fadel") && (password == "124200059"))
	{
 	 cout <<" Login Berhasil!" <<endl;
 		 cout <<"\n";
  		cout<<"Input Nilai Mata Kuliah"<<endl ;
  		cout<<"1. Algoritma dan pemrograman  "<<endl ;
  		cout<<"2. Kalkulus       "<<endl ;
  		cout<<"Pilihan : ";
  		cin>>pilih;
  		switch (pilih)
  		{

  			//algo

   			case 1 :; 
   			cout<<"Nilai Harian : " ;
   			cin>>harian ;
   			cout<<"Nilai UTS    : " ;
   			cin>>uts ;
   			cout<<"Nilai UAS    : " ;
   			cin>>uas ;
   
  			if ((harian+uts+uas)/3>=80){
   			cout <<"Anda lulus Algoritma dan Pemrograman dengan nilai" <<(harian+uts+uas)/3<<endl;
   			}
   			else if ((harian+uts+uas)/3<80){
   			cout <<"Anda tidak lulus Algoritma dan Pemrograman dengan nilai " <<(harian+uts+uas)/3<<endl;
  			 }
   			break;
   
  			 //kalkulus
   
  			case 2 :; 
   			cout<<"Nilai Harian : " ;
  			cin>>harian1 ;
  			cout<<"Nilai UTS  : " ;
  			 cin>>uts1 ;
  			cout<<"Nilai UAS : " ;
  			cin>>uas1 ;
   
   			if ((harian1+uts1+uas1)/3>=80){
    		cout <<"Anda lulus Kalkulus denagn nilai" <<(harian1+uts1+uas1)/3<<endl;
   			}
   			else if ((harian1+uts1+uas1)/3<80){
   			cout <<"Anda tidak lulus kalkulus dengan nilai " <<(harian1+uts1+uas1)/3<<endl;
  			}
   			break;
 		}
 		
 	}
 	else if ((name != "Fadel" or name != "fadel") && (password == "124200059 "))
		cout << "Username anda salah!";
	 
  	else if ((name == "Fadel" or name == "fadel") && (password != "124200059"))
 		cout <<"Password anda salah!"<<endl;

 	else
 		cout<<"Username dan Password Salah!"<<endl;
 	
}
 
