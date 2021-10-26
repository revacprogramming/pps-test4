/*
Strings Write a program to find if the name of the camel is a nice name. 
Camels name is nice if it has at least 2 vowels and 2 consonants in it. with four functions - 5 marks.
*/
#include <stdio.h>
#include <math.h>
#define PI 3.1415

struct camel { 
  char name[40];
  float radius, height, length, weight; 
}; 
typedef struct camel Camel; 

 
Camel input()
{
  Camel c;
  printf("Enter radius, height, length of a camel\n");
  scanf("%f%f%f",&c.radius, &c.height, &c.length);
  printf("Enter name of the camel\n");
  scanf("%s",c.name);
  return c;
 }

int isvowel(char c)
{
  if( c=='a' || c == 'A' ||
      c=='e' || c == 'E' ||
      c=='i' || c == 'I' ||
      c=='o' || c == 'O' ||
      c=='u' || c == 'U)
     return 1;
  return 0;
     }
       
 
int check_name_nice(Camel c) 
{
  int consonant_count=0;
  int vowel_count=0;
  for(int i=0; c.name[i] != '\0'; i++)
  {
       if( isvowel(c.name[i]) ) {
           vowel_count++;
       }
       else {
           consonant_count++;
       }
  }
  if( vowel_count >= 2 && consonant_count >= 2) {
          return 0;
  }
  return 1;
}
     
void output(Camel c, int is_nice)
{
    if(is_nice == 0 ) {
      printf("Camel with name %s has a nice name\n",c.name);
    }
    else {
      printf("Camel with name %s has a not so nice name\n",c.name);
    }
}
 
 int main()
 {
    Camel c;
    c=input();
    int isnice= check_name_nice(c);
    output(c,isnice);
    return 0;
 }

