#include <stdio.h>

int main(int argc, char* argv[])
{
  for (int i; i < argc; i++)
    {
      printf("%s \n", argv[i]);
      fputs(argv[i], stdout);
      printf("\n");
    }
  return 0;
}
