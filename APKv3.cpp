#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

bool login()//ELIS
{
	string username, password, un, pw;
    cout<<"====================\n";
    cout<<"|       Masuk      |\n";
    cout<<"====================\n";
	cout << "Username: ";
	cin >> username;
	cout << "Password: ";
	cin >> password;
	
	ifstream read(username + ".txt");
	getline(read, un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int tabungan()//REZA
{
    char jawab;
    do//FIKRI
    {
        tabungan:
        int pil;
	    int pemasukan,pengeluaran,saldo,saldobank,saldotambahan,tabungan,sedekah,darurat,investasi;

        saldo=500000;
        saldotambahan=0;
        cout<<"===============================\n";
        cout<<"|      Project Akhir C++      |\n";
        cout<<"===============================\n\n";
		cout<<"===============================\n";
        cout<<"|         MENU UTAMA          |\n";
        cout<<"===============================\n";
        cout<<"| 1. Saldo                    |\n";
        cout<<"| 2. Rencana Keuangan         |\n";
        cout<<"| 3. Keluar                   |\n";
        cout<<"===============================\n";
        cout<<"Pilih Menu 1/2/3: ";
        cin>>pil;

        if(pil==1)
        {
        	system("cls");
        	cout<<"================\n";
         	cout<<"|  Menu Saldo  |\n";
         	cout<<"================\n";
         	cout << "Pemasukan selama 30 hari  : Rp.";
		 	cin >> pemasukan ;
		 	cout << "Pengeluaran untuk 30 hari : Rp.";
		 	cin >> pengeluaran ;
		 	saldotambahan = pemasukan - pengeluaran;
		 	cout << "Saldo Tambahan            : Rp." << saldotambahan << endl << endl ;
		 	saldo = saldo + saldotambahan;
		 	cout << "Saldo Akhir               : Rp."<< saldo << endl;
         	cout<<"---------------------------------------\n";
  		}

        else if(pil==2)
        {
            system("cls");
            cout<<"=====================================\n";
            cout<<"|       Menu Rencana Keuangan       |\n";
            cout<<"=====================================\n";
            cout << "Jumlah saldo saat ini               : Rp."<<saldo<<endl;
            cout << "Saldo tambahan selama bulan ini     : Rp."  << saldotambahan << endl;
            cout<<"--------------------------------------------------\n";

            cout<<"\n=====================================\n";
            cout<<"|    Persentase Rencana Keuangan    |\n";
            cout<<"=====================================\n";

            int persensedekah, persentabungan, persendarurat, perseninvestasi;
	        cout << "Persen Sedekah\t\t: "; cin >> persensedekah;
            cout << "Persen Tabungan\t\t: "; cin >> persentabungan;
	        cout << "Persen Dana Darurat\t: "; cin >> persendarurat;
            cout << "Persen Investasi\t: "; cin >> perseninvestasi;

            int jum;
	        jum=persensedekah+persentabungan+persendarurat+perseninvestasi;
            if (jum >0 && jum <= 100)
	        {
		        sedekah = saldo*persensedekah/100;
			    tabungan = saldo*persensedekah/100;
			    darurat = saldo*persendarurat/100;
			    investasi = saldo*perseninvestasi/100;

			    cout<<"\n=======================================\n";
                cout<<"|        Rencana Keuangan Anda        |\n";
                cout<<"=======================================\n";
			    cout << "1. Sedekah sebesar \t: Rp."<< sedekah << endl;
			    cout << "2. Tabungan sebesar \t: Rp."<< tabungan << endl;
			    cout << "3. Dana Darurat sebesar : Rp."<< darurat << endl;
			    cout << "4. Investasi sebesar \t: Rp."<< investasi << endl;
            }
            else
	        {
		        cout << "\n\nPERSENTASE RENCANA KEUANGAN <100%!\nMASUKKAN ANGKA DENGAN JUMLAH KESELURUHAN ADALAH 100!\n" << endl ;
                goto tabungan;
            }
        }

        else if(pil==3)
        {
            cout<<endl;
            cout<<"====================================================\n";
            cout<<"  |\t\t Terima Kasih \t\t\t  |\n";
            cout<<"====================================================\n";
            exit(1);
            getche();
     	}

        else
        {
            cout<<endl<<endl;
            cout<<"=====================================\n";
   			cout<<"| Menu yang anda inputkan tidak ada |\n";
            cout<<"| Mohon pilih menu yang tersedia    |\n";
            cout<<"=====================================\n\n";
        }
        cout<<"\n\nKembali ke Menu Utama(Y/T)? : ";
        cin>>jawab;
    }
        while(jawab=='Y'||jawab=='y');//FIKRI
        cout<<endl;
        cout<<"====================================================\n";
        cout<<"| Terima Kasih Telah Menggunakan Layanan Bank Kami |\n";     
        cout<<"====================================================\n";
        exit(1);
        getche();
}

int main()//YERI
{
    int menu;
	menu:
    char jawab;
	cout<<"====================\n";
    cout<<"|  Selamat Datang  |\n";
    cout<<"====================\n";
	cout<< "     [1] Daftar\n     [2] Masuk\n";
	cout<< "--------------------\n";
    cout<<"Masukkan pilihan  : "; cin>> menu;
    system("cls");
	if (menu == 1)//NENDEN
	{
		string username, password;
        cout<<"====================\n";
        cout<<"|      Daftar      |\n";
        cout<<"====================\n";
		cout << "Masukkan username : "; cin >> username;
		cout << "Masukkan password : "; cin >> password;
        system("cls");

		ofstream file;
		file.open (username + ".txt", ios::app);
		file << username << endl << password;
		file.close();
        cout << "AKUN BERHASIL DIBUAT!\n" << endl ;
		main();
	}

	else if (menu == 2)//YERRI
	{
		bool akun = login();
		if (!akun)
		{
            system("cls");
			cout << "GAGAL Masuk!\n";
			goto menu;
		}

		else
		{
            system("cls");
			cout << "BERHASIL Masuk!\n" << endl;
            tabungan();
		}
	}

	else
	{
		cout << "Angka yang anda masukkan salah!" << endl ;
		goto menu;
	}
}