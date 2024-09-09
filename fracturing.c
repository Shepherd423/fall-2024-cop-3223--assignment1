#include <stdio.h>
#include <math.h>

// Defining PI throughout the code to be a value as a constant
#define PI 3.14159 

// These are the function prototypes, they will be used later in the code
int main(int arqc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();
double evaluateDistance(double x1, double y1, double x2, double y2);

// This is the main function of the code
int main(int arqc, char **argv) 
{
    // calculates the distance of the two coordinates the user inputs
    double distance = calculateDistance();

    // calls the other functions, perimeter, area etc. also needed this for the return difficulty
    double perimeterDifficulty = calculatePerimeter(distance);
    double areaDifficulty = calculateArea(distance);
    double widthDifficulty = calculateWidth(distance);
    double heightDifficulty = calculateHeight(distance);

    //prints out the difficulty score
    printf("Perimeter Difficulty: %.1f\n", perimeterDifficulty);
    printf("Area Difficulty: %.1f\n", areaDifficulty);
    printf("Width Difficulty: %.1f\n", widthDifficulty);
    printf("Height Difficulty: %.1f\n", heightDifficulty);

    // returns o after a success
    return 0;
}
// ask the user for the input numbers
double askForUserInput() {
    double input;
    scanf("%lf", &input); // stores input
    return input;
}

//starts the funtion to calculate distance between two points. those points as x1,y1,x2,y2
double calculateDistance() {
    double x1, y1, x2, y2;

//ask the user for the value of the first x then the second x and same for the y's
    printf("Please enter the x value for the first coordinate: ");
    x1 = askForUserInput();

    printf("Please enter the x value for the second coordinate: ");
    x2 = askForUserInput();

    printf("Please enter the y value for the first coordinate: ");
    y1 = askForUserInput();

    printf("Please enter the y value for the second coordinate: ");
    y2 = askForUserInput();
    
    // calculating the distance
    double distance = evaluateDistance(x1, y1, x2, y2);

    // prints out the first coordinates and then the second coordinates to teh user
    printf("First coordinates entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Second coordinates entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The evaluated distance between the two coordinates are %.2f\n", distance);

    return distance; //distance stored
}

// helper function, this is a equation to calculate distance between two points
double evaluateDistance(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
// equation to calculate perimeter
double calculatePerimeter() {
    double perimeter = PI * distance;

    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);

    return 2.0;
}
// this is the equation to find the area with the stored distance calculated earlier
double calculateArea() {
    double diameter = distance;
    double area = (PI * pow(diameter, 2))/ 4;
    
    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 3.5;
}

// the width is the distance
double calculateWidth() {
    printf("The width of the city encompassed by your request is %.2f\n", distance);

    return 2.0;
}
// the height is the distance
double calculateHeight() {
    printf("The height of the city encompassed by your request is %.2f\n", distance);

    return 2.5;
}


