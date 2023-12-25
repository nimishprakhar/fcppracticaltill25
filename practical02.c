#include <stdio.h>
float ctoF(float celsius);
float Ftoc(float fahrenheit);

// to convert Celsius to Fahrenheit
float ctoF(float celsius) 
{
    return (celsius * 9 / 5) + 32;
}

// to convert Fahrenheit to Celsius
float Ftoc(float fahrenheit)
{
return (fahrenheit - 32) * 5 / 9;
}

void main()
 {  float temperature;
    char choice;
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf(" %c", &choice);
    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    switch (choice) {
        case '1':
            printf("%f Celsius is %f Fahrenheit\n", temperature, ctoF(temperature));
            break;
        case '2':
            // Fahrenheit to Celsius
            printf("%f Fahrenheit is %f Celsius\n", temperature, Ftoc(temperature));
            break;
        default:
            printf("Invalid choice\n");
    }

}
