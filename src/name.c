#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


void nameTest() {
    char name[10];
    int age;

    printf("\nDigite seu nome:\n");
    scanf("%s", name);

    system("clear");

    if (strcmp(name, "juan") == 0) {
        printf("\nOlá Juan\n");
    } else if (strcmp(name, "Juan") == 0) {
        printf("\nOlá Juan\n");
    } else if (strcmp(name, "Ruan") == 0) {
        printf("\nO Nome é com J\n");
    } else {
        printf("\nOlá %s \n", name);
    }

    sleep(5);
    system("clear");

    printf("\nAgora digite sua idade:\n");
    scanf("%d", &age);

    if (age < 18) {
        system("clear");
        printf("\nVocê é menor de idade!\n");
    } else if (age > 17) {
        system("clear");
        printf("\nVocê é maior de idade!\n");
    } else if (age > 65) {
        system("clear");
        printf("\nVocẽ é idoso!\n");
    }


    return 0;
}
