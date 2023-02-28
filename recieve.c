#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    
    int active = 1;
    FILE* res = malloc(sizeof(FILE)); 

    int temp = -9999;
    int rainchance = -9999;
    int windamt = -9999;
    char winddir = '-';

    while (active) {
        if (res = fopen("sendout.txt", "r")) {
            fscanf(res, "%d %d %d %c", &temp, &rainchance, &windamt, &winddir);
            if (temp != -9999 && rainchance != -9999 && windamt != -9999 && winddir != '-') {
                printf("%d \n%d \n%d \n%c \n", temp, rainchance, windamt, winddir);
                active = 0;
            }
            fclose(res);
        }
    }
}