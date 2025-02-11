#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
// STRUCTLAR /UNiONLAR/ENUMLAR
    // structlar çok fazla bellek harcar
    //unionlar structlar kadar bellek harcamaz.tüm degiskenlere aynı anda ulasmak istemiyorsanız union kullanabilirsiniz

/*
    //STRUCTLAR
    //Class yapilarina benzeyen bir sistemdir

        // Bir struct tanimla
     struct PersonelBilgisi
     {
         int yas;
         int maas;
         char isim[30];
         char cinsiyet[6];
     };
    // simdi PersonelBilgisi icinde bir degisken tanımla
    struct PersonelBilgisi Personel1;
    // struct ta Personel1isim='Hsb' diye yazarsak hata aliriz stringlerde sistem bunu kabul etmiyor
    //strcpy kullanmalıyız bunyn icin de string.h kutuphanesini kullanmalıyız
    strcpy(Personel1.isim,"hasanselmanbicer");
    strcpy(Personel1.cinsiyet,"Erkek");
    // int lerde direk atama yapabiliriz
    Personel1.yas=30;
    Personel1.maas=3000;

        //Simdi structı yazdır

    printf("\n\nPersonel adi: %s  \nPersonel yasi: %d \nPersonel maasi : %d \nPersonel cinsiyeti: %s \n   ", Personel1.isim,Personel1.yas,Personel1.maas,Personel1.cinsiyet);

        //2. secenek olarak su sekilde de tanımlama yapilabilir ama sirasi karistirilmamlidir

    struct PersonelBilgisi Personel2 = {30,3000,"alitalhabicer","Erkek"};
    printf("\n\nPersonel adi: %s  \nPersonel yasi: %d \nPersonel maasi : %d \nPersonel cinsiyeti: %s \n   ", Personel2.isim,Personel2.yas,Personel2.maas,Personel2.cinsiyet);

        //personellerin kopyalarını uretebiliriz
    struct PersonelBilgisi Personel3;
    Personel3 = Personel2;
    printf("\n\nPersonel adi: %s  \nPersonel yasi: %d \n Personel maasi : %d \n Personel cinsiyeti: %s \n   ", Personel3.isim,Personel3.yas,Personel3.maas,Personel3.cinsiyet);

*/


/*
        //unionlarda sadece bir veri saklanır en son hangi veri girildiyse sadece onun doğru olma olasılığı vardır.
    //bir union tanımla
    union Veri {
    int i;
    float f;
    char str[20];
};
    //uniona bir degisken tanımla yazdır ve nasıl calıstıgını anla
    union Veri veri;

    veri.i = 10;
    veri.f = 220.5;
    strcpy(veri.str, "C Programlama Kursu");

    printf("Verinin buyuklugu : %d\n", sizeof(veri));
    printf("veri.i : %d\n", veri.i);
    printf("veri.f : %.2f\n", veri.f);
    printf("veri.str : %s\n", veri.str);
    printf("\n...\n");

    veri.i = 103;

    printf("Verinin buyuklugu: %d\n", sizeof(veri));
    printf("veri.i : %d\n", veri.i);
    printf("veri.f : %.2f\n", veri.f);
    printf("veri.str : %s\n", veri.str);
    printf("\n...\n");

    veri.f = -203.45;

    printf("Verinin buyuklugu : %d\n", sizeof(veri));
    printf("veri.i : %d\n", veri.i);
    printf("veri.f : %.2f\n", veri.f);
    printf("veri.str : %s\n", veri.str);
    printf("\n...\n");
*/
/*

    /* *
* C programLama diltinde enumerated type'lar
* yani numaralandırılmış tipler
*/

/*
enum Seviyeler {
    DUSUK,
    ORTA,
    YUKSEK
};
 // aynı zamanda enum içindeki değişkenlere değer de atayabiliriz atamazsak sonuç 0 çıkacaktır
int main() {
    // numaralandırılmış tipte bir değişken tanımla
    // ve değer ata
    enum Seviyeler Odasicaklığı = DUSUK;

    // numaralandırılmış tipteki değişkemi yazdır
    printf("%d", Odasicaklığı);
}

*/

    return 0;
}
