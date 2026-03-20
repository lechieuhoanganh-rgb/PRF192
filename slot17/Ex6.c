#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  char names[10][50];
  char temp[50];

  // Read the number of students
  scanf("%d", &n);
  getchar(); // Consume the newline character left by scanf

  // Read each name
  for (int i = 0; i < n; i++) {
      fgets(names[i], sizeof(names[i]), stdin);
      names[i][strcspn(names[i], "\n")] = '\0'; // Remove trailing newline
  }

  // Print list before sorting (Optional, based on description)
  // printf("Before sorting:\n");
  // for(int i = 0; i < n; i++) printf("%s\n", names[i]);

  // Sorting Logic: Bubble Sort
  for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
          // If names[j] is alphabetically "greater" than names[j+1]
          if (strcmp(names[j], names[j+1]) > 0) {
              // Swap strings using strcpy
              strcpy(temp, names[j]);
              strcpy(names[j], names[j + 1]);
              strcpy(names[j + 1], temp);
          }
      }
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i = 0; i < n; i++) {
      printf("%s\n", names[i]);
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}