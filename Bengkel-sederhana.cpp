#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//pasha nur mukarrom yusuf
//11121020

int main(){
	
	char menu,menuList;
	int kdb,harga,jumlah,total,bayar;
	string namabarang;
	system("Color 04");
	
	
	menu:
	cout<<"	==========================================\n";
	cout<<"	=============  Benerin Bang  =============\n";
	cout<<"	==========================================\n\n";		
		cout<<"	L.	List Spearpart\n";
		cout<<"	P.	Pembelian Spearpart\n";
		cout<<"	E.	Keluar Aplikasi\n";
		cout<<"\n	Pilih Menu untuk Melanjutkan : ";cin>>menu;
			
		if(menu=='L'||menu=='l')
      		{
      		    system("cls");
				goto List;
      		    
            }
            
        else if(menu=='P'||menu=='p')
      		{
      		    system("cls");
				goto pembelian;
      		    
            }
        
        else if(menu=='E'||menu=='e')
      		{
      		    system("cls");
				goto exit;
      		    
            }
      	else
      		{
      		    cout<<"	Input masukan salah, silahkan ulangi!";
      		    getch();
                system("cls");
                goto menu;
            }
		
		

		
	
	List:
	cout<<"	==========================================\n";
	cout<<"	=============  Benerin Bang  =============\n";
	cout<<"	==========================================\n\n";
	
	cout<<"Kode Barang		Nama Barang		Harga	 \n\n";
	
	cout<<"1.			Oli Repsol		50.000	 \n";
	cout<<"2.			Oli Mippon		40.000	 \n";
	cout<<"3.			Oli MP 7		35.000	 \n";
	cout<<"4.			Bearing Motor		60.000	 \n";
	cout<<"5.			Bearing Mobil		70.000	 \n";
	cout<<"6.			Aki Motor		120.000	 \n";
	cout<<"7.			Aki Mobil		150.000	 \n";

	cout<<"\n Kembali Ke Menu Y/N : ";cin>>menuList;
	if (menuList=='Y'||menuList=='y'){
                system("cls");
                goto menu;
	}else{
		system("cls");
		goto List;
	}
	
	
	pembelian:
		cout<<"\tMasukan Kode Barang : ";cin>>kdb;
		
		if(kdb==1){
			harga = 50000;
			namabarang = "Oli Repsol";
		}else if(kdb==2){
			harga = 40000;
			namabarang = "Oli Mippon";
		}else if(kdb==3){
			harga = 35000;
			namabarang = "Oli MP 7";
		}else if(kdb==4){
			harga = 60000;
			namabarang = "Bearing Motor";
		}else if(kdb==5){
			harga = 70000;
			namabarang = "Bearing Mobil";
		}else if(kdb==6){
			harga = 120000;
			namabarang = "Aki Motor";
		}else if(kdb==7){
			harga = 150000;
			namabarang = "Aki Mobil";
		}else{
			cout<<"	Input masukan salah, silahkan ulangi!";
		
			namabarang = "Tidak Terdaftar";
			harga = 0;
		}
		
		cout<<"\n\tNama Barang  : "<<namabarang<<endl; 
		cout<<"\tHarga Barang : "<<harga<<endl; 
		cout<<"\tJumlah Yang akan Di beli : ";cin>>jumlah;cout;
		
		//rumus menghitung jumlah 
		total= jumlah * harga;
		
		cout<<"\tTotal Harga  : "<<total<<endl;
		cout<<"\tBayar        : ";cin>>bayar;cout;
		if(bayar> total){
			total =  bayar - total ; 
			cout<<"\tKembalian    : "<<total;
		}else{
			cout<<"\t Transaksi Gagal    : ";
		}
		
		
		cout<<"\nTerimakasih Telah Menggunakan Aplikasi Ini...";
		getch();
   		system("cls");
   		goto menu;
		
	exit:
		cout<<"Terimakasih Telah Menggunakan Aplikasi Ini...";
		getch();
    	return 0;
	
	
	
}