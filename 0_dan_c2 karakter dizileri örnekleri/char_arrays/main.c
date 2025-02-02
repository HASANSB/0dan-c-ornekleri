#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Neler var: \n karakter ve karakter dizisi islemleri ve ilgili uygulamalar \n ozel karakterler ve ilgili uygulamalar");
    // char lara tek týrnak ile deðiþken tanýmlanýr
    char karakter='k';
    printf("\n %c \n ",karakter);

    //char dizisi tanýmlama; çift týrnak kullanýlýr
    char karakter_dizisi1[]="Merhaba dunya\n";
    printf("%s\n",karakter_dizisi1);
    //tek tek karakter de tanýmlayabiliriz ama sonuna{ \0} koyulmalý
    //KOYULMAZSA
    char karakter_dizisi2[]={'M','e','r','h','a','b','a',' ','d','u','n','y','a'};
    printf(" %s\n",karakter_dizisi2);
    //{ \0} KOYULURSA
    char karakter_dizisi3[]={'M','e','r','h','a','b','a',' ','d','u','n','y','a','\0'};
        printf(" %s\n",karakter_dizisi3);
    printf("\n Bu uc karakter dizisinin boyutu \n 1- karakter dizisi 1' in boyutu %lu \n 2- karakter dizisi 2nin boyutu = %lu \n 3- karakter dizsi 3'un boyutu %lu\n",sizeof(karakter_dizisi1),sizeof(karakter_dizisi2),sizeof(karakter_dizisi3) );
    // çþö gibi yazýlýmda olmayan harfler 2 karakterle belirtilir bu yüzden 2 karakterlik yerkaplarlar
    //eðer dizi boþ olmayýp da [x] olarak boyut verilirse boyut x olur boþ yerleri kendisi doldurur ve x ten fazla karakter almaz

    //strcat kodu: x ve y olarak 2 string alýr ve y yi x in baþýna ekleyerek bunu x e kaydeder fakat codeblocks ta çalýþmýyor
    strcat(karakter_dizisi1, karakter_dizisi3);
    //strcopy x ve y olarak 2 string deðer alýr y nin içeriðini x e kopyalar fakat codeblocks ta çalýþmýyor
    strcpy(karakter_dizisi1,karakterdizisi2);
    //strcmp x ve y olarak 2 string alýr ve aralarýndaki karakter sayýsý fark yazdýrýr fakat codeblocks ta çalýþmýyor

    //string de kullanýlan kodlar

    /*
    1-\n bir alt satýra keçer
    2-\t tab tuþuna basýlmýþ gibi davranýr
    3-\0 sonlandýrma karakteri bundan sonraki karakteri algýlamaz koyulmazsa bellekten rastgele karakter alýr
    4-\" çift týrnak iþareti ekler
    5-\' tek týrnak iþareti ekler
    6-\% yüzde iþareti ekler
    7-\\ "\" iþareti ekler
    8-\a bir ses ekler
    */
    return 0;
}
