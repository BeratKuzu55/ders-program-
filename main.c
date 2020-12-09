#include <stdio.h>
#include <stdlib.h>

int main()



{



   printf("Hello world!\n");

    int gun_numarasi;
    int devam;
    char* karakter = "merhaba";
    printf("%s",karakter);


    tekrar:

    printf("\nders saat araliklarini gormek icin gun numarasini giriniz : \n");
    scanf("%d",&gun_numarasi);

    switch (gun_numarasi)
     {
    case 1:
    case 7:
    case 6:
        printf("bu gunde ders bulunmamaktadir.");
        break;
    case 2:
        printf("dersleriniz 8.00 - 16.45 arasindadir ");
        break;
    case 3:
        printf("dersleriniz 9.00 - 16.00 arasindadir");
        break;
    case 4:
        printf("dersleriniz 9.00 - 10.45 arasindadir");
        break;
    case 5:
        printf("dersleriniz 14.00 - 15.00 arasindadir");
        break;
        default: printf("aralik disi bir sayi girisi yaptiniz ");


     }
       printf("\n diger bir gunun programina bakmak istiyorsaniz '-1' i tuslayiniz : ");
       printf("\n uygulamadan cikmak icin '-2' yi tuslayiniz : ");
       scanf("%d",&devam);

     if (devam == -1)
    {
         goto tekrar;
    }
    else if (devam == -2)
    {
        printf("iyi gunler dileriz : ");
    }

    char harf;
    printf("lutfen bir harf giriniz");
    scanf("%c",&harf);
    (harf == 'a' || harf == 'e' || harf == 'u' || harf == 'o')?printf("sesli bir harf girdiniz"):printf("sesli bir harf girmediniz");



    return 0;
}
