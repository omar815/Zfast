#include <stdio.h>
int main()
{
 int num, a, b, c, d;
 // Input number from user
 printf("\n Enter any number: ");
 scanf("%d", &num);
 /* Input bit position you want to set */
  printf("\n Enternth bit to set (0-31): ");
  scanf("%d", &a);
  num |= (1 << a);
  /* Input bit position you want to clear */
  printf("\n Enternth bit to clear (0-31): ");
  scanf("%d", &b);
  b = 1 << b;
  b = ~(b);
  num = num &b;
  /* Input bit position bit want to Toggle */
  printf("\n Enternth bit to Toggle (0-31): ");
  scanf("%d", &c);
  num = num ^ (1 << c);
  /* Input bit position bit want to read */
  printf("\n Enternth bit to read (0-31): ");
  scanf("%d", &c);
  d = 1 << d;
  num = num &d;
  printf("\n Number after set %d.", num);
  return 0;
} 