#include <stdio.h>

int main() {
    int numeroProdotti, i = 0;
    float costo, totale = 0.0;

    printf("Quanti prodotti hai acquistato? ");
    scanf("%d", &numeroProdotti);

    while (i < numeroProdotti) {
        printf("Costo del prodotto %d: ", i + 1);
        scanf("%f", &costo);
        totale += costo;
        i++;
    }

    printf("Totale speso: %.2f\n", totale);

    return 0;
}