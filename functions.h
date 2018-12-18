#include <iostream>
#include <string>

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

	cout << "Nama Lengkap : " << endl;
	cout << "No Telp/HP :" << endl;	
}
void pilihTiket(){
    
    cout << "Silahkan Pilih Kota Tujuan :" << endl ;

}

void listKota(){
    
    string listKota[5] = {"1.Jakarta","2.Surabaya","3.Malang","4.Pekanbaru","5.Bali"};
    for(int i=0; i < 4 ;i++ ){
        cout << listKota[i] << endl;
    }
}

int listMaskapai(){
	string listMaskapai[10] = {"1.Garuda Indonesia","2.Air Asia","3.Citilink","4.Batik Air"} ;
	for(int i=0; i < 3 ; i++){
		cout << listMaskapai[i] << endl; 
	}
}