#include <stdio.h>

int main(void)
{
  char *name = malloc(10 * sizeof(char));  
  printf("Enter your name: ");
  scanf("%c\n", name);
  printf("Hello, %c\n" name);
}
