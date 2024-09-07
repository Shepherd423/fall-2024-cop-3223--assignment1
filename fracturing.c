#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(int argc, char **argv);
double calculateDistance();
//double calculatePerimeter();
//double calculateArea();
//double calculateWidth();
//double calculateHeight();
double askForUserInput();

double evaluateDistance(double x1, double y1, double x2, double y2);

int main(int argc, char **argv) 
{
    calculateDistance();
   // calculatePerimeter();
   // calculateArea();
   // calculateWidth();
   // calculateHeight();

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