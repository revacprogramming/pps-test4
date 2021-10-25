/* Write a program to find the weight of the camel given height, 
length and stomach radius. weight = pi * stomach_raduius^3 * sqrt(height * length). 
using four functions and following function signatures. 5 marks
float input_radius(); 
float input_heigth(); 
float input_length(); 
float find_weight(float radius, float height, float length); 
void output(float radius, float height, float length, float weight); 
and int main() */

#include <stdio.h>
#include <math.h>
#define PI 3.1415
float input_radius()
{
   float radius;
   printf("Enter radius\n");
   scanf("%f",&radius);
   return radius;
}

float input_height()
{
   float height;
   printf("Enter height\n");
   scanf("%f",&height);
   return height;
}

float input_length()
{
   float length;
   printf("Enter length\n");
   scanf("%f",&length);
   return length;
}

float find_weight(float radius, float height, float length)
{
    float weight = PI * pow(radius,3) * sqrt(height * length);
    return weight;
}

void output(float radius, float height, float length, float weight)
{
    printf("The weight of the camel with stomach radius = %f, height = %f, length = %f is %f\n",radius, height, length, weight);
}

int main()
{
    float radius, height, length, weight;
    radius = input_radius();
    height = input_height();
    length = input_lenght();
    weight = find_weight(radius, height, length);
    output(radius, height, lenght, weight);
    return 0;
}
    

