#include <stdio.h>

int main(void) {
    int i,n1,n2,molti;
    printf("inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("moltiplicato per quante volte?: ");
    scanf("%d", &n2);
    molti=0;
    for (i=0;i<n2; i++) {
        molti = molti + n2;
    }
    printf("il prodotto e': %d",molti);
}
