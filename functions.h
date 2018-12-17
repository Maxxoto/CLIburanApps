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
void pilihTiket(){
    
    cout << "Silahkan Pilih Kota Tujuan :" << endl ;

}
void listKota(){
    
    string listKota[3] = {"1.Jakarta","2.Surabaya","3.Malang"};
    for(int i=0; i < 3 ;i++ ){
        cout << listKota[i] << endl;
    }
}