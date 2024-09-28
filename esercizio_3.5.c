#include <stdio.h>

int main() {
    float prodottiAcquistati, prezzoUnitario, sconto, prezzoUnitarioScontato;

    printf("Inserire numero di prodotti acquistati\n");
    scanf("%f", &prodottiAcquistati);
    printf("Inserire prezzo unitario\n");
    scanf("%f", &prezzoUnitario);

    if(prezzoUnitario >= 50){
        sconto = prezzoUnitario * 0.20;
        prezzoUnitarioScontato = prezzoUnitario - sconto;
        printf("Importo totale non scontato: %.2f \n", prezzoUnitario);
        printf("Importo totale: %.2f \n", prezzoUnitarioScontato);
        printf("Sconto = 20%%");

    }else if(prezzoUnitario >= 10){
        sconto = prezzoUnitario * 0.10;
        prezzoUnitarioScontato = prezzoUnitario - sconto;
        printf("Importo totale non scontato: %.2f \n", prezzoUnitario);
        printf("Importo totale: %.2f \n", prezzoUnitarioScontato);
        printf("Sconto = 10%%");
    }else{
        printf("Importo totale: %.2f \n", prezzoUnitario);
        printf("Sconto = 0%%");

    }



    return 0;
}
