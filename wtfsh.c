#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *line = readline("$ ");
  printf("%s: wtf!\n", line);
  exit(0);
}
