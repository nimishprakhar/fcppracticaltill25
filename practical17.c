#include <stdio.h>
void main() 
{
    FILE *file;

    // Write data to the file
    file = fopen("data.txt", "w");
    if (file == NULL) 
    {
        printf("Unable to create the file.\n");
        return 1;
    }
    fprintf(file, "Hello, World!\n");
    fclose(file);

    // Read data from the file
    char str[100];
    file = fopen("data.txt", "r");
    if (file == NULL) 
    {
        printf("Unable to open the file.\n");
        return 1;
    }
    while (fgets(str, 100, file) != NULL) 
    {
        printf("%s", str);
    }
    fclose(file);

    // Append data to the file
    file = fopen("data.txt", "a");
    if (file == NULL) 
    {
        printf("Unable to open the file.\n");
        return 1;
    }
    fprintf(file, "This is appended text.\n");
    fclose(file);


}