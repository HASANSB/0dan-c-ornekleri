#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Neler var: \n karakter ve karakter dizisi islemleri ve ilgili uygulamalar \n ozel karakterler ve ilgili uygulamalar");
    // char lara tek t�rnak ile de�i�ken tan�mlan�r
    char karakter='k';
    printf("\n %c \n ",karakter);

    //char dizisi tan�mlama; �ift t�rnak kullan�l�r
    char karakter_dizisi1[]="Merhaba dunya\n";
    printf("%s\n",karakter_dizisi1);
    //tek tek karakter de tan�mlayabiliriz ama sonuna{ \0} koyulmal�
    //KOYULMAZSA
    char karakter_dizisi2[]={'M','e','r','h','a','b','a',' ','d','u','n','y','a'};
    printf(" %s\n",karakter_dizisi2);
    //{ \0} KOYULURSA
    char karakter_dizisi3[]={'M','e','r','h','a','b','a',' ','d','u','n','y','a','\0'};
        printf(" %s\n",karakter_dizisi3);
    printf("\n Bu uc karakter dizisinin boyutu \n 1- karakter dizisi 1' in boyutu %lu \n 2- karakter dizisi 2nin boyutu = %lu \n 3- karakter dizsi 3'un boyutu %lu\n",sizeof(karakter_dizisi1),sizeof(karakter_dizisi2),sizeof(karakter_dizisi3) );
    // ��� gibi yaz�l�mda olmayan harfler 2 karakterle belirtilir bu y�zden 2 karakterlik yerkaplarlar
    //e�er dizi bo� olmay�p da [x] olarak boyut verilirse boyut x olur bo� yerleri kendisi doldurur ve x ten fazla karakter almaz

    //strcat kodu: x ve y olarak 2 string al�r ve y yi x in ba��na ekleyerek bunu x e kaydeder fakat codeblocks ta �al��m�yor
    strcat(karakter_dizisi1, karakter_dizisi3);
    //strcopy x ve y olarak 2 string de�er al�r y nin i�eri�ini x e kopyalar fakat codeblocks ta �al��m�yor
    strcpy(karakter_dizisi1,karakterdizisi2);
    //strcmp x ve y olarak 2 string al�r ve aralar�ndaki karakter say�s� fark yazd�r�r fakat codeblocks ta �al��m�yor

    //string de kullan�lan kodlar

    /*
    1-\n bir alt sat�ra ke�er
    2-\t tab tu�una bas�lm�� gibi davran�r
    3-\0 sonland�rma karakteri bundan sonraki karakteri alg�lamaz koyulmazsa bellekten rastgele karakter al�r
    4-\" �ift t�rnak i�areti ekler
    5-\' tek t�rnak i�areti ekler
    6-\% y�zde i�areti ekler
    7-\\ "\" i�areti ekler
    8-\a bir ses ekler
    */
    return 0;
}
