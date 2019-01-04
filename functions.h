#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>

char chrDestinasi[100];
using namespace std;

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
    string nama,telp,email;
   getline(cin,nama);
   getline(cin,telp);
   getline(cin,email);

	cout << "Nama Lengkap : " <<nama<< endl;
	cout << "No Telp/HP :" << telp<<endl;
	cout << "Email : "<<email<<endl;
}

void kotaAsal() {
	char strkotaAsal[0];
	bool repeat = true;
	while(repeat == true){
	cout << "Masukkan Kota Asal : " ;
	cin >> strkotaAsal;
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
	int pilih;
	cin >> pilih;
    switch (pilih){
    case 1 :
		cout << endl << "Kota yang dipilih : Jakarta " << endl ;
		chrDestinasi[100] = 'Jakarta';
		break; //masuk ke fungsi list maskapai
    case 2 : 
		cout << endl << "Kota yang dipilih : Surabaya " << endl;
		chrDestinasi[100] = 'Surabaya';
		break; //masuk ke fungsi list maskapai
    case 3 :
		cout << endl << "Kota yang dipilih : Malang " << endl;
		break; //masuk ke fungsi list maskapai
    case 4 : 
		cout << endl << "Kota yang dipilih : Pekanbaru " << endl;
		break; //masuk ke fungsi list maskapai
    case 5 : 
		cout << endl << "Kota yang dipilih : Bali " << endl;
		break; //masuk ke fungsi list maskapai
    }
}



int jumlahPenumpang(){
	char penumpang[0];
	int intPenumpang;
	bool repeat = true;
	while( repeat == true) {
	cout << "Masukkan Jumlah Penumpang : " ;
	cin >> penumpang ;
	
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
	string maskapai [5] ={"Garuda","Batik Air","Air Asia","Citilink","Sriwijaya Air"}; 
	for (int i=0; i < 5; i++ ){
		cout << maskapai[i];
	}
}

void PilihMaskapai(){
	int pilih;
	listMaskapai();

	switch(pilih){
		case 1 : 
 			cout << endl << " Anda Memilih Garuda "<< endl;
			break;
		case 2 :
			cout << endl << " Anda Memilih Batik Air"<<endl;
			break;
		case 3 :
			cout << endl << " Anda Memiih Air Asia"<<endl;
			break;
		case 4 :
			cout << endl << " Anda Memilih CitiLink"<<endl;
			break;
		case 5 :
			cout << endl <<" Anda Memilih Sriwijaya Air"<<endl;
			break;
	}
}		

int Harga(){
	int jakarta,surabaya,malang,pekanbaru,bali;
	jakarta = 450000;
	surabaya = 400000;
	if(chrDestinasi[100] == 'Jakarta'){
		cout << jakarta ;
	}else if(chrDestinasi[100] == 'Surabaya'){
		cout << surabaya;
	}

}
		
		
	





