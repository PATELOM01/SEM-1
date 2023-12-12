#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("file1.txt", "r");
    destination = fopen("file2.txt", "w");

    if (source == NULL || destination == NULL) {
        printf("Error while opening files\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully\n");

    return 0;
}
