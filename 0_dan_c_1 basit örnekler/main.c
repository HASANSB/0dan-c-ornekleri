#include <stdio.h>
#include <stdlib.h>
#include <math.h> //matematiksel kodlar kullanabilmek i�in

/* 0'dan c dili �rnekleri : basic codlar*/
int main()
{

/*
    // 1. �rnek : Kullan�c�dan ald��� yaz�y� yazd�ran c �rne�i

    int sayi1;
    printf("Merhaba lutfen bir sayi giriniz : ");
    scanf("%d",&sayi1);
    printf("Girdiginiz sayi = %d \n",sayi1);
*/


/*
    //2. �rnek : Kullan�c�dan 2 farkl� say� al�p b�y�k olan� yazd�ran c �rne�i

    char sayi1, sayi2;
    printf("Merhaba lutfen 2 rakam giriniz:\n");
    scanf("%c \n %c", &sayi1,&sayi2);
    if(sayi1> sayi2)
        printf("buyuk olan rakam %c",sayi1);
    else
        printf("buyuk olan rakam %c",sayi2);
*/

/*
    //3. �rnek: aritmetik i�lemler

    int sayi1,sayi2;

    printf("Lutfen 2 sayi giriniz:");
    scanf("%d%d",&sayi1,&sayi2);
    //i�lemler
    int toplam=sayi1+sayi2;
    int cikarma= sayi1-sayi2;
    int carpim=sayi1*sayi2;
    //b�lme i�lemi yaparken float olarak b�lmelisiniz ��nk� int olarak yaparsan tam say� olarak verir
    float bolme=(float)sayi1/sayi2;
    int mod=sayi1%sayi2;

    // ��kt�
    printf("2 sayinin toplami: %d \n",toplam);
    printf("2 sayinin farki:   %d \n",cikarma);
    printf("2 sayinin �arpimi: %d \n",carpim);
    //float yazd�rmada %.xf dersen x kadar k�sm�n� yazdirbilirsin
    printf("2 sayinin bolumu:  %.8f \n",bolme);
    printf("2 sayinin modu:   %d \n",mod);

*/

/*
    //4. �rnek : say�lara h�zl� de�er atama

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

    //i++ �nce i yi yazd�r sonra 1 ekle demek
    //++i �nce i yi 1 art�r sonra yazd�r demek
*/

/*
    //5.�rnek : tip d�n���mleri
    //e�er i�lemden �nce (d�n��t�r�lecek tip) yapardan�z ona d�n���r

    int sayi1,sayi2;
    float bolme_float;
    double bolme_double;
    sayi1=5;
    sayi2=3;
    bolme_float=(float)sayi1/sayi2;
    bolme_double=(double)sayi1/sayi2;
    printf("Float bolme = %.20f \n",bolme_float);
    printf("Float bolme = %.20f \n",bolme_double);
    //e�er bir say� 0b ile ba�l�yorsa binary sistemindedir
    //e�er bir say� 0x ile ba�l�yorsa hexadecimal sistemdedir
*/

/*
    //6. �rnek:kullan�c�dan ald���n taban ve �s hesaplamalar� haz�r fonksiyon ile (code blocks pow fonksiyonunu desteklemiyor ama ba�ka uygulamalarda destekleyebilir)
    double taban ,kuvvet ,sonuc;
    printf("lutfen bir taban giriniz");
    scanf("%lf",&taban);
    printf("lutfen bir us giriniz");
    scanf("%lf",kuvvet);
    //taban ve kuvvet de�erini hesaplama
    sonuc= pow (taban,kuvvet);
    printf("%lf",sonuc);
    // karek�k de sqrt fonksiyonu ile al�n�r �r: sonuc=sqrt(5)
*/

    //7.�rnek: basit faiz hesab�
/*
    int ana_para,zaman,faiz_orani,basit_faiz_miktari,bilesik_faiz_miktari,sonuc;
    printf("lutfen ana para zaman ve faiz oran�n� giriniz:");
    scanf("%d%d%d",&ana_para,&zaman,&faiz_orani);
    basit_faiz_miktari=ana_para*zaman*faiz_orani;
    //pow fonksiyonu code blocks ta .al��m�yot
    bilesik_faiz_miktari=ana_para*(pow((1+faiz_orani/100),zaman));
    printf("%d",sonuc);
*/

/*
    //8.�rnek :getchar ve putcahar kullan�m�
    // char sadece 1 karakter al�r yani2. basama�� almaz g�rmezden gelir
    char ogrenci_notu;
    printf("��renci hangi harf notunu ald�:");
    ogrenci_notu=getchar();
    putchar(ogrenci_notu);
*/

    return 0;
}
