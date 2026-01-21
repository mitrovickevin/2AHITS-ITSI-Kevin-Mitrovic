#include <stdio.h>

int main()
{
    int wert;
    int sum = 0; 

    printf("Gib Zahlen ein. Beenden mit Ctrl+D :\n");

    while (scanf("%d", &wert) != EOF)
    {
        sum += wert;
    }

    printf("\nProgramm beendet.\n");
    printf("Summe: %d\n", sum);

    return 0;
}