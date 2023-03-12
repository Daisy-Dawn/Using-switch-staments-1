#include <stdio.h>
#include <stdlib.h>

//This program uses switch statement and implementing the range to find the grade of students

int main(void) 
{
  int grade;

  printf("Welcome to Holberton School Result portal\nPlease enter your Mark:\t");
  scanf("%d", &grade);

  switch (grade)
    {
      case 80 ... 100:
      printf("Your grade is A\nWhat an excellent performance dear student, Soar higher!!!\n");
      break;

      case 70 ... 79:
      printf("Your grade is B\nIndeed applaudable, keep it up my dear\n");
      break;

      case 60 ... 69:
      printf("Your grade is C.\nNice result, more improvement needed\n");
      break;

case 50 ... 59:
      printf("Your grade is D\nWork harder!\n");
      break;

case 40 ... 49:
      printf("Your grade is E.\nPlease do better!!\n");
      break;

      case 0 ... 39:
      printf("What a shameful performance.\nYou really need to buckle up\n");
      break;

default:
        printf("Invalid Input\n");
    }

  printf("\nEnd of program\n");
  sleep(10);
  system("clear");
  printf("Welcome User\n");
  
  return 0;
}