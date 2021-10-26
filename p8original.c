#include <stdio.h>
#include <math.h>
#define PI 3.1415

struct camel{ 
  float radius, height, length,weight; 
};
typedef struct camel Camel; 

Camel input()
{
  Camels c;
  printf("Enter radius, height, length, number of the camels\n");
  scanf("%f%f%f", &c.radius, &c.height, &c.length);
  return c;
}

void input_n_camels(int n, Camel c[n])
{
   for(int i = 0; i < n; i++ ) {
      c[i] = input();
}

void find_weight(Camel *c)
{
  c->weight = PI * c->radius * sqrt(c->height * c->length);
}

void comput_total_weight(int n, Camels c[n], float truckWeight)
{
    float totalweight = 0;
    for(int i=0;i<n;i++) {
        find_weight(&c[i]);
        totalweight += c[i].weight;
    }
    totalweight += truckweight;
    return totalweight;
}

void output(float totalweight)
{
    printf("The weight of the truck with Camels  is %f\n", toatalweight);
}

int main()
{
    float truckweight;
    printf("Enter the weight of the truck\n");
    scanf("%f", &truckweight);
    int n;
    printf("Enter the number of camels\n");
    Camels c[n];
    c = input_n_camels(n,c);
    float toatalWeight = comput_total_weight(n,c,truckWeight);
    output(truckWeight);
    return 0;
}
 
