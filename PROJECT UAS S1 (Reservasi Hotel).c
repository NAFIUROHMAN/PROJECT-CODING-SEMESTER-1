#include <stdio.h>
#include <stdlib.h>

//ini struct untuk pengunjung bersama
struct identitas
{
    char nama[50];
    int nomer;
    int umur;
    int tlp;
};
//ini fungsi untuk struct pengunjung bersama
void daftar1()
{
      int jumlah, i;

    do {
        printf("--------------------------------------------------\n");
        printf("Kamar Bersama\n ");
        printf("--------------------------------------------------\n");
        printf("Masukan Jumlah Pengunjung : ");
        scanf("%d", &jumlah);
        system("cls");//<-ini adalah program untuk menutup program yang diatasnya
        if (jumlah >=4)
        {
            printf("Pengunjung terlalu banyak!\n");
        }
        }
    while (jumlah >4 || jumlah<1);

     struct identitas I[jumlah];

    for(i=1;i<=jumlah;i++)
    {
         printf("--------------------------------------------------\n");
         printf("Pengunjung Ke %d \n",i);
         printf("--------------------------------------------------\n");

         printf("Nama    : ");
         scanf(" %[^\n]s", &I[i-1].nama);

         printf("Umur    : ");
         scanf("%d", &I[i-1].umur);

         printf("No KTP  : ");
         scanf("%d", &I[i-1].nomer);

         printf("No tlpn : ");
         scanf(" %d", &I[i-1].tlp);
         printf("--------------------------------------------------\n");
        system("cls");
    }

    printf("---------------------------------------------\n");
    printf("Anda Memesan Kamar Untuk %d Orang\n",jumlah);
    printf("---------------------------------------------\n");

    for(i=0;i<jumlah;i++)
    {
       tampil(I[i]);
    }

}
//fungsi untuk menampulkan struct pengunjung bersama
void tampil(struct identitas I)
{
        printf("===================================================\n");
        printf("Atas Nama       : %s \n", I.nama);
        printf("Dengan Umur     : %d \n", I.umur);
        printf("Dengan No KTP   : %d \n", I.nomer);
        printf("No Tlpn         : %d \n", I.tlp);
        printf("===================================================\n");
}

//ini fungsi untuk memasukan satu pengunjung
void daftar2()
{
   char nama[50];
   int umur,nomer,tlp;

   system("cls");
   printf("Masukan identitas anda!\n");
   printf("===================================================\n");
   printf("Nama    : ");
   scanf(" %[^\n]s", &nama);

   printf("Umur    : ");
   scanf("%d", &umur);

   printf("No KTP  : ");
   scanf("%d", &nomer);

   printf("No tlpn : ");
   scanf(" %d", &tlp);

   system("cls");
   printf("===================================================\n");
   printf("Atas Nama      : %s \n", nama);
   printf("Dengan Umur    : %d \n", umur);
   printf("Dengan No KTP  : %d \n", nomer);
   printf("Dengan No tlpn : %d \n", tlp);
   printf("===================================================\n");
}
//ini adalah fungsi utama
int main()
{
    char kode1,kode2,kode3;
    int kamar,inap,totaldiskon1,biayaawal1,biaya1,diskon1,totaldiskon2,biayaawal2,biaya2,diskon2,totaldiskon3,biayaawal3,biaya3,diskon3,
        ulang,makan,makanan,banyakMakanan,totalmakanan,pesanmakan,ending,total_akhir,awal,makanlagi,
        tampilhotel,tampilmakan,tampilhotelmakan,pertama;

        system("color f0");//<--warna pada output
        //pemilihan kamar bersama yang akan dilanjutkan pada fungsi deklarasi

        awal:
        {
        printf("===================================================\n");
        printf("|       SELAMAT DATANG DIHOTEL BINTANG 10         |\n");
        printf("|        ----------HOTEL NAPIK----------          |\n");
        printf("===================================================\n");
        printf("|1. KAMAR BERSAMA (Max 4 Orang)                   |\n");
        printf("|2. KAMAR INDIVIDU                                |\n");
        printf("|3. BELI MAKANAN                                  |\n");
        printf("|0. KELUAR                                        |\n");
        printf("===================================================\n");

        printf("Pilih : ");
        scanf(" %d", &pertama);

        system("cls");
        switch (pertama)
        {
            case (1) : daftar1();
                        break;
            case (2) : daftar2();
                        break;
            case (3) : goto makan;
                        break;
            case (0) : printf("Terimakasih...\n\n");
                        break;
            default : printf("Nomer Yang Anda Masukan Tidak Tesedia!\n");
            goto awal;
            break;
        }

        }

    start:
        {

    printf("----------------------------------------------\n");
    printf("|                HOTEL NAPIK                 |\n");
    printf("----------------------------------------------\n");
    printf("==============================================\n");
    printf("|1. STANDART ROOM          : Rp. 300.000     |\n");
    printf("|2. SUPERIOR ROOM          : Rp. 700.000     |\n");
    printf("|3. DELUXE ROOM            : Rp. 1.000.000   |\n");
    printf("|Diskon 20 %% untuk pemesanan diatas 5 hari   |\n");
    printf("|Diskon 40 %% untuk pemesanan diatas 10 hari  |\n");
    printf("==============================================\n");
    printf("Pilih : ");
    scanf("%d",&kamar);

    system("cls");
    switch (kamar)
    {
                    system("cls");
                    do{
        case (1) :  printf("===============STANDART ROOM===============\n\n");
                    printf("      |-----------KAMAR A-----------|\n");
                    printf("      |       KAMAR STANDART        |\n");
                    printf("      | DENGAN BIAYA SEBESAR 300.000|\n");
                    printf("      |---------hotel napik---------|\n\n");

                    printf("      |-----------KAMAR B-----------|\n");
                    printf("      |        KAMAR STANDART        |\n");
                    printf("      | DENGAN BIAYA SEBESAR 300.000|\n");
                    printf("      |---------hotel napik---------|\n\n");

                    printf("      |-----------KAMAR C-----------|\n");
                    printf("      |       KAMAR STANDART        |\n");
                    printf("      | DENGAN BIAYA SEBESAR 300.000|\n");
                    printf("      |---------hotel napik---------|\n\n");

                    printf("      |-----------KAMAR D-----------|\n");
                    printf("      |       KAMAR STANDART        |\n");
                    printf("      | DENGAN BIAYA SEBESAR 300.000|\n");
                    printf("      |---------hotel napik---------|\n\n");

                    printf("      |-----------KAMAR E-----------|\n");
                    printf("      |       KAMAR STANDART        |\n");
                    printf("      | DENGAN BIAYA SEBESAR 300.000|\n");
                    printf("      |---------hotel napik---------|\n\n");

                    printf("================================================\n");

                    printf("Pilih : ");
                    scanf(" %c",&kode1);

                    //pembatas jika kode yang dimasukan tidak sesuai dan program tidak akan menampilkan
                    if (kode1=='A' || kode1=='B' || kode1=='C' || kode1=='D' || kode1=='E')
                    {
                        printf("Berapa Hari Kamu Akan Menginap : ");
                        scanf(" %d",&inap);
                    }

                    //diskon standart room

                    if (inap<=5)
                    {
                        diskon1=0;
                        totaldiskon1=0*300000;
                    }
                    else if (inap>5 && inap<=10)
                    {
                        diskon1=20;
                        totaldiskon1=0.20*300000;
                    }
                    else
                    {
                        diskon1=40;
                        totaldiskon1=0.40*300000;
                    }
                    biayaawal1=300000*inap;
                    biaya1=biayaawal1-totaldiskon1;

                    system("cls");
                    switch (kode1)
                    {
                        case ('A') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR STANDART ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (A)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 1\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal1);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon1);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya1);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                        goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('B') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR STANDART ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (B)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 1\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal1);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon1);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya1);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                        goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('C') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR STANDART ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (C)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 1\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal1);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon1);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya1);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                        goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('D') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR STANDART ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (D)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 1\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal1);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon1);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya1);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                        goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('E') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR STANDART ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (E)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 1\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal1);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon1);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya1);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                     goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        default : printf("MAAF KAMAR YANG KAMU MINTA SEDANG TIDAK TERSEDIA!!\n");
                                  break;
                    }
                    }while (kode1!='A' || kode1!='B' || kode1!='C' || kode1!='D' || kode1!='E');
                    break;

                    system("cls");
                    do{
         case (2) : printf("==============SUPERIROR ROOM==============\n\n");
                    printf("      |-----------KAMAR A-----------|\n");
                    printf("      |       KAMAR SUPERIOR        |\n");
                    printf("      | DENGAN BIAYA SEBESAR 700.000|\n");
                    printf("      |---------hotel napik---------|\n\n");

                    printf("      |-----------KAMAR B-----------|\n");
                    printf("      |       KAMAR SUPERIOR        |\n");
                    printf("      | DENGAN BIAYA SEBESAR 700.000|\n");
                    printf("      |---------hotel napik---------|\n\n");

                    printf("      |-----------KAMAR C-----------|\n");
                    printf("      |      KAMAR SUPERIOR         |\n");
                    printf("      | DENGAN BIAYA SEBESAR 700.000|\n");
                    printf("      |---------hotel napik---------|\n\n");

                    printf("      |-----------KAMAR D-----------|\n");
                    printf("      |       KAMAR SUPERIOR        |\n");
                    printf("      | DENGAN BIAYA SEBESAR 700.000|\n");
                    printf("      |---------hotel napik---------|\n\n");

                    printf("      |-----------KAMAR E-----------|\n");
                    printf("      |       KAMAR SUPERIOR        |\n");
                    printf("      | DENGAN BIAYA SEBESAR 700.000|\n");
                    printf("      |---------hotel napik---------|\n\n");

                    printf("================================================\n");

                    printf("Pilih : ");
                    scanf(" %c",&kode2);

                    //pembatas jika kode yang dimasukan tidak sesuai dan program tidak akan menampilkan
                    if (kode2=='A' || kode2=='B' || kode2=='C' || kode2=='D' || kode2=='E')
                    {
                        printf("Berapa Hari Kamu Akan Menginap : ");
                        scanf(" %d",&inap);
                    }

                    //diskon superior room
                     if (inap<=5)
                    {
                        diskon2=0;
                        totaldiskon2=0*700000;
                    }
                    else if (inap>5 && inap<=10)
                    {
                        diskon2=20;
                        totaldiskon2=0.20*700000;
                    }
                    else
                    {
                        diskon2=40;
                        totaldiskon2=0.40*700000;
                    }
                    biayaawal2=700000*inap;
                    biaya2=biayaawal2-totaldiskon2;

                    system("cls");
                    switch (kode2)
                    {
                        case ('A') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR SUPERIOR ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (A)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 2\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal2);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon2);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya2);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                        goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('B') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR SUPERIOR ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (B)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 2\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal2);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon2);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya2);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                        goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('C') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR SUPERIOR ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (C)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 2\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal2);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon2);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya2);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                        goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('D') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR SUPERIOR ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (D)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 2\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal2);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon2);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya2);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                        goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('E') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR SUPERIOR ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (E)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 2\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal2);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon2);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya2);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                        goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        default : printf("|MAAF KAMAR YANG KAMU MINTA SEDANG TIDAK TERSEDIA!!|\n");
                                  break;
                    }
                    }while (kode2!='A' || kode2!='B' || kode2!='C' || kode2!='D' || kode2!='E');
                    break;

                    system("cls");
                    do{
        case (3) :  printf("==============DELUXE ROOM==============\n\n");
                    printf("     |-----------KAMAR A------------|\n");
                    printf("     |        KAMAR DELUXE          |\n");
                    printf("     |DENGAN BIAYA SEBESAR 1.000.000|\n");
                    printf("     |---------hotel napik----------|\n\n");

                    printf("     |-----------KAMAR B------------|\n");
                    printf("     |        KAMAR DELUXE          |\n");
                    printf("     |DENGAN BIAYA SEBESAR 1.000.000|\n");
                    printf("     |---------hotel napik----------|\n\n");

                    printf("     |-----------KAMAR C------------|\n");
                    printf("     |        KAMAR DELUXE          |\n");
                    printf("     |DENGAN BIAYA SEBESAR 1.000.000|\n");
                    printf("     |---------hotel napik----------|\n\n");

                    printf("     |-----------KAMAR D------------|\n");
                    printf("     |        KAMAR DELUXE          |\n");
                    printf("     |DENGAN BIAYA SEBESAR 1.000.000|\n");
                    printf("     |---------hotel napik----------|\n\n");

                    printf("     |-----------KAMAR E------------|\n");
                    printf("     |        KAMAR DELUXE          |\n");
                    printf("     |DENGAN BIAYA SEBESAR 1.000.000|\n");
                    printf("     |---------hotel napik----------|\n\n");

                    printf("================================================\n");

                    printf("Pilih : ");
                    scanf(" %c",&kode3);

                    //pembatas jika kode yang dimasukan tidak sesuai dan program tidak akan menampilkan
                    if (kode3=='A' || kode3=='B' || kode3=='C' || kode3=='D' || kode3=='E')
                    {
                        printf("Berapa Hari Kamu Akan Menginap : ");
                        scanf(" %d",&inap);
                    }

                    //diskon deluxe room
                     if (inap<=5)
                    {
                        diskon3=0;
                        totaldiskon3=0*1000000;
                    }
                    else if (inap>5 && inap<=10)
                    {
                        diskon3=20;
                        totaldiskon3=0.20*1000000;
                    }
                    else
                    {
                        diskon3=40;
                        totaldiskon3=0.40*1000000;
                    }
                    biayaawal3=1000000*inap;
                    biaya3=biayaawal3-totaldiskon3;

                    system("cls");
                    switch (kode3)
                    {
                        case ('A') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR DELUXE ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (A)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 3\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal3);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon3);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya3);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                     goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('B') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR DELUXE ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (B)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 3\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal3);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon3);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya3);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                        goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('C') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR DELUXE ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (C)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 3\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal3);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon3);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya3);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                        goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('D') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR DELUXE ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (D)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 3\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal3);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon3);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya3);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                     goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;

                        case ('E') : printf("---------------hotel napik---------------\n");
                                     printf("|                                       |\n");
                                     printf("|KAMU MEMESAN KAMAR DELUXE ROOM\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN KODE KAMAR (E)\n");
                                     printf("|                                       |\n");
                                     printf("|KAMAR BERADA DILANTAI 3\n");
                                     printf("|                                       |\n");
                                     printf("|DENGAN BIAYA AWAL SEBESAR Rp.%d\n",biayaawal3);
                                     printf("|                                       |\n");
                                     printf("|DAN MENDAPAT DISKON SEBESAR %d %%\n",diskon3);
                                     printf("|                                       |\n");
                                     printf("|DENGAN TOTAL BIAYA SEBESAR Rp.%d\n",biaya3);
                                     printf("|                                       |\n");
                                     printf("========================================\n");
                                     printf("1 = IYA\n");
                                     printf("2 = TIDAK\n");
                                     printf("Apakah Kamu Ingin Memesan Makanan ? : ");
                                     scanf(" %d", &pesanmakan);
                                     if(pesanmakan == 1)
                                     goto makan;
                                     else
                                        goto tampilhotel;
                                     return 0;
                                     break;
                        default : printf("|MAAF KAMAR YANG KAMU MINTA SEDANG TIDAK TERSEDIA!!|\n");

                                  break;
                    }
                    }while (toupper(kode2!='A' || kode2!='B' || kode2!='C' || kode2!='D' || kode2!='E'));
                    break;

                default : printf("|MAAF PILIHANMU TIDAK TERSEDIA!!|\n");
                          goto start;
                          break;
    }

}

        totalmakanan=0;
        makan:
           {
                system("cls");
                printf("=================================================\n");
                printf("|1. Geprek Original            : Rp. 50.000     |\n");
                printf("|2. Nasi Goreng                : Rp. 55.000     |\n");
                printf("|3. Nasi Jagung Pedas          : Rp. 45.000     |\n");
                printf("|4. Mie Goreng Original        : Rp. 35.000     |\n");
                printf("|5. Nasi Telur Sambal Matah    : Rp. 50.000     |\n");
                printf("|6. Langsung ke slip total pembayaran           |\n");
                printf("=================================================\n");

                printf("Pilih : ");
                scanf("%d", &makanan);

                if (makanan == 1 || makanan == 2 || makanan == 3 || makanan == 4 || makanan == 5)
                {
                    printf("Berapa banyak pesananmu : ");
                    scanf("%d",&banyakMakanan);
                }



                switch (makanan)
                        {
                            case (1) : totalmakanan=50000*banyakMakanan;
                                       break;

                            case (2) : totalmakanan=55000*banyakMakanan;
                                       break;

                            case (3) : totalmakanan=45000*banyakMakanan;
                                       break;

                            case (4) : totalmakanan=35000*banyakMakanan;
                                       break;

                            case (5) : totalmakanan=50000*banyakMakanan;
                                       break;

                            case (6) : goto tampilhotel;
                                       break;

                            default : printf("MAAF NOMER YANG ANDA PILIH TIDAK TERSEDIA\n");
                                        printf("1 = IYA\n");
                                        printf("2 = TIDAK\n");
                                        printf("Apakah Anda Ingin Memilih Kembali ? : \n");
                                        scanf("%d", &makanlagi);
                                        if(makanlagi==1)
                                            goto makan;
                                        else
                                                system("cls");
                                                if (pertama==1 || pertama==2)
                                                {
                                                    totalmakanan=0;
                                                    goto tampilhotelmakan;
                                                }
                                                else (pertama==3);
                                                {
                                                printf("Terimaaksih...\n\n");
                                                    return 0;
                                                }
                                                return 0;

                if (pertama==1 || pertama==2)
                {
                    goto tampilhotelmakan;
                }
                else (pertama==3);
                {
                    goto tampillmakan;
                    return 0;
                }
                                        return 0;
                            break;
                        }
           }



            system("cls");
            tampillmakan :
            {
                printf("=================================================\n");
                printf("|                 HOTEL NAPIK                   |\n");
                printf("|        jl. Indonesia Raya No 17.08.45         |\n");
                printf("-------------------------------------------------\n");
                printf("|                                               |\n");
                printf("|Terimakasih Telah Memesan Makanan\n");
                printf("|                                               |\n");
                printf("|Pesanan Anda Akan Segera Disiapkan\n");
                printf("|                                               |\n");
                printf("|Total Pesanan Makanan Anda adalah : %d\n",totalmakanan);
                printf("|                                               |\n");
                printf("-------------------------------------------------\n\n");
                return 0;
            }
            system("cls");
            tampilhotel :
            {
                if (kamar==1)
                    {
                        printf("=================================================\n");
                        printf("|                 HOTEL NAPIK                   |\n");
                        printf("|        jl. Indonesia Raya No 17.08.45         |\n");
                        printf("-------------------------------------------------\n");
                        printf("|                                               |\n");
                        printf("|Biaya pemesanan hotel sebesar Rp. %d\n",biaya1);
                        printf("|                                               |\n");
                        printf("|Silahkan Bayar di Resepsionis\n");
                        printf("|                                               |\n");
                        printf("=================================================\n");
                    }
                    else if (kamar==2)
                    {
                        printf("=================================================\n");
                        printf("|                 HOTEL NAPIK                   |\n");
                        printf("|        jl. Indonesia Raya No 17.08.45         |\n");
                        printf("-------------------------------------------------\n");
                        printf("|                                               |\n");
                        printf("|Biaya pemesanan hotel sebesar Rp. %d\n",biaya2);
                        printf("|                                               |\n");
                        printf("|Silahkan Bayar di Resepsionis\n");
                        printf("|                                               |\n");
                        printf("=================================================\n");
                    }
                    else if (kamar==3)
                    {
                        printf("=================================================\n");
                        printf("|                 HOTEL NAPIK                   |\n");
                        printf("|        jl. Indonesia Raya No 17.08.45         |\n");
                        printf("-------------------------------------------------\n");
                        printf("|                                               |\n");
                        printf("|Biaya pemesanan hotel sebesar Rp. %d\n",biaya3);
                        printf("|                                               |\n");
                        printf("|Silahkan Bayar di Resepsionis\n");
                        printf("|                                               |\n");
                        printf("=================================================\n");

                    }
                    return 0;
            }

            system("cls");
            tampilhotelmakan :
            {
                if (kamar==1)
                    {
                        total_akhir=totalmakanan+biaya1;
                        printf("=================================================\n");
                        printf("|                 HOTEL NAPIK                   |\n");
                        printf("|        jl. Indonesia Raya No 17.08.45         |\n");
                        printf("-------------------------------------------------\n");
                        printf("|                                               |\n");
                        printf("|Biaya pemesanan hotel sebesar Rp. %d\n",biaya1);
                        printf("|                                               |\n");
                        printf("|Biaya pemesanan makanan sebesar Rp. %d \n",totalmakanan);
                        printf("|                                               |\n");
                        printf("|Total pembayaran anda sebesar Rp. %d \n",total_akhir);
                        printf("|                                               |\n");
                        printf("|Silahkan Bayar di Resepsionis...\n");
                        printf("|                                               |\n");
                        printf("=================================================\n");
                    }
                    else if (kamar==2)
                    {
                        total_akhir=totalmakanan+biaya2;
                        printf("=================================================\n");
                        printf("|                 HOTEL NAPIK                   |\n");
                        printf("|        jl. Indonesia Raya No 17.08.45         |\n");
                        printf("-------------------------------------------------\n");
                        printf("|                                               |\n");
                        printf("|Biaya pemesanan hotel sebesar Rp. %d\n",biaya2);
                        printf("|                                               |\n");
                        printf("|Biaya pemesanan makanan sebesar Rp. %d \n",totalmakanan);
                        printf("|                                               |\n");
                        printf("|Total pembayaran anda sebesar Rp. %d \n",total_akhir);
                        printf("|                                               |\n");
                        printf("|Silahkan Bayar di Resepsionis...\n");
                        printf("|                                               |\n");
                        printf("=================================================\n");
                    }
                    else if (kamar==3)
                    {
                        total_akhir=totalmakanan+biaya3;
                        printf("=================================================\n");
                        printf("|                 HOTEL NAPIK                   |\n");
                        printf("|        jl. Indonesia Raya No 17.08.45         |\n");
                        printf("-------------------------------------------------\n");
                        printf("|                                               |\n");
                        printf("|Biaya pemesanan hotel sebesar Rp. %d\n",biaya3);
                        printf("|                                               |\n");
                        printf("|Biaya pemesanan makanan sebesar Rp. %d \n",totalmakanan);
                        printf("|                                               |\n");
                        printf("|Total pembayaran anda sebesar Rp. %d \n",total_akhir);
                        printf("|                                               |\n");
                        printf("|Silahkan Bayar di Resepsionis...\n");
                        printf("|                                               |\n");
                        printf("=================================================\n");
                    }
            }


        return 0;
}
