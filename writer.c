#include <stdio.h>
#include <string.h>

int main() {
    FILE* fp;
    char data2write[100] = "I study in Computer Science, Kasetsart University";

    fp = fopen("output.out", "w");

    if (fp != NULL) {
        puts("The file is now open");
        fputs(data2write, fp);
        fputs("\n", fp);
        fprintf(fp, "%d - %d = %d\n", 3000, 1234, 3000 - 1234);
        puts("Writing file has been finished");
        fclose(fp);
    } else {
        printf("Failed to open file output.out\n");
    }
}