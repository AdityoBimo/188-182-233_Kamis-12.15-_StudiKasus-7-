#include <iostream>
using namespace std;

class NilaiMahasiswa{	
	private:
		string nama[100], prodi[100];
		long long int nim[100], tlpn[100];
		int jumlahmhs, pilihan;
	public:
		void input(){
			cout<<endl;
			cout<<endl;
			cout<<"+============================================+"<<endl;
			cout<<"|            Input Data mahasiswa            |"<<endl;
			cout<<"+============================================+"<<endl;
			
			for(int i=0;i<jumlahmhs;i++){
				
				cout<<"| masukkan nim mahasiswa ke "<<i+1<<nama[i]<<" : ";
				cin>>nim[i];
				cin.ignore();
				cout<<"| Masukkan nama mahasiswa ke "<<i+1<<" : ";
				getline(cin,nama[i]);
				cout<<"| Masukkan prodi mahasiswa ke "<<i+1<<" : ";
				getline(cin,prodi[i]);
				cout<<"| Masukkan tlpn mahasiswa ke "<<i+1<<" : ";
				cin>>tlpn[i];
				cin.ignore();
				cout<<"========================================="<<endl;
		}
		cout<<"Input berhasil boss"<<endl;
		cout<<"=============================================="<<endl;
	}
	
	void dataNilai(){
		cout<<endl;
		cout<<endl;
		cout<<"+=================================+"<<endl;
		cout<<"|          DATA MAHASISWA         |"<<endl;
		cout<<"+=================================+"<<endl;
		for (int i=0;i<jumlahmhs;i++){
		cout<<"+=================================+"<<endl;
				cout<<"| Nim                     : "<<nim[i]<<endl;
				cout<<"| Nama                    : "<<nama[i]<<endl;
				cout<<"| Prodi                   : "<<prodi[i]<<endl;
				cout<<"| No Tlpn                 : "<<tlpn[i]<<endl;
		}
		cout<<"+=================================+"<<endl;
	}
	
	void asc(){
    for(int i=0; i<jumlahmhs- 1;i++) {
        for(int j=0;j<jumlahmhs-i-1;j++) {
            if(nim[j] > nim[j + 1]) {
                long int tempNim = nim[j];
                nim[j] = nim[j + 1];
                nim[j + 1] = tempNim;

                string tempNama = nama[j];
                nama[j] = nama[j + 1];
                nama[j + 1] = tempNama;

                string tempProdi = prodi[j];
                prodi[j] = prodi[j + 1];
                prodi[j + 1] = tempProdi;

                long int tempTlpn = tlpn[j];
                tlpn[j] = tlpn[j + 1];
                tlpn[j + 1] = tempTlpn;
            }
        }
    }

}

	void descen(){
		for(int i=0; i<jumlahmhs- 1;i++) {
        for(int j=0;j<jumlahmhs-i-1;j++) {
            if(nim[j] < nim[j + 1]) {
                long int tempNim = nim[j];
                nim[j] = nim[j + 1];
                nim[j + 1] = tempNim;

                string tempNama = nama[j];
                nama[j] = nama[j + 1];
                nama[j + 1] = tempNama;

                string tempProdi = prodi[j];
                prodi[j] = prodi[j + 1];
                prodi[j + 1] = tempProdi;

                long int tempTlpn = tlpn[j];
                tlpn[j] = tlpn[j + 1];
                tlpn[j + 1] = tempTlpn;
            }
        }
	}
}

void cariBerdasarkanID(){
    long int cariNim;
    bool ditemukan = false;

    cout<<"\n+=======================================+\n";
    cout<<"|       Cari Mahasiswa Berdasarkan NIM    |\n";
    cout<<"+=======================================+\n";
    cout<<"Masukkan NIM yang ingin dicari: ";
    cin>>cariNim;

    for(int i = 0; i < jumlahmhs; i++){
        if(nim[i] == cariNim){
            cout<<"\nData ditemukan:\n";
            cout<<"+=================================+\n";
            cout<<"| Nim    : " <<nim[i]<<endl;
            cout<<"| Nama   : " <<nama[i]<<endl;
            cout<<"| Prodi  : " <<prodi[i]<<endl;
            cout<<"| Tlpn   : " <<tlpn[i]<<endl;
            cout<<"+=================================+\n";
            ditemukan = true;
            break;
        }
    }

    if(!ditemukan){
        cout << "Data dengan ID " << cariNim << " tidak ditemukan.\n";
    }
}	
	void Menu(){
			do{
			cout<<endl;
			cout<<endl;
			cout<<"+=======================================+"<<endl;
			cout<<"|                  Menu                 |"<<endl;
			cout<<"+=======================================+"<<endl;
			cout<<"| 1. Input Mahasiswa\n| 2. Tampilkan Data\n| 3. Short ASC\n| 4. Short DESC\n| 5. Cari berdasarkan ID\n| 6. Keluar\n";
			cout<<"+========================================+"<<endl;
			cout<<"| Masukkan Pilihan: ";
			cin>>pilihan;
			
			if(pilihan==1){
				cout<<"|"<<endl;
				cout<<"| Masukkan jumlah mahasiswa: ";
				cin>>jumlahmhs;
				 input();
			}
			else if(pilihan==2){
				dataNilai();
			}
			else if(pilihan==3){
				asc();
				dataNilai();
			}else if(pilihan == 4){
				descen();
				dataNilai();				
			}else if(pilihan == 5){
				cariBerdasarkanID();
			}
		}while(pilihan !=6);
		}
	
	

};

int main(){
	NilaiMahasiswa x;
	x.Menu();
	return 0;
}
