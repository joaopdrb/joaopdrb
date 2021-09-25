#include <stdio.h>

int main(void)
{
  char *name = malloc(10 * sizeof(char));  
  printf("Enter your name: ");
  scanf("%s\n", name);
  printf("Hello, %s\n", name);
}
