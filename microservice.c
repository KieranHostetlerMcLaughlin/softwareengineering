#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {

    const int max = 1023;

    FILE* search = malloc(sizeof(FILE));
    FILE* find = malloc(sizeof(FILE));
    FILE* send = malloc(sizeof(FILE));

    char filename[511];

    int temp = -9999;
    int rainchance = -9999;
    int windamt = -9999;
    char winddir = '-';

    while (1) {
        if (search = fopen("csearch.txt", "r")) {
            fgets(filename, 511, search);
            fclose(search);
        }
        
        if (strlen(filename) != 0) {

            strcat(filename, ".txt");
            if (find = fopen(filename, "r")) {
                fscanf(find, "%d %d %d %c", &temp, &rainchance, &windamt, &winddir);
                fclose(find);
            };

            if (send = fopen("sendout.txt", "w")) {
                fprintf(send, "%d \n%d \n%d \n%c", temp, rainchance, windamt, winddir);
                fclose(send);
            }
            
        }

        
    }
}



