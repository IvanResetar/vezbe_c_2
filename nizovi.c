#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>


/*Zadatak 1. Dat je niz celih brojeva. Implementirati proceduru koja 
u zadatom nizu celih brojeva nalazi najmamnji parni element niza
*/
void pronadji_najmanji_parni_element(int niz[], int duzina) {
    int najmanji_parni = -1; // Postavljamo inicijalnu vrijednost na -1, što označava da još nismo pronašli nijedan parni element

    // Prolazimo kroz sve elemente niza
    for (int i = 0; i < duzina; i++) {
        // Provjeravamo da li je trenutni element paran i da li je manji od trenutnog najmanjeg parnog
        if (niz[i] % 2 == 0 && (najmanji_parni == -1 || niz[i] < najmanji_parni)) {
            najmanji_parni = niz[i];
        }
    }

    // Ispisujemo rezultat
    if (najmanji_parni != -1) {
        printf("Najmanji parni element u nizu je: %d\n", najmanji_parni);
    } else {
        printf("Nema parnih elemenata u nizu.\n");
    }
}


// Zadatak 2. Procedura za pomeranje elemenata niza udesno za n pozicija
void pomeri_desno(int niz[], int duzina, int n) {
    // Pomeranje elemenata niza
    for (int i = duzina - 1; i >= 0; i--) {
        // Pomeramo svaki element za n pozicija udesno
        niz[i + n] = niz[i];
    }

    // Popunjavanje praznih mesta na početku niza nulama
    for (int i = 0; i < n; i++) {
        niz[i] = 0;
    }
}
// Funkcija za ispisivanje niza
void ispisi_niz(int niz[], int duzina) {
    printf("Niz nakon pomeranja:\n");
    for (int i = 0; i < duzina; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");
}


// Funkcija za računanje sume elemenata zadate kolone matrice
int suma_kolone(int matrica[][m], int n, int m, int kolona) {
    int suma = 0;

    // Provjera ispravnosti indeksa kolone
    if (kolona >= 0 && kolona < m) {
        // Prolazak kroz sve redove i dodavanje elemenata iz zadate kolone u sumu
        for (int i = 0; i < n; i++) {
            suma += matrica[i][kolona];
        }
    } else {
        printf("Indeks kolone je van opsega.\n");
    }

    return suma;
}

int main(void){


    // Primer matrice
    int n = 3, m = 4;
    int matrica[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int kolona;

    printf("Unesite indeks kolone za koju želite izračunati sumu: ");
    scanf("%d", &kolona);

    // Pozivamo funkciju za izračunavanje sume elemenata zadate kolone
    int rezultat = suma_kolone(matrica, n, m, kolona);

    // Ispisujemo rezultat
    printf("Suma elemenata u zadatoj koloni je: %d\n", rezultat);

// // Primer niza celih brojeva
//     int niz[] = {1, 2, 3, 4, 5};
//     int duzina_niza = sizeof(niz) / sizeof(niz[0]);
//     int n; // Broj pozicija za pomeranje
//     printf("Unesite broj pozicija za pomeranje udesno: ");
//     scanf("%d", &n);
//     // Pozivamo proceduru za pomeranje elemenata niza udesno za n pozicija
//     pomeri_desno(niz, duzina_niza, n);

//     // Ispisujemo rezultat
//     ispisi_niz(niz, duzina_niza);
   /* // Primer niza celih brojeva
    int niz[] = {3, 7, 2, 8, 5, 10, 4};

    // Računamo dužinu niza
    int duzina_niza = sizeof(niz) / sizeof(niz[0]);

    // Pozivamo proceduru za pronalaženje najmanjeg parnog elementa
    pronadji_najmanji_parni_element(niz, duzina_niza);

    */



    return 0;
}