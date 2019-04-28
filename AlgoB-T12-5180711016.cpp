#include <iostream>
#include<stdlib.h>
using namespace::std;
struct mahasiswa {
string nama,nim;
float nilai;
};
 mahasiswa pp[100];
mahasiswa tmp;
int jumlahdata,n,i;
char pil,pil2;
string mencari;
main()
{
    cout<<"---------------Selamat Datang Di Prototype penilaian-----------------";
    cout<<"\nMasukan jumlah data yang ingin di inputkan\t:";cin>>jumlahdata;
    for (int i=0;i<jumlahdata;i++)
        {cout<<"\nData ke -"<<i<<endl;
            cout<<"---------------------------";
            cout<<"\nMasukan Nama Anda\t:";cin>>pp[i].nama;;
            cout<<"Masukan NIM Anda\t:";cin>>pp[i].nim;;
            cout<<"Masukan Nilai Anda\t:";cin>>pp[i].nilai;cout<<"---------------------------";
        }
        cout<<"\nSorting Berdasarkan Nilai terkecil[y/Y] \nBerdasarkan Nim Terkecil[N/n]\nMasukan Pilihan Anda [y/n]\t:";cin>>pil;
    if (pil=='y'||pil=='Y'){

for(int i=0;i<jumlahdata;i++)
system("cls");
{
   for(int b=0;b<jumlahdata-1;b++)

   {
       if(pp[b].nilai>pp[b+1].nilai)
       {

           tmp.nilai=pp[b].nilai;
           pp[b].nilai=pp[b+1].nilai;
           pp[b+1].nilai=tmp.nilai;
           tmp.nim=pp[b].nim;
           pp[b].nim=pp[b+1].nim;
           pp[b+1].nim=tmp.nim;
           tmp.nama=pp[b].nama;
           pp[b].nama=pp[b+1].nama;
           pp[b+1].nama=tmp.nama;


       }}}

   }
   else if (pil=='N'||pil=='n')
    {for(int i=0;i<jumlahdata;i++)
system("cls");
{

        for(int b=0;b<jumlahdata-1;b++)

   {
       if(pp[b].nim>pp[b+1].nim)
       {

           tmp.nim=pp[b].nim;
           pp[b].nim=pp[b+1].nim;
           pp[b+1].nim=tmp.nim;
           tmp.nilai=pp[b].nilai;
           pp[b].nilai=pp[b+1].nilai;
           pp[b+1].nilai=tmp.nilai;
           tmp.nama=pp[b].nama;
           pp[b].nama=pp[b+1].nama;
           pp[b+1].nama=tmp.nama;


       }

   }}}

for(int b=0;b<jumlahdata;b++)

{

      cout<<"------------------------------";cout<<endl;
      cout<<"nama:"<<pp[b].nama;cout<<endl;
      cout<<"nim:"<<pp[b].nim;cout<<endl;
      cout<<"nilai:"<<pp[b].nilai;cout<<endl;
}
    cout<<"------Cari berdasarkan------ \n[1].Nama\n[2].NIM";
    cout<<"\nMasukan Pilihan Anda \t:";cin>>pil2;
    switch (pil2)
    { case '1' : cout<<"Masukan Nama Yang Anda Cari\t:";cin>>mencari;
                    n=0;
                     cout<<"-----------------------";cout<<endl;

                        for(int b=0;b<jumlahdata;b++)
                        {

                        if(pp[b].nama==mencari)

                        {  cout<<"data ke-";
                            n=1;
                        cout<<b<<endl;
                        }
                        if (n==0)

                {
                    cout<<"data tidak ditemukan";cout<<endl;
                }

                        };break;
    case '2' : cout<<"Masukan NIM Yang Anda Cari\t:";cin>>mencari;
                    n=0;
                     cout<<"-----------------------";cout<<endl;

                        for(int b=0;b<jumlahdata;b++)
                        {

                        if(pp[b].nim==mencari)

                        {cout<<"data ke-";
                            n=1;
                        cout<<b<<endl;
                        }
                        if (n==0)

                {
                    cout<<"data tidak ditemukan";cout<<endl;
                }


                        };break;
    default  : if (n==0)

                {
                    cout<<"data tidak ditemukan";cout<<endl;
                }

    }system("cls");
    cout<<"\nmengganti data";

cout<<"\nmasukkan nilai data yang ingin diubah=";

cin>>pp[i].nilai;

for(int f=0;f<jumlahdata;f++)

{

    if(pp[f].nilai==pp[i].nilai)

    {

        cout<<"\nmasukkan nilaibaru=";

        cin>>pp[f].nilai;

    }

}

cout<<"\ndata setelah diubah";

for(int h=0;h<jumlahdata;h++)

{

    cout<<"\n"<<"nilai ke-"<<h<<":"<<pp[h].nilai;

}
cout<<"\nmenghapus data";

cout<<"\nmasukkan data yang akan dihapus:";

cin>>pp[i].nim;

for(int j=0;j<jumlahdata;j++){

    if(pp[i].nim==pp[j].nim){

        for(int k=j;k<jumlahdata;k++){

            pp[k].nim=pp[k+1].nim;

        }

        jumlahdata-=1;

        break;

    }

}
cout<<"\ndata baru";

for(int p=0;p<jumlahdata;p++){

    cout<<"\n"<<pp[p].nim;

}



























}
