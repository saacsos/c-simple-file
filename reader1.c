#include <stdio.h>

int main() {
    FILE* fp;
    char line[100], word[30];
    int number, total = 0;

    fp = fopen("data.in", "r");
    while (fgets(line, 100, fp) != NULL) {
        printf(">>%s<<\n", line);
        sscanf(line, "%s %d", word, &number);
        printf("------%s(%d)-----\n", word, number);
        total += number;
    }

    printf("Total is %d\n", total);

    fclose(fp);
}