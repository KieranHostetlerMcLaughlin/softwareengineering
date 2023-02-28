#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    FILE* req = malloc(sizeof(FILE));

    char* fileName = malloc(sizeof(char));
    scanf("%s", fileName);

    if (strlen(fileName) > 0) {
        if (req = fopen("csearch.txt", "w")) {
            fprintf(req, "%s", fileName);
            fclose(req);
        }
    }

}