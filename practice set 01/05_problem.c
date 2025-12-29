#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;
    float sum, percentage;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    // Calculate sum
    sum = s1 + s2 + s3 + s4 + s5;

    // Calculate percentage (out of 500)
    percentage = (sum / 500) * 100;

    // Output Why we use %.2f ? %.2f ka matlab hota hai: float value ko sirf 2 decimal places tak print karo
    printf("Total Marks = %.2f\n", sum);
    printf("Percentage = %.2f%%\n", percentage);
      //%f → float value print karta hai %% → actual percent sign (%) print karta hai
      return 0;
}