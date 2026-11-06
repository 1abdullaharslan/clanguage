//
//  main.c
//  Hesap Makinesi
//
//  Created by Abdullah Arslan on 29.10.2026.
//


#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    
    char İşlem;
    double Sayı1;
    double Sayı2;
    double Sonuç;
    
    
    printf("Lütfen İşlem Giriniz '+,-,/,*'\n");
    scanf("%c", &İşlem);
    
    
    switch (İşlem)
    {
    case '+':
            printf("Lütfen ilk sayıyı girin \n");
            scanf("%lf", &Sayı1);
            printf("Lütfen ikinci sayıyı girin \n");
            scanf("%lf", &Sayı2);
            Sonuç = Sayı1 + Sayı2;
            printf("İşleminizin sonucu %lf", Sonuç);
        break;
    case '-':
            printf("Lütfen ilk sayıyı girin \n");
            scanf("%lf", &Sayı1);
            printf("Lütfen ikinci sayıyı girin \n");
            scanf("%lf", &Sayı2);
            Sonuç = Sayı1 - Sayı2;
            printf("İşleminizin sonucu %lf", Sonuç);
        break;
    case '*':
            printf("Lütfen ilk sayıyı girin \n");
            scanf("%lf", &Sayı1);
            printf("Lütfen ikinci sayıyı girin \n");
            scanf("%lf", &Sayı2);
            Sonuç = Sayı1 * Sayı2;
            printf("İşleminizin sonucu %lf", Sonuç);
        break;
    case '/':
            printf("Lütfen ilk sayıyı girin \n");
            scanf("%lf", &Sayı1);
            printf("Lütfen ikinci sayıyı girin \n");
            scanf("%lf", &Sayı2);
            if (Sayı2 == 0){
                printf("Hata: Yaptığınız İşlem Tanımsız Olur Lütfen Tekrar Deneyiniz");
                return 0;
            }
            
            Sonuç = Sayı1 / Sayı2;
            printf("İşleminizin sonucu %lf", Sonuç);
            break;
    default:
            printf("\n Hatalı işlem girdiniz lütfen girdiğiniz bilgileri kontrol ederek tekrar deneyiniz");
            return 0;
            break;
        }
    
    
    printf("\nBizi kullandığınız için teşekkür ederiz:]");
}
