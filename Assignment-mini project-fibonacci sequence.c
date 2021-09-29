//code to find fibonacci number upto 2000
// Tinku Moni Kalita(2012042)
#include <stdio.h>
#define MAX 4500
void add(char num1[], char num2[], char result[])
{
  int carry = 0;
  for (int i = MAX - 1; i >= 0; i--)
  {
    int digit = (num1[i] - '0') + (num2[i] - '0') + carry;
    result[i] = (digit % 10) + '0';
    carry = digit / 10;
  }
}

void copy2on1(char num1[], char num2[])
{
  for (int i = MAX - 1; i >= 0; i--)
    num1[i] = num2[i];
}

char fibo1[MAX];
char fibo2[MAX];
char result[MAX];

int main()
{

  for (int i = 0; i < MAX; i++)
  {
    fibo1[i] = fibo2[i] = result[i] = '0';
  }
  fibo2[MAX - 1] = '1';

  int n;
  scanf("%d", &n);

  if (n == 0 || n == 1)
  {
    printf("%c", n + '0');
  }
  else
  {
    for (int i = 2; i <= n; i++)
    {
      add(fibo1, fibo2, result);
      copy2on1(fibo1, fibo2);
      copy2on1(fibo2, result);
    }

    int numStart = 0;
    for (int i = 0; i < MAX; i++)
    {
      if (numStart == 0 && result[i] == '0')
        continue;

      if (numStart == 0 && result[i] != '0')
        numStart = 1;
      printf("%c", result[i]);
    }
    printf("\n");
  }
  return 0;
}
© 2021 GitHub, Inc.
