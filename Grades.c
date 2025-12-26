#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float g1, g2, g3, g4, FG;
    printf("Name: ");
    char name[50];
    fgets(name, sizeof(name), stdin);
    printf("Enter grade 1: ");
    scanf("%f", &g1);
    printf("Enter grade 2: ");
    scanf("%f", &g2);
    printf("Enter grade 3: ");
    scanf("%f", &g3);
    printf("Enter grade 4: ");
    scanf("%f", &g4);
    FG = (g1 + g2 + g3 + g4) / 4;
    printf("\nName: %s", name);
    printf("Final Grade: %.2f
           \n", FG);
    if (FG >= 6.0) {
        printf("Status: Passed\n");
    } else if (FG >= 5.0) {
        printf("Status: In Recovery\n");
    } else {
        printf("Status: Failed\n");
    }
    return 0;
}
