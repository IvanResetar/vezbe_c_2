#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

#define MAKS_KOLONA 4

#define MAX_DIMENZIJA 100 // Maksimalna dimenzija matrice

//ZADATAK 1.
// Funkcija za računanje sume elemenata zadate kolone matrice
int suma_kolone(int matrica[][MAKS_KOLONA], int n, int kolona) {
    int suma = 0;

    // Provjera ispravnosti indeksa kolone
    if (kolona >= 0 && kolona < MAKS_KOLONA) {
        // Prolazak kroz sve redove i dodavanje elemenata iz zadate kolone u sumu
        for (int i = 0; i < n; i++) {
            suma += matrica[i][kolona];
        }
    } else {
        printf("Indeks kolone je van opsega.\n");
    }

    return suma;
}

// Procedura za prikazivanje elemenata matrice i sume elemenata svake kolone
void prikazi_matricu(int matrica[][MAKS_KOLONA], int n, int m) {
    // Prolazak kroz sve elemente matrice
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", matrica[i][j]); // Ispis trenutnog elementa
        }
        // Ispis sume elemenata u trenutnoj koloni
        printf("\t| Suma kolone %d: %d\n", i+1, suma_kolone(matrica, n, i));
    }
}

//ZADATAK 2. 

// Funkcija za pronalaženje najmanjeg elementa matrice
int nadji_najmanji_element(const int matrica[][MAX_DIMENZIJA], int n, int m) {
    int najmanji_element = matrica[0][0]; // Pretpostavljamo da je prvi element matrice trenutno najmanji

    // Prolazimo kroz sve elemente matrice i upoređujemo ih sa trenutno najmanjim elementom
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrica[i][j] < najmanji_element) {
                najmanji_element = matrica[i][j];
            }
        }
    }

    return najmanji_element; // Vraćamo najmanji pronađeni element
}




int main(void){


    int n, m;
    int matrica[MAX_DIMENZIJA][MAX_DIMENZIJA];

    // Unos dimenzija matrice
    printf("Unesite dimenzije matrice (n m): ");
    scanf("%d %d", &n, &m);

    // Unos elemenata matrice
    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrica[i][j]);
        }
    }

    // Pronalaženje najmanjeg elementa matrice
    int najmanji_element = nadji_najmanji_element(matrica, n, m);

    // Ispis rezultata
    printf("Najmanji element matrice je: %d\n", najmanji_element);

// // Primer matrice
//     int n = 3;
//     int matrica[3][MAKS_KOLONA] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };

//     // Pozivamo proceduru za prikazivanje elemenata matrice i sumu elemenata svake kolone
//     prikazi_matricu(matrica, n, MAKS_KOLONA);








    return 0;
}