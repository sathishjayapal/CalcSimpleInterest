#include <stdio.h>
void main()
{
    float p, r, t, si;
    float total_si = 0;
    for (int i = 0; i < 3; i++)
    {
        // Input principle, rate and time
        printf("Enter principle (amount): ");
        scanf("%f", &p);
        printf("Enter time: ");
        scanf("%f", &t);
        printf("Enter rate: ");
        scanf("%f", &r);
        // Calculate simple interest
        si = (p * t * r) / 100;
        // Print the resultant value of SI
        printf("Simple Interest = %f\n", si);
        total_si += si;
    }
    printf("Total Simple Interest = %f\n", total_si);
}
