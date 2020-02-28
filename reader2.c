#include <stdio.h>
#include <string.h>

int main() {
    FILE* fp;
    char line[100];
    int number;
    int total = 0;

    fp = fopen("data.in", "r");
    while (fscanf(fp, "%s %d", line, &number) != -1) {
        printf(">>'%s'(%d)<<\n", line, number);
        total += number;
    }

    fclose(fp);

    printf("Total is %d\n", total);
}