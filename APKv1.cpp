#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

	char mainMenu();
    void BuatAkun();
    char MENU();
	class bank
	{
    int saldo=1000000;
    int saldotambahan=0;
    public :
    void profile(void); 
    void rencanakeuangan(void); 
    void login(void);
	}; 

int main()
{
    char pilihan;
    bank account;
    while (pilihan != 'q' || pilihan != 'Q')
    {
        pilihan = mainMenu();
        if (pilihan == 'q' || pilihan == 'Q'){
         cout << "Terima kasih";   break;}
        switch (pilihan)
        {
        case 'l':
        case 'L':
            account.login();
            break;
        case 'c':
        case 'C':
            BuatAkun();
            break;
        default:
            cout << "Invalid pilihan!" << endl;
        }
    }
    return 0;
}
char mainMenu() // Function to display the main menu, not banking menu
{
    char pilihan;
    cout << "********** MENU UTAMA ********** " << endl << endl;
    cout << "l(L) -> Login to Banking Menu" << endl;
    cout << "c -> Create New Account" << endl;
    cout << "q -> Quit the Program" << endl;
    cout << "Enter your pilihan:" << endl;
    cin >> pilihan;
    return pilihan;

}
void BuatAkun() // Takes and stores users login information, username and password
{
   string username;
   string password;
   cout << "Buat Akun Baru" << endl;
   cout << "Please create a username" << endl;
   cin >> username;
   cout << "Please create a password" << endl;
   cin >> password;
   ofstream createaccount;
   createaccount.open("akun.txt", ios::app); // Will store the users information.
   createaccount << username << " " << password << endl;
   createaccount.close();
   cout << "Account created!" << endl;

}
void bank :: login(void)
{
   string username;
   string password;
   char pilihan;
   bank decision;
   ifstream savedaccount;
   savedaccount.open("akun.txt"); 
   cout << "Enter your username:" << endl;
   cin >> username;
   cout << "Enter your password:" << endl;
   cin >> password;
   string username2, password2;
   savedaccount >> username2 >> password2;
   savedaccount.close();
   if (username != username2 || password != password2)
    cout << "Incorrect login! Create new account or try again." << endl;
    while(username == username2 && password == password2)
    {
        pilihan = MENU(); 
        if (pilihan == 'q' || pilihan =='Q') break;
        switch (pilihan){


case '1':
    decision.profile();
    break;
case '2':
    decision.rencanakeuangan();
    break;
default:
    cout << "Invalid pilihan!" << endl;

        }
}
}
char MENU()
{
    char pilihan;
    cout<<"===============================\n";
    cout<<"|        Project akhir C++    |\n";
    cout<<"===============================\n\n";
	cout<<"===============================\n";
    cout<<"|          MENU UTAMA         |\n";
    cout<<"===============================\n";
	cout<<"| 1. saldo                    |\n";
    cout<<"| 2. Rencana keuangan         |\n";
    cout<<"| 3. keluar                   |\n";
    cout<<"===============================\n";
    cout<<"Pilih Menu 1/2/3/: ";;
    cin >> pilihan;
    return pilihan;
    }
void bank :: profile(void)
    {
	int pemasukan,pengeluaran,saldotambahan;
    cout<<"===================\n";
    cout<<"|  Rincian pemasukandan pengeluaran  |\n";
    cout<<"===================\n\n\n";
    cout << "Saldo anda adalah : " <<saldo <<endl;
    cout << "Pemasukan selama 30 hari : ";
	cin >> pemasukan ;
	cout << "pengeluaran unutk 30 hari : ";
	cin >> pengeluaran ;
	cout<<"===================\n";
    cout<<"| menu saldo  |\n";
    cout<<"===================\n\n\n";
	saldotambahan = pemasukan - pengeluaran;
	saldo = saldo + saldotambahan;
	cout << "Saldo tambahan adalah : " <<saldotambahan <<endl;
	cout << "saldo akhir : "<< saldo << endl;
    cout<<endl;
    cout<<"---------------------------------------\n";
    }
void bank :: rencanakeuangan(void)
    {
	int infaq,tabungan,emergency,investasi;
    cout<<"=================\n";
    cout<<"|Menu Rencana Keuangan|\n";
    cout<<"=================\n";
    cout<<"jumlah saldo saat ini :Rp."<<saldo<<endl;
    cout << "saldo tambahan selama bulan ini : "  << saldotambahan << endl;
    cout<<"----------------------------------\n";
	infaq = saldo * 20/100;
	tabungan = saldo*30/100;
	emergency = saldo*30/100;
	investasi = saldo*20/100;
	cout << "Rencana Keuangan anda adakah : " << endl; 
	cout << "1. infaq sebesar \t:"<< infaq << endl;
	cout << "2. Tabungan sebesar \t:"<< tabungan << endl;
	cout << "3. Emergency sebesar \t:"<< emergency << endl;
	cout << "4. investasi sebesar \t:"<< investasi << endl;
    }

