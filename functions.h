#include <iostream>
#include <string>
#include <cstring>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>



using namespace std;
char fileNama[50];
ofstream myfile;
//ofstream myfile;
  //myfile.open ("example.txt");
  //myfile << "Writing this to a file.\n";
  //myfile.close();

string chrDestinasi[6] = {"","Jakarta","Surabaya","Malang","Pekanbaru","Bali"};
string maskapai[6] ={"","Garuda","Batik Air","Air Asia","Citilink","Sriwijaya Air"}; 
int hMaskapai[6] = {0,1000000,800000,450000,475000,600000};
int hKota[6] = {0,250000,100000,400000,300000,1500000};
int pilihMas,pilihKota,intPenumpang;


int welcomeMessage(){
    const char TB = '\xCD'; // 205
	const char LR = '\xBA'; // 186
	const char TL = '\xC9'; // 201
	const char TR = '\xBB'; // 187
	const char BL = '\xC8'; // 200
	const char BR = '\xBC'; // 188

	string hello  = "CLIburan Solusi Tiket Onlinemu !";
	string margin = "  ";
	string line(hello.length() + 2 * margin.length(), TB);

	cout << TL << line << TR << endl;
	cout << LR << margin << hello << margin << LR << endl;
	cout << BL << line << BR << endl;
	cout << endl;

	return 0;
}
int dataDiri(){
	
    string telp,email;
	cout << "Nama Lengkap : " ;
   		cin.getline(fileNama,50);
		
	cout << "No Telp : " ;	   
   		getline(cin,telp);
	cout << "Alamat Email : " ;	   
   		getline(cin,email);

	
	myfile.open(fileNama);
	myfile << "DATA TRANSAKSI TIKET \n" ;
	myfile << "Nama Pelanggan :" ;
	myfile << fileNama << endl ;
	myfile << "No Telp :";
	myfile << telp << endl ;
	myfile << "Email :" ;
	myfile << email; 
	//myfile.close();

	system("cls");

	cout << "Nama Lengkap : " <<fileNama<< endl;
	cout << "No Telp/HP :" << telp<<endl;
	cout << "Email : "<<email<<endl<<endl;
}

void kotaAsal() {
	char strkotaAsal[0];
	bool repeat = true;
	while(repeat == true){
	cout << "Masukkan Kota Asal : " ;
	cin >> strkotaAsal;
	//myfile.open(fileNama);
	myfile << "Kota Asal : ";
	myfile << strkotaAsal;
	//if(tolower(strkotaAsal) == pili){

	//}

	if(isdigit(strkotaAsal[0])){
		system("cls");
		cout << "Masukkan kota asal dengan benar !" << endl;
		repeat = true;
	}else{
		repeat = false ;
	}

}//Tutup while

}

void listKota(){

    string listKota[5] = {"1.Jakarta","2.Surabaya","3.Malang","4.Pekanbaru","5.Bali"};
    for(int i=0; i < 5 ;i++ ){
        cout << listKota[i] << endl;
    }
}



void pilihTiket(){
//	chrDestinasi[] = '/0' ; //Menhilangkan nilai variabel
  cout << "Silahkan Pilih Kota Tujuan :" << endl ;
	listKota();
	
	cin >> pilihKota;
	
    switch (pilihKota){
		
    case 1 :
		cout << endl << "Kota yang dipilih : Jakarta " << endl ;
		chrDestinasi[pilihKota];
		hKota[pilihKota];
		myfile << "\nKota Tujuan :  ";
		myfile << chrDestinasi[pilihKota] << endl;
		
		break; //masuk ke fungsi list maskapai
    case 2 : 
		cout << endl << "Kota yang dipilih : Surabaya " << endl;
		chrDestinasi[pilihKota];
		hKota[pilihKota];
		myfile << "\nKota Tujuan :  ";
		myfile << chrDestinasi[pilihKota] << endl;
	
		break; //masuk ke fungsi list maskapai
    case 3 :
		cout << endl << "Kota yang dipilih : Malang " << endl;
		chrDestinasi[pilihKota];
		hKota[pilihKota];
		myfile << "\nKota Tujuan :  ";
		myfile << chrDestinasi[pilihKota] << endl;
	
		break; //masuk ke fungsi list maskapai
    case 4 : 
		cout << endl << "Kota yang dipilih : Pekanbaru " << endl;
		chrDestinasi[pilihKota];
		hKota[pilihKota];
		myfile << "\nKota Tujuan :  ";
		myfile << chrDestinasi[pilihKota] << endl;
		
		break; //masuk ke fungsi list maskapai
    case 5 : 
		cout << endl << "Kota yang dipilih : Bali " << endl;
		chrDestinasi[pilihKota];
		hKota[pilihKota];
		myfile << "\nKota Tujuan :  ";
		myfile << chrDestinasi[pilihKota] << endl;
		
		break; //masuk ke fungsi list maskapai
    }
}



int jumlahPenumpang(){
	char penumpang[0];
	bool repeat = true;
	while( repeat == true) {
	cout << "Masukkan Jumlah Penumpang : " ;
	cin >> penumpang ;
	myfile << "\nJumlah Penumpang : ";
	myfile << penumpang << endl;

	
	if(isdigit(penumpang[0])){
		intPenumpang = atoi(penumpang); 
		repeat = false;
	}else{
		system("cls");
		cout << "Silahkan masukkan jumlah penumpang dengan benar !" << endl ;
		repeat = true;
		
	}

	} // TUTUP While

}

void listMaskapai(){
	 
	for (int i=1; i <= 5; i++ ){
		
		cout <<i<<"."<< maskapai[i] << endl;
	}
	
}

void PilihMaskapai(){
	listMaskapai();
	
	
	cout << "Masukkan Maskapai yang ingin anda pilih ?" << endl ;
	cin >> pilihMas   ;
	switch(pilihMas){
		case 1 : 
 			cout << endl << "Berikut Biaya Tiket Garuda "<< endl;
			hMaskapai[pilihMas]; 
			myfile << "Maskapai Yang Anda Pilih : ";
			myfile << maskapai[pilihMas] <<endl;
			break;
		case 2 :
			cout << endl << "Berikut Biaya Tiket Batik Air"<<endl;
			hMaskapai[pilihMas];
			myfile << "Maskapai Yang Anda Pilih : ";
			myfile << maskapai[pilihMas] <<endl;
			break;
		case 3 :
			cout << endl << "Berikut Biaya Tiket Air Asia"<<endl;
			hMaskapai[pilihMas];
			myfile << "Maskapai Yang Anda Pilih : ";
			myfile << maskapai[pilihMas] <<endl;
			break;
		case 4 :
			cout << endl << "Berikut Biaya Tiket CitiLink"<<endl;
			hMaskapai[pilihMas];
			myfile << "Maskapai Yang Anda Pilih : ";
			myfile << maskapai[pilihMas] <<endl;
			break;
		case 5 :
			cout << endl << "Berikut Biaya Tiket Sriwijaya Air"<<endl;
			hMaskapai[pilihMas];
			myfile << "Maskapai Yang Anda Pilih : ";
			myfile << maskapai[pilihMas] <<endl;
			break;
	}
}		

int Harga(){
	int TotalJ,TotalS,TotalM,TotalP,TotalB;
	if(chrDestinasi[pilihKota] == "Jakarta" ){
		TotalJ = (hKota[pilihKota] + hMaskapai[pilihMas]) * intPenumpang;
		cout << "Harga tiket anda : Rp." ;
		cout << TotalJ << endl; 
		myfile << "Total Harga : ";
		myfile << TotalJ << endl; 
		cout << "Total tiket anda : " << intPenumpang << " orang";  
	}else if(chrDestinasi[pilihKota] == "Surabaya"){
		TotalS = (hKota[pilihKota] + hMaskapai[pilihMas]) * intPenumpang;
		cout << "Harga tiket anda : Rp." ;
		cout << TotalS << endl; 
		myfile << "Total Harga : ";
		myfile << TotalS << endl;
		cout << "Total tiket anda : " << intPenumpang << " orang";  
	}else if(chrDestinasi[pilihKota] == "Malang"){
		TotalM = (hKota[pilihKota] + hMaskapai[pilihMas]) * intPenumpang;
		cout << "Harga tiket anda : Rp." ;
		cout << TotalM << endl;
		myfile << "Total Harga : ";
		myfile << TotalM << endl; 
		cout << "Total tiket anda : " << intPenumpang << " orang";  			
	}else if(chrDestinasi[pilihKota] == "Pekanbaru"){
		TotalP = (hKota[pilihKota] + hMaskapai[pilihMas]) * intPenumpang;
		cout << "Harga tiket anda : Rp." ;
		cout <<  TotalP << endl; 
		myfile << "Total Harga : ";
		myfile << TotalP << endl;
		cout << "Total tiket anda : " << intPenumpang << " orang";  
	}else if(chrDestinasi[pilihKota] == "Bali"){
		TotalB = (hKota[pilihKota] + hMaskapai[pilihMas]) * intPenumpang;
		cout << "Harga tiket anda : Rp." ;
		cout << TotalB << endl;
		myfile << "Total Harga : ";
		myfile << TotalB << endl; 
		cout << "Total tiket anda : " << intPenumpang << " orang"; 
	}

}
		
		
	





