#include <stdio.h>
#define MSG_LEN 80     /* maximum length of message */
int main(void)
{
  char msg[MSG_LEN], *p;

  printf("Enter a message: ");
  for (p = &msg[0]; p < &msg[MSG_LEN]; p++) {
    *p = getchar();
    if (*p == '\n')
      break;
  }

  printf("Reversal is: ");
  for (p--; p >= &msg[0]; p--)
    putchar(*p);
  putchar('\n');

  return 0;
}
