#include <iostream.h>
#include <conio.h>
void main(){
	char Nama[20];
   int Pendapatan,Komisi,Total,Jasa;
   	clrscr();
      cout<<"Penjualan produk oleh salesaman \n";
      cout<<"         PEMBAYARAN KOMISI KEPADA SALESMAN        \n";
      cout<<"------------------------------------------------------"<<endl;
      cout<<" Masukkan Nama Salesmen : "; cin>>Nama;
      cout<<" Penjulan Salesmen : ";cin>>Pendapatan;
      cout<<"======================================================="<<endl;
      	if ("pendapatan>=0&&Pendapatan<=2000000"){

         	Jasa = 500000;
            Komisi=(0.1*Pendapatan);
            Total =Komisi+Jasa;
            }
         else if (Pendapatan<=2000000){
         	Jasa = 500000;
            Komisi=(0.15*Pendapatan);
            Total =Komisi+Jasa;
            }
         else if (Pendapatan<=5000000){
         	Jasa = 1000000;
            Komisi=(0.2*Pendapatan);
            Total =Komisi+Jasa;
            }
      else{
      cout<<" Tidak ada kode yang sesuai"; }
      cout<<" Uang Jasa Salesman : "<<Jasa<<endl;
      cout<<" Komisi Salesman :"<<Komisi<<endl;
      cout<<" Total Salesman :"<<Total<<endl;
getch();}




