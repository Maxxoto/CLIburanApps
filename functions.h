#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>

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

void listKota(){

    string listKota[5] = {"1.Jakarta","2.Surabaya","3.Malang","4.Pekanbaru","5.Bali"};
    for(int i=0; i < 4 ;i++ ){
        cout << listKota[i] << endl;
    }
}

void pilihTiket(){
  cout << "Silahkan Pilih Kota Tujuan :" << endl ;
	listKota();
	int pilih;
	cin >> pilih;
    switch (pilih){
    case 1 :
		cout << endl << "Kota yang dipilih : Jakarta " << endl ;
		break; //masuk ke fungsi list maskapai
    case 2 : 
		cout << endl << "Kota yang dipilih : Surabaya " << endl;
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


/* int listMaskapai(){
	string listMaskapai[10] = {"1.Garuda Indonesia","2.Air Asia","3.Citilink","4.Batik Air"} ;
	for(int i=0; i < 3 ; i++){
		cout << listMaskapai[i] << endl;
	}
}
*/

/* int harga(){
    int hargagaruda=40000,hargaairasia=250000,hargacitilink=225000,hargabatik=200000;
    if (hargagaruda<)


} */

