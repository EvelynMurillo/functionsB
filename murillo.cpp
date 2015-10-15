//Evelyn Murillo
// October 12, 2015
//Functions!

#include <iostream>
#include<cassert>
#include<cctype>


using namespace std;
double feetToInches(double val);
void feetToInche(double& val);
double rectangleArea(double valA, double valB);
void rectangleArea(double valA, double valB, double& valC);
void computeRectangle(double valA, double valB, double& valArea, double& valPerimeter);
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
void calcAreaPerimeter(double radius, double& area, double& perimeter);
double calcArea(double length, double width);

int main()
 {     
      
  
 
  
    
    double feet = 2.0;
  
    cout << "There is  " << feetToInches(4.0) << " inches in 4 feet." << endl;
    
    cout << "Feet " << feet << endl;
    feetToInche(feet);
    cout << "Conversions " << feet << endl;
   
    //finding the area of a rectangle 
    
    cout << rectangleArea(2.0, 5.0) << endl;
    
    double sideA = 3.0;
    double sideB = 4.0;
    double areaC = 3.0;
    
    cout << areaC << endl;
    rectangleArea(sideA, sideB, areaC);
    cout << areaC << endl;
   
    //computing the area and perimeter of a rectangle
    
    double sideD = 4.0;
    double sideE = 5.0;
    double areaF = 0.0;
    double perimeter = 0.0;
    
    cout << "Area: " << areaF << endl;
    cout << "Perimeter: " << perimeter << endl;
    computeRectangle(sideD, sideE, areaF, perimeter);
    cout << "Area: " << areaF << endl;
    cout << "Perimeter: " << perimeter << endl;
    
    
    //calculating the sum and average of a set of numbers
    
    double statA = 4.0;
    double statB = 6.0;
    double statC = 10.0;
    double statD = 14.0;
    double sum = 3.0;
    double average = 4.0;
    
    cout << "Initial sum of parameters: " << sum << endl;
    cout << "Initial average of parameters: " << average << endl;
    stats(statA, statB, statC, statD, sum, average);
    cout << "sum of parameters: " << sum << endl;
    cout << " average of parameters: " << average << endl;
    
    // calculates the area and circumference (perimeter) of a circle
    double radius = 3.0;
    double circleArea = 3.0;
    double circlePerimeter = 3.0;
    
    cout << " area of  circle: " << circleArea << endl;
    cout << " perimeter of  circle: " << circlePerimeter << endl;
    calcAreaPerimeter(radius, circleArea, circlePerimeter);
    cout << "area of  circle: " << circleArea << endl;
    cout << "perimeter of  circle: " << circlePerimeter << endl;
    
    //calculates area of a square or rectangle
    cout << "Area: " << calcArea(9.0, 10.0) << endl;
    
    
    
    return 0;
}
double feetToInches(double val)
{
   double convert;
   convert = (val * 12.0);
   return convert;
    
}

void feetToInche(double&  val)//pass by refrence 
{
     val = (val * 12.0);
     return;
}

double rectangleArea(double valA, double valB)
{
    double area = valA * valB;
    return area;
}



void rectangleArea(double valA, double valB, double& valC)
{
    valC = valA * valB;
    return;
}


void computeRectangle(double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = valA * valB;
    valPerimeter = (valA * 2 ) + ( valB * 2 );
    return;
}


void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = (valA + valB + valC + valD);
    valF = (valE / 4.0);
    return;
}

void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    area = ((radius * radius ) * 3.14);
    perimeter = ((2 * 3.14) * radius);
    return;
}

double calcArea(double length, double width)
{
    double area = (length * width);
    return area;
}
