//F
#include <iostream>
using namespace std;

int main()//F
{
    char jawab;//F
    do
    {
        //E
        system("cls");//untuk membersihkan tampilan pada cli supaya bersih
        //tipe data int 4 byte, double 8 byte jadi lebih banyak masukan memakai point koma
	    double pemasukan,pengeluaran,saldo,tabungan,sedekah,darurat,investasi;
        
        cout<<"=========================================\n";
        cout<<"|           Project Akhir C++           |\n";
        cout<<"|  APK (Aplikasi Perencanaan Keuangan)  |\n";
        cout<<"=========================================\n\n";

        cout << "Pemasukan   : Rp.";
		cin >> pemasukan ;
		cout << "Pengeluaran : Rp.";
		cin >> pengeluaran ;
		saldo = pemasukan - pengeluaran;

        system("cls");
        cout<<"=====================================\n";
        cout<<"|          Rencana Keuangan         |\n";
        cout<<"=====================================\n";
        cout << "Jumlah saldo saat ini   : Rp."<< saldo << endl;
        cout<<"-------------------------------------\n";

        //F
        persentase:
            cout<<"\n=====================================\n";
            cout<<"|    Persentase Rencana Keuangan    |\n";
            cout<<"=====================================\n";

            int persensedekah, persentabungan, persendarurat, perseninvestasi;
	        cout << "Persen Sedekah\t\t: "; cin >> persensedekah;
            cout << "Persen Tabungan\t\t: "; cin >> persentabungan;
	        cout << "Persen Dana Darurat\t: "; cin >> persendarurat;
            cout << "Persen Investasi\t: "; cin >> perseninvestasi;

            //Y
	        int jum=persensedekah+persentabungan+persendarurat+perseninvestasi;
            if (jum >0 && jum <= 100)
            {
                cout<<"\n=====================================\n";
                cout<<"|       Rencana Keuangan Anda       |\n";
                cout<<"=====================================\n";
                sedekah = saldo*persensedekah/100;
			    tabungan = saldo*persentabungan/100;
			    darurat = saldo*persendarurat/100;
			    investasi = saldo*perseninvestasi/100;

                cout << "Jumlah saldo saat ini   : Rp."<< saldo << endl;
                cout<<"-------------------------------------\n";
			    cout << "1. Sedekah sebesar \t: Rp." << sedekah << endl;
			    cout << "2. Tabungan sebesar \t: Rp." << tabungan << endl;
			    cout << "3. Dana Darurat sebesar : Rp." << darurat << endl;
			    cout << "4. Investasi sebesar \t: Rp." << investasi << endl;
            }
            else
            {
                system("cls");
                cout << "\n\nPERSENTASE RENCANA KEUANGAN TIDAK VALID!\nMASUKKAN ANGKA PERSENTASE DENGAN JUMLAH KESELURUHAN 1-100!" << endl ;
                goto persentase;
            }

        //F
        cout<<"\n\nKembali ke Menu Utama(Y/T)? : ";
        cin>>jawab;
    }
    while(jawab=='Y'||jawab=='y');//FIKRI
    cout<<endl;
    cout<<"=====================================================\n";
    cout<<"|  Terima Kasih Telah Menggunakan Layanan APK Kami  |\n";     
    cout<<"=====================================================\n";
    exit(0);
return 0;
}