#include <stdio.h>
#include <math.h>

/* Abdullah Arslan Kırklareli Yazılım Mühendisliği 1. Sınıf Öğrencisiyim Bu Projeyi Xcode Üzerinden c Dili ile Yazdım */

int main(void)
{
    float urunTutari;
    float odenenPara;

    int paraUstuKurus;
    int kalan;

    int ikiYuzTL;
    int yuzTL;
    int elliTL;
    int yirmiTL;
    int onBesTL;
    int birTL;

    int elliKurus;
    int yirmiBesKurus;
    int onKurus;
    int besKurus;
    int birKurus;

    int toplamKupur;

tekrar:

    printf("\nUrun tutarini giriniz: ");
    scanf("%f", &urunTutari);

    printf("Odenen parayi giriniz: ");
    scanf("%f", &odenenPara);

    /* Para ustunu kurus cinsine ceviriyoruz */
    paraUstuKurus = (int)roundf((odenenPara - urunTutari) * 100);

    kalan = paraUstuKurus;

    /* 200 TL */
    ikiYuzTL = kalan / 20000;
    kalan = kalan % 20000;

    /* 100 TL */
    yuzTL = kalan / 10000;
    kalan = kalan % 10000;

    /* 50 TL */
    elliTL = kalan / 5000;
    kalan = kalan % 5000;

    /* 20 TL */
    yirmiTL = kalan / 2000;
    kalan = kalan % 2000;

    /* 15 TL */
    onBesTL = kalan / 1500;
    kalan = kalan % 1500;

    /* 1 TL */
    birTL = kalan / 100;
    kalan = kalan % 100;

    /* 50 kurus */
    elliKurus = kalan / 50;
    kalan = kalan % 50;

    /* 25 kurus */
    yirmiBesKurus = kalan / 25;
    kalan = kalan % 25;

    /* 10 kurus */
    onKurus = kalan / 10;
    kalan = kalan % 10;

    /* 5 kurus */
    besKurus = kalan / 5;
    kalan = kalan % 5;

    /* 1 kurus */
    birKurus = kalan / 1;
    kalan = kalan % 1;

    toplamKupur = ikiYuzTL + yuzTL + elliTL +
                  yirmiTL + onBesTL + birTL +
                  elliKurus + yirmiBesKurus +
                  onKurus + besKurus + birKurus;

    printf("\nPara ustu: %d kurus\n", paraUstuKurus);

    printf("\nKullanilan kupurler:\n");

    printf("200 TL     : %d adet\n", ikiYuzTL);
    printf("100 TL     : %d adet\n", yuzTL);
    printf("50 TL      : %d adet\n", elliTL);
    printf("20 TL      : %d adet\n", yirmiTL);
    printf("15 TL      : %d adet\n", onBesTL);
    printf("1 TL       : %d adet\n", birTL);

    printf("50 kurus   : %d adet\n", elliKurus);
    printf("25 kurus   : %d adet\n", yirmiBesKurus);
    printf("10 kurus   : %d adet\n", onKurus);
    printf("5 kurus    : %d adet\n", besKurus);
    printf("1 kurus    : %d adet\n", birKurus);

    printf("\nToplam kupur sayisi: %d\n", toplamKupur);

    return 0;
}
