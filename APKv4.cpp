#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()//YERI
{
string pil;
while(true)
{
    int saldo, persensedekah, persentabungan, persendarurat, perseninvestasi, sd, ps, pt, pd, pi;

    char jawab;
    do
    {
        int persensedekah, persentabungan, persendarurat, perseninvestasi;
        cout<<"\n=============================================\n";
        cout<<"|    Setting Persentase Rencana Keuangan    |\n";
        cout<<"=============================================\n";

        cout << "Persen Sedekah\t\t: "; cin >> persensedekah;
        cout << "Persen Tabungan\t\t: "; cin >> persentabungan;
        cout << "Persen Dana Darurat\t: "; cin >> persendarurat;
        cout << "Persen Investasi\t: "; cin >> perseninvestasi;
        system("cls");
        

        int jum;
        jum=persensedekah+persentabungan+persendarurat+perseninvestasi;

        ofstream tulis;
        tulis.open ("setting.txt", ios::app);
		tulis << persensedekah << endl << persentabungan << endl << persendarurat << endl << perseninvestasi << endl;
		tulis.close();
        cout << "SETTING PERSENTASE BERHASIL DISIMPAN!\n" << endl ;
        

        if (jum >0 && jum <=100) //FIKRI
        {   
            char pilih;
            do
            {
                

                int pil;
                int saldo;
                int pemasukan,pengeluaran,saldotambahan,tabungan,sedekah,darurat,investasi, sisasaldo, saldoakhir;

                ifstream baca ("setting.txt");
                baca >> saldo;


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
                    cout << "Jumlah saldo saat ini               : Rp." << saldo << endl;
                    cout<<"--------------------------------------------------\n";

                    ifstream baca ("setting.txt");
                    baca >> persensedekah;
                    baca >> persentabungan;
                    baca >> persendarurat;
                    baca >> perseninvestasi;

                    sedekah = saldo*persensedekah/100;
                    tabungan = saldo*persentabungan/100;
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

                else if(pil==3)
                {
                    cout<<endl;
                    cout<<"====================================================\n";
                    cout<<"|                   Terima Kasih                   |\n";
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
                cin>>pilih;
            }

            while(pilih=='Y'||pilih=='y');//FIKRI
            {
                cout<<endl;
                cout<<"====================================================\n";
                cout<<"| Terima Kasih Telah Menggunakan Layanan Bank Kami |\n";     
                cout<<"====================================================\n";
                exit(1);
                getche();
            }
        }

        else
        {
            cout<<"=====================================\n";
            cout<<"\n\nPERSENTASE RENCANA KEUANGAN TIDAK 100%!\nMASUKKAN ANGKA DENGAN JUMLAH 1-100!" << endl ;
            cout<<"=====================================\n";
        }
        cout<<"\n\nKembali ke Setting Menu Rencana Keuangan(Y/T)? : ";
        cin>>jawab;                 
    }

    while(jawab=='Y'||jawab=='y');//FIKRI
    {
        cout<<endl;
        cout<<"====================================================\n";
        cout<<"|                   Terima Kasih                   |\n";
        cout<<"====================================================\n";
        exit(1);
        getche();
    }

string ip;	
cout << "Setting Persentase belum di set. Atur sekarang!" ;
if (sd==saldo && ps==persensedekah && pt==persentabungan && pd==persendarurat && pi==perseninvestasi)
{
	cout << "\n" ;
	continue;

}
else
	break;	
}

return 0;
}
