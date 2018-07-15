#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv) {

  puts("MinCLisp Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  while (1) {
    char* input = readline("mincl> ");

    add_history(input);

    printf("Echo: %s\n", input);

    free(input);
  }

  return 0;
}
