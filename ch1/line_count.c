#include <stdio.h>

/* count lines in input */
main() {
  int c, nl;

  nl = 0;
  while ((c = getchar()), != EOF)
    /* '\n' is a character constant, i.e. the
    integer representation of the ASCI character
    for new-line */
    if (c == '\n')
      ++nl;
  printf("%d\n", nl);
}
