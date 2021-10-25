Write a program to find the weight of the camel given height, length and stomach radius. 
weight = pi * stomach_raduius^3 * sqrt(height * length). 
using four functions and following function signatures. 5 marks 
struct camel { 
  float radius, height, length,weight; 
}; 
typedef struct camel Camel; 
Camel input(); 
float find_weight(Camel c); 
/*void find_weight(Camel *c); */ 
void output(Camel c); and 
int main()

#include <stdio.h>
#include <math.h>
#define PI 3.1415


Camel input()
{
  Camel c;
  printf("Enter radius, height, length of a camel\n");
  scanf("%f%f%f",&c.radius, &c.height, &c.length);
  return c;
 }
 
 float find_weight(Camel c)
 {
     float weight;
     weight = PI * c.radius * sqrt(c.height * c.length);
     return weight;
 }
 
 void output(Camel c) 
 {
      printf("The weight of the camel with radius = %f, height = %f, lenght = %f is %f\n",c.radius, c.height, c.lenght, c.weight);
 }
 
 
 int main()
 {
    Camel c;
    c=input();
    c.weight = find_weight(c);
    output(c);
    return 0;
 }
 
 
