#include <stdio.h>

// Length Conversions
double metersToFeet(double meters) {
    return meters * 3.28084;
}

double metersToInches(double meters) {
    return meters * 39.3701;
}

double feetToMeters(double feet) {
    return feet / 3.28084;
}

double inchesToMeters(double inches) {
    return inches / 39.3701;
}

// Temperature Conversions
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Weight Conversions
double kilogramsToPounds(double kilograms) {
    return kilograms * 2.20462;
}

double poundsToKilograms(double pounds) {
    return pounds / 2.20462;
}

// Volume Conversions
double litersToGallons(double liters) {
    return liters * 0.264172;
}

double gallonsToLiters(double gallons) {
    return gallons / 0.264172;
}

// Time Conversions
double hoursToMinutes(double hours) {
    return hours * 60;
}

double minutesToHours(double minutes) {
    return minutes / 60;
}

// Currency Conversions
double usdToEuro(double usd) {
    return usd * 0.85;
}

double euroToUsd(double euro) {
    return euro / 0.85;
}

// Area Conversions
double squareMetersToSquareFeet(double sqmeters) {
    return sqmeters * 10.7639;
}

double squareFeetToSquareMeters(double sqfeet) {
    return sqfeet / 10.7639;
}

// Speed Conversions
double kphToMph(double kph) {
    return kph * 0.621371;
}

double mphToKph(double mph) {
    return mph / 0.621371;
}

int main() {
    int choice;
    double value;

    while (1) {
        printf("Unit Converter Menu:\n");
        printf("1. Length Conversions\n");
        printf("2. Temperature Conversions\n");
        printf("3. Weight Conversions\n");
        printf("4. Volume Conversions\n");
        printf("5. Time Conversions\n");
        printf("6. Currency Conversions\n");
        printf("7. Area Conversions\n");
        printf("8. Speed Conversions\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 9) {
            printf("Exiting the program.\n");
            break;
        }

        if (choice < 1 || choice > 8) {
            printf("Invalid choice. Please enter a valid option.\n");
            continue;
        }

        printf("Enter the value to convert: ");
        scanf("%lf", &value);

        double result;
        switch (choice) {
            case 1:
                printf("Length Conversion Menu:\n");
                printf("1. Meters to Feet\n");
                printf("2. Meters to Inches\n");
                printf("3. Feet to Meters\n");
                printf("4. Inches to Meters\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        result = metersToFeet(value);
                        printf("%.2lf meters is equal to %.2lf feet.\n", value, result);
                        break;
                    case 2:
                        result = metersToInches(value);
                        printf("%.2lf meters is equal to %.2lf inches.\n", value, result);
                        break;
                    case 3:
                        result = feetToMeters(value);
                        printf("%.2lf feet is equal to %.2lf meters.\n", value, result);
                        break;
                    case 4:
                        result = inchesToMeters(value);
                        printf("%.2lf inches is equal to %.2lf meters.\n", value, result);
                        break;
                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                }
                break;
            case 2:
                printf("Temperature Conversion Menu:\n");
                printf("1. Celsius to Fahrenheit\n");
                printf("2. Fahrenheit to Celsius\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        result = celsiusToFahrenheit(value);
                        printf("%.2lf degrees Celsius is equal to %.2lf degrees Fahrenheit.\n", value, result);
                        break;
                    case 2:
                        result = fahrenheitToCelsius(value);
                        printf("%.2lf degrees Fahrenheit is equal to %.2lf degrees Celsius.\n", value, result);
                        break;
                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                }
                break;
            case 3:
                printf("Weight Conversion Menu:\n");
                printf("1. Kilograms to Pounds\n");
                printf("2. Pounds to Kilograms\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        result = kilogramsToPounds(value);
                        printf("%.2lf kilograms is equal to %.2lf pounds.\n", value, result);
                        break;
                    case 2:
                        result = poundsToKilograms(value);
                        printf("%.2lf pounds is equal to %.2lf kilograms.\n", value, result);
                        break;
                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                }
                break;
            case 4:
                printf("Volume Conversion Menu:\n");
                printf("1. Liters to Gallons\n");
                printf("2. Gallons to Liters\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        result = litersToGallons(value);
                        printf("%.2lf liters is equal to %.2lf gallons.\n", value, result);
                        break;
                    case 2:
                        result = gallonsToLiters(value);
                        printf("%.2lf gallons is equal to %.2lf liters.\n", value, result);
                        break;
                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                }
                break;
            case 5:
                printf("Time Conversion Menu:\n");
                printf("1. Hours to Minutes\n");
                printf("2. Minutes to Hours\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        result = hoursToMinutes(value);
                        printf("%.2lf hours is equal to %.2lf minutes.\n", value, result);
                        break;
                    case 2:
                        result = minutesToHours(value);
                        printf("%.2lf minutes is equal to %.2lf hours.\n", value, result);
                        break;
                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                }
                break;
            case 6:
                printf("Currency Conversion Menu:\n");
                printf("1. USD to Euro\n");
                printf("2. Euro to USD\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        result = usdToEuro(value);
                        printf("%.2lf USD is equal to %.2lf Euro.\n", value, result);
                        break;
                    case 2:
                        result = euroToUsd(value);
                        printf("%.2lf Euro is equal to %.2lf USD.\n", value, result);
                        break;
                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                }
                break;
            case 7:
                printf("Area Conversion Menu:\n");
                printf("1. Square Meters to Square Feet\n");
                printf("2. Square Feet to Square Meters\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        result = squareMetersToSquareFeet(value);
                        printf("%.2lf square meters is equal to %.2lf square feet.\n", value, result);
                        break;
                    case 2:
                        result = squareFeetToSquareMeters(value);
                        printf("%.2lf square feet is equal to %.2lf square meters.\n", value, result);
                        break;
                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                }
                break;
            case 8:
                printf("Speed Conversion Menu:\n");
                printf("1. Kilometers per Hour to Miles per Hour\n");
                printf("2. Miles per Hour to Kilometers per Hour\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        result = kphToMph(value);
                        printf("%.2lf kilometers per hour is equal to %.2lf miles per hour.\n", value, result);
                        break;
                    case 2:
                        result = mphToKph(value);
                        printf("%.2lf miles per hour is equal to %.2lf kilometers per hour.\n", value, result);
                        break;
                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                }
                break;
        }
       
    }
    return 0;
}
