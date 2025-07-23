#include <stdio.h>
int main() {
  char name[100];
  printf("What is your name ");
  fgets(name, sizeof(name), stdin);
  printf("hello, %s ", name);
  return 0;
}
