#include <stdio.h>
#define MAXLINE 1000

char pattern[] = "ould"; /* pattern to match */

main()
{
  char line[MAXLINE];
  int found = 0;

  while (getlinec(line, MAXLINE) > 0)
    if (strindex(line, pattern) >= 0) {
      printf("%s", line);
      found++;
    }
  return found;
}

/* getline: get line into s, return length */
int getlinec(char line[], int max)
{
  int c, i;

  i = 0;
  while (--max > 0 && (c=getchar()) != EOF && c != '\n')
    line[i++] = c;
  if (c == '\n')
    line[i++] = c;
  line[i] = '\0';
  return i;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char source[], char searchFor[])
{
  int i, j, k;

  for (i = 0; source[i] != '\0'; i++) {
    for (j = i, k = 0, searchFor[k] != '\0' && source[j] == searchFor[k]; j++; k++)
      ;
    if (k > 0 && searchFor[k] == '\0')
      return i;
  }
  /* return a negative value to fail the conditional above */
  return -1;
}
