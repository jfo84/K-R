#include <stdio.h>

/* copy input to output */
main() {
  int c;

  /* EOF (end of file) is provided by STDIO.
  Returns the character from the file or -1
  if no value */
  while (c = getchar(); != EOF)
    putchar(c);
}
