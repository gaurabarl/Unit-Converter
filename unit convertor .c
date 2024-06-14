#include <stdio.h>

// Function declarations
void display_menu();
void convert_length();
void convert_weight();
void convert_temperature();
void convert_volume();

// Conversion functions for length
float meters_to_feet(float meters);
float feet_to_meters(float feet);
float meters_to_kilometers(float meters);
float kilometers_to_meters(float kilometers);
float centimeters_to_meters(float centimeters);
float meters_to_centimeters(float meters);
float centimeters_to_kilometers(float centimeters);
float kilometers_to_centimeters(float kilometers);

// Conversion functions for weight
float kg_to_grams(float kg);
float grams_to_kg(float grams);
float pounds_to_kg(float pounds);
float kg_to_pounds(float kg);
float ounces_to_grams(float ounces);
float grams_to_ounces(float grams);

// Conversion functions for volume
float liters_to_milliliters(float liters);
float milliliters_to_liters(float milliliters);
float liters_to_cubic_meters(float liters);
float cubic_meters_to_liters(float cubic_meters);
float liters_to_gallons(float liters);
float gallons_to_liters(float gallons);
float liters_to_fluid_ounces(float liters);
float fluid_ounces_to_liters(float fluid_ounces);

// Conversion functions for temperature
float celsius_to_fahrenheit(float celsius);
float fahrenheit_to_celsius(float fahrenheit);
float celsius_to_kelvin(float celsius);
float kelvin_to_celsius(float kelvin);
float fahrenheit_to_kelvin(float fahrenheit);
float kelvin_to_fahrenheit(float kelvin);

int main() {
    int choice;
    printf("Welcome to the Unit Converter Program.\n");
    printf("All the conversions you need are here. Have a try, thank you!\n");

    do {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                convert_length();
                break;
            case 2:
                convert_weight();
                break;
            case 3:
                convert_temperature();
                break;
            case 4:
                convert_volume();
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while(choice != 0);
    
    return 0;
}

void display_menu() {
    printf("\nUnit Conversion Program\n");
    printf("1. Length\n");
    printf("2. Weight/Mass\n");
    printf("3. Temperature\n");
    printf("4. Volume\n");
    printf("0. Exit\n");
}

void convert_length() {
    int choice;
    float value, result;
    
    printf("Length Conversion:\n");
    printf("1. Meters to Feet\n");
    printf("2. Feet to Meters\n");
    printf("3. Meters to Kilometers\n");
    printf("4. Kilometers to Meters\n");
    printf("5. Centimeters to Meters\n");
    printf("6. Meters to Centimeters\n");
    printf("7. Centimeters to Kilometers\n");
    printf("8. Kilometers to Centimeters\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    printf("Enter the value to convert: ");
    scanf("%f", &value);
    
    switch(choice) {
        case 1:
            result = meters_to_feet(value);
            printf("%f meters is %f feet\n", value, result);
            break;
        case 2:
            result = feet_to_meters(value);
            printf("%f feet is %f meters\n", value, result);
            break;
        case 3:
            result = meters_to_kilometers(value);
            printf("%f meters is %f kilometers\n", value, result);
            break;
        case 4:
            result = kilometers_to_meters(value);
            printf("%f kilometers is %f meters\n", value, result);
            break;
        case 5:
            result = centimeters_to_meters(value);
            printf("%f centimeters is %f meters\n", value, result);
            break;
        case 6:
            result = meters_to_centimeters(value);
            printf("%f meters is %f centimeters\n", value, result);
            break;
        case 7:
            result = centimeters_to_kilometers(value);
            printf("%f centimeters is %f kilometers\n", value, result);
            break;
        case 8:
            result = kilometers_to_centimeters(value);
            printf("%f kilometers is %f centimeters\n", value, result);
            break;
        default:
            printf("Invalid choice, please try again.\n");
    }
}

void convert_weight() {
    int choice;
    float value, result;
    
    printf("Weight Conversion:\n");
    printf("1. Kilograms to Grams\n");
    printf("2. Grams to Kilograms\n");
    printf("3. Pounds to Kilograms\n");
    printf("4. Kilograms to Pounds\n");
    printf("5. Ounces to Grams\n");
    printf("6. Grams to Ounces\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    printf("Enter the value to convert: ");
    scanf("%f", &value);
    
    switch(choice) {
        case 1:
            result = kg_to_grams(value);
            printf("%f kilograms is %f grams\n", value, result);
            break;
        case 2:
            result = grams_to_kg(value);
            printf("%f grams is %f kilograms\n", value, result);
            break;
        case 3:
            result = pounds_to_kg(value);
            printf("%f pounds is %f kilograms\n", value, result);
            break;
        case 4:
            result = kg_to_pounds(value);
            printf("%f kilograms is %f pounds\n", value, result);
            break;
        case 5:
            result = ounces_to_grams(value);
            printf("%f ounces is %f grams\n", value, result);
            break;
        case 6:
            result = grams_to_ounces(value);
            printf("%f grams is %f ounces\n", value, result);
            break;
        default:
            printf("Invalid choice, please try again.\n");
    }
}

void convert_temperature() {
    int choice;
    float value, result;
    
    printf("Temperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    printf("Enter the value to convert: ");
    scanf("%f", &value);
    
    switch(choice) {
        case 1:
            result = celsius_to_fahrenheit(value);
            printf("%f Celsius is %f Fahrenheit\n", value, result);
            break;
        case 2:
            result = fahrenheit_to_celsius(value);
            printf("%f Fahrenheit is %f Celsius\n", value, result);
            break;
        case 3:
            result = celsius_to_kelvin(value);
            printf("%f Celsius is %f Kelvin\n", value, result);
            break;
        case 4:
            result = kelvin_to_celsius(value);
            printf("%f Kelvin is %f Celsius\n", value, result);
            break;
        case 5:
            result = fahrenheit_to_kelvin(value);
            printf("%f Fahrenheit is %f Kelvin\n", value, result);
            break;
        case 6:
            result = kelvin_to_fahrenheit(value);
            printf("%f Kelvin is %f Fahrenheit\n", value, result);
            break;
        default:
            printf("Invalid choice, please try again.\n");
    }
}

void convert_volume() {
    int choice;
    float value, result;
    
    printf("Volume Conversion:\n");
    printf("1. Liters to Milliliters\n");
    printf("2. Milliliters to Liters\n");
    printf("3. Liters to Cubic Meters\n");
    printf("4. Cubic Meters to Liters\n");
    printf("5. Liters to Gallons\n");
    printf("6. Gallons to Liters\n");
    printf("7. Liters to Fluid Ounces\n");
    printf("8. Fluid Ounces to Liters\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    printf("Enter the value to convert: ");
    scanf("%f", &value);
    
    switch(choice) {
        case 1:
            result = liters_to_milliliters(value);
            printf("%f liters is %f milliliters\n", value, result);
            break;
        case 2:
            result = milliliters_to_liters(value);
            printf("%f milliliters is %f liters\n", value, result);
            break;
        case 3:
            result = liters_to_cubic_meters(value);
            printf("%f liters is %f cubic meters\n", value, result);
            break;
        case 4:
            result = cubic_meters_to_liters(value);
            printf("%f cubic meters is %f liters\n", value, result);
            break;
        case 5:
            result = liters_to_gallons(value);
            printf("%f liters is %f gallons\n", value, result);
            break;
        case 6:
            result = gallons_to_liters(value);
            printf("%f gallons is %f liters\n", value, result);
            break;
        case 7:
            result = liters_to_fluid_ounces(value);
            printf("%f liters is %f fluid ounces\n", value, result);
            break;
        case 8:
            result = fluid_ounces_to_liters(value);
            printf("%f fluid ounces is %f liters\n", value, result);
            break;
        default:
            printf("Invalid choice, please try again.\n");
    }
}

// Conversion function definitions

// Length
float meters_to_feet(float meters) {
    return meters * 3.28084;
}

float feet_to_meters(float feet) {
    return feet / 3.28084;
}

float meters_to_kilometers(float meters) {
    return meters / 1000;
}

float kilometers_to_meters(float kilometers) {
    return kilometers * 1000;
}

float centimeters_to_meters(float centimeters) {
    return centimeters / 100;
}

float meters_to_centimeters(float meters) {
    return meters * 100;
}

float centimeters_to_kilometers(float centimeters) {
    return centimeters / 100000;
}

float kilometers_to_centimeters(float kilometers) {
    return kilometers * 100000;
}

// Weight
float kg_to_grams(float kg) {
    return kg * 1000;
}

float grams_to_kg(float grams) {
    return grams / 1000;
}

float pounds_to_kg(float pounds) {
    return pounds * 0.453592;
}

float kg_to_pounds(float kg) {
    return kg / 0.453592;
}

float ounces_to_grams(float ounces) {
    return ounces * 28.3495;
}

float grams_to_ounces(float grams) {
    return grams / 28.3495;
}

// Volume
float liters_to_milliliters(float liters) {
    return liters * 1000;
}

float milliliters_to_liters(float milliliters) {
    return milliliters / 1000;
}

float liters_to_cubic_meters(float liters) {
    return liters / 1000;
}

float cubic_meters_to_liters(float cubic_meters) {
    return cubic_meters * 1000;
}

float liters_to_gallons(float liters) {
    return liters * 0.264172;
}

float gallons_to_liters(float gallons) {
    return gallons / 0.264172;
}

float liters_to_fluid_ounces(float liters) {
    return liters * 33.814;
}

float fluid_ounces_to_liters(float fluid_ounces) {
    return fluid_ounces / 33.814;
}

// Temperature
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

float celsius_to_kelvin(float celsius) {
    return celsius + 273.15;
}

float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheit_to_kelvin(float fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

float kelvin_to_fahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

