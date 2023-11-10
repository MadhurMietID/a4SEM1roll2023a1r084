//Linear search program in C
#include <stdio.h>
int main()
{
  int search, c, n;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  int array[n];
  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
  {
    scanf("%d", &array[c]);
  }
  printf("Enter a number to search\n");
  scanf("%d", &search);
  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);
  return 0;
}

