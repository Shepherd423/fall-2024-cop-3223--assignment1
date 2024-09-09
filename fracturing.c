#define PI 3.14159


#include <stdio.h>
#include <math.h>


int main(int arqc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();
double evaluateDistance(double x1, double y1, double x2, double y2);

int main(int arqc, char **argv) 
{
    double distance = calculateDistance();

    double perimeterDifficulty = calculatePerimeter(distance);
    double areaDifficulty = calculateArea(distance);
    double widthDifficulty = calculateWidth(distance);
    double heightDifficulty = calculateHeight(distance);

    printf("Perimeter Difficulty: %.1f\n", perimeterDifficulty);
    printf("Area Difficulty: %.1f\n", areaDifficulty);
    printf("Width Difficulty: %.1f\n", widthDifficulty);
    printf("Height Difficulty: %.1f\n", heightDifficulty);

    return 0;
}

double askForUserInput() {
    double input;
    scanf("%lf", &input);
    return input;
}

double calculateDistance() {
    double x1, y1, x2, y2;

    printf("Please enter the x value for the first coordinate: ");
    x1 = askForUserInput();

    printf("Please enter the x value for the second coordinate: ");
    x2 = askForUserInput();

    printf("Please enter the y value for the first coordinate: ");
    y1 = askForUserInput();

    printf("Please enter the y value for the second coordinate: ");
    y2 = askForUserInput();

    double distance = evaluateDistance(x1, y1, x2, y2);

    printf("First coordinates entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Second coordinates entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The evaluated distance between the two coordinates are %.2f\n", distance);

    return distance;
}

double evaluateDistance(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calculatePerimeter(double distance) {
    double perimeter = PI * distance;

    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);

    return 2.0;
}

double calculateArea(double distance) {
    double diameter = distance;
    double area = (PI * pow(diameter, 2))/ 4;
    
    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 3.5;
}

double calculateWidth(double distance) {
    printf("The width of the city encompassed by your request is %.2f\n", distance);

    return 2.0;
}

double calculateHeight(double distance) {
    printf("The height of the city encompassed by your request is %.2f\n", distance);

    return 2.5;
}


