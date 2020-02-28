#include <stdio.h>
#include <string.h>

int main() {
    FILE* fp;
    char line[100];

    fp = fopen("data.in", "r");
    while (fgets(line, 100, fp) != NULL) {
        line[strlen(line) - 1] = '\0';
        printf(">>%s<<\n", line);
    }

    fclose(fp);
}