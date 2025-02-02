#include <stdio.h>
#include <stdlib.h>
#include <math.h> //matematiksel kodlar kullanabilmek için

/* 0'dan c dili örnekleri : basic codlar*/
int main()
{

/*
    // 1. örnek : Kullanýcýdan aldýðý yazýyý yazdýran c örneði

    int sayi1;
    printf("Merhaba lutfen bir sayi giriniz : ");
    scanf("%d",&sayi1);
    printf("Girdiginiz sayi = %d \n",sayi1);
*/


/*
    //2. örnek : Kullanýcýdan 2 farklý sayý alýp büyük olaný yazdýran c örneði

    char sayi1, sayi2;
    printf("Merhaba lutfen 2 rakam giriniz:\n");
    scanf("%c \n %c", &sayi1,&sayi2);
    if(sayi1> sayi2)
        printf("buyuk olan rakam %c",sayi1);
    else
        printf("buyuk olan rakam %c",sayi2);
*/

/*
    //3. örnek: aritmetik iþlemler

    int sayi1,sayi2;

    printf("Lutfen 2 sayi giriniz:");
    scanf("%d%d",&sayi1,&sayi2);
    //iþlemler
    int toplam=sayi1+sayi2;
    int cikarma= sayi1-sayi2;
    int carpim=sayi1*sayi2;
    //bölme iþlemi yaparken float olarak bölmelisiniz çünkü int olarak yaparsan tam sayý olarak verir
    float bolme=(float)sayi1/sayi2;
    int mod=sayi1%sayi2;

    // çýktý
    printf("2 sayinin toplami: %d \n",toplam);
    printf("2 sayinin farki:   %d \n",cikarma);
    printf("2 sayinin çarpimi: %d \n",carpim);
    //float yazdýrmada %.xf dersen x kadar kýsmýný yazdirbilirsin
    printf("2 sayinin bolumu:  %.8f \n",bolme);
    printf("2 sayinin modu:   %d \n",mod);

*/

/*
    //4. örnek : sayýlara hýzlý deðer atama

    int i =5

    // i = i+5
    int i +=5

    // i = i-5
    int i -=5

    // i = i*5
    int i *=5

    // i = i/5
    int i /=5

    // i = i%5
    int i %=5

    //i++ önce i yi yazdýr sonra 1 ekle demek
    //++i önce i yi 1 artýr sonra yazdýr demek
*/

/*
    //5.örnek : tip dönüþümleri
    //eðer iþlemden önce (dönüþtürülecek tip) yapardanýz ona dönüþür

    int sayi1,sayi2;
    float bolme_float;
    double bolme_double;
    sayi1=5;
    sayi2=3;
    bolme_float=(float)sayi1/sayi2;
    bolme_double=(double)sayi1/sayi2;
    printf("Float bolme = %.20f \n",bolme_float);
    printf("Float bolme = %.20f \n",bolme_double);
    //eðer bir sayý 0b ile baþlýyorsa binary sistemindedir
    //eðer bir sayý 0x ile baþlýyorsa hexadecimal sistemdedir
*/

/*
    //6. örnek:kullanýcýdan aldýðýn taban ve üs hesaplamalarý hazýr fonksiyon ile (code blocks pow fonksiyonunu desteklemiyor ama baþka uygulamalarda destekleyebilir)
    double taban ,kuvvet ,sonuc;
    printf("lutfen bir taban giriniz");
    scanf("%lf",&taban);
    printf("lutfen bir us giriniz");
    scanf("%lf",kuvvet);
    //taban ve kuvvet deðerini hesaplama
    sonuc= pow (taban,kuvvet);
    printf("%lf",sonuc);
    // karekök de sqrt fonksiyonu ile alýnýr ör: sonuc=sqrt(5)
*/

    //7.örnek: basit faiz hesabý
/*
    int ana_para,zaman,faiz_orani,basit_faiz_miktari,bilesik_faiz_miktari,sonuc;
    printf("lutfen ana para zaman ve faiz oranýný giriniz:");
    scanf("%d%d%d",&ana_para,&zaman,&faiz_orani);
    basit_faiz_miktari=ana_para*zaman*faiz_orani;
    //pow fonksiyonu code blocks ta .alýþmýyot
    bilesik_faiz_miktari=ana_para*(pow((1+faiz_orani/100),zaman));
    printf("%d",sonuc);
*/

/*
    //8.örnek :getchar ve putcahar kullanýmý
    // char sadece 1 karakter alýr yani2. basamaðý almaz görmezden gelir
    char ogrenci_notu;
    printf("öðrenci hangi harf notunu aldý:");
    ogrenci_notu=getchar();
    putchar(ogrenci_notu);
*/

    return 0;
}
