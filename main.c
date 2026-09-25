#include <stdio.h>

int main() {
    float note1, note2, moyenne;

    printf("=== CALCULATEUR DE MOYENNE ===\n");
    
    printf("Entrez la premiere note (/20) : ");
    scanf("%f", &note1);

    printf("Entrez la deuxieme note (/20) : ");
    scanf("%f", &note2);

    moyenne = (note1 + note2) / 2.0;


    printf("\nVotre moyenne est de : %.2f/20\n", moyenne);

    if (moyenne >= 10.0) {
        printf("Resultat : Valide !\n");
    } else {
        printf("Resultat : Non valide, rattrapage necessaire.\n");
    }

    return 0;
}
