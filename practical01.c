#include <stdio.h>
float sinterest(float principal, float rate, float time)
 {
    float simpleinterest = (principal * rate * time) / 100;
    return simpleinterest;
}

int main()
 {
    float principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);
    float interest = sinterest(principal, rate, time);
    printf("Simple Interest: %f\n", interest);

    return 0;
}
