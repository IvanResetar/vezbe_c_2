#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

// Zadatak 1. Procedura koja za unetih n redova prikazuje figuru piramide (u ovom primeru n = 5)

void prikazi_piramidu(int n)
{
    int i, j, razmak;

    // Spoljasnja petlja za redove
    for (i = 1; i <= n; i++)
    {
        // Ispisujemo razmake pre zvjezdica
        for (razmak = 1; razmak <= n - i; razmak++)
        {
            printf(" ");
        }
        // Ispisujemo zvezdice
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// Zadatak 2. Procedura koji prikazuje trocifrene brojeve sa uzastopnim ciframa

void prikazi_trocifrene_uzastopne()
{
    int stotine, desetice, jedinice;

    printf("Trocifreni brojevi sa uzastopnim ciframa:\n");
    // Vanjska petlja za stotine
    for (stotine = 1; stotine <= 9; stotine++)
    {
        // Srednja petlja za desetice
        for (desetice = 0; desetice <= 9; desetice++)
        {
            // Unutarnja petlja za jedinice
            for (jedinice = 0; jedinice <= 9; jedinice++)
            {
                // Provjera da li su cifre uzastopne
                if (stotine == desetice - 1 && desetice == jedinice - 1)
                {
                    // Ispis trocifrenog broja sa uzastopnim ciframa
                    printf("%d%d%d\n", stotine, desetice, jedinice);
                }
            }
        }
    }
}


// Zadatak 3. Procedura za računanje sume jednocifrenih brojeva. Korišćenjem for petlje
void suma_jednocifrenih(){
    int suma = 0;

    for(int i = 0; i <= 9;i++){ //petlja koja prolazi kroz sve jednocifrene brojeve (0-9)
        suma+= i;
    }

    printf("Suma jednocifrenih brojeva je: %d\n", suma);
}

int main(void)
{
   
     suma_jednocifrenih();

    // prikazi_trocifrene_uzastopne();
    //  int n;

    // scanf("%d", &n);

    // prikazi_piramidu(n);

    // Poziv potprograma

    return 0;
}
