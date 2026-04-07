#include <stdio.h>

int main() {
    int choice;
    float input, result;

    while (1) {
        printf("\n=== UNIT CONVERTER ===\n");
        printf("1. Length (Meters to Kilometers)\n");
        printf("2. Weight (Kilograms to Grams)\n");
        printf("3. Temperature (Celsius to Fahrenheit)\n");
        printf("4. Temperature (Fahrenheit to Celsius)\n");
        printf("5. Height (Centimeters to Feet)\n");
        printf("6. Oil (Liters to Kilograms)\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value in meters: ");
                scanf("%f", &input);
                result = input / 1000;
                printf("Result: %.2f kilometers\n", result);
                break;

            case 2:
                printf("Enter value in kilograms: ");
                scanf("%f", &input);
                result = input * 1000;
                printf("Result: %.2f grams\n", result);
                break;

            case 3:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &input);
                result = (input * 9/5) + 32;
                printf("Result: %.2f Fahrenheit\n", result);
                break;

            case 4:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &input);
                result = (input - 32) * 5/9;
                printf("Result: %.2f Celsius\n", result);
                break;

            case 5:
                printf("Enter height in centimeters: ");
                scanf("%f", &input);
                result = input / 30.48;
                printf("Result: %.2f feet\n", result);
                break;

            case 6:
                printf("Enter volume of oil in liters: ");
                scanf("%f", &input);
                result = input * 0.92;   // density of oil ≈ 0.92 kg/L
                printf("Result: %.2f kilograms\n", result);
                break;

            case 7:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
