#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <unistd.h>

int main(void) {
  char *newargv[] = {};
  char *newenv[] = { NULL };
  char *line = readline("$ ");
  execve(line, newargv, newenv);
  perror("WTF");
  exit(EXIT_FAILURE);
}
