#include <stdio.h>
int main()
{
 int num, set, clear, Toggle, read, a, b, c, d, f;
 for(f = 0; f<5; f++) {
  // Input number from user
 printf("\n Enter any number: ");
 scanf("%d", &num);
 
  /* Input bit position you want to set */
  printf("\n Enternth bit to set (0-31): ");
  scanf("%d", &a);
  set = num | (1 << a);
  printf("\n number after set %d.", set);
  
  /* Input bit position you want to clear */
  printf("\n Enternth bit to clear (0-31): ");
  scanf("%d", &b);
  b = 1 << b;
  b = ~(b);
  clear = num &b;
  printf("\n number after set %d.", clear);
  
  /* Input bit position bit want to Toggle */
  printf("\n Enternth bit to Toggle (0-31): ");
  scanf("%d", &c);
  Toggle = num ^ (1 << c);
  
  printf("\n number after set %d.", Toggle);
  /* Input bit position bit want to read */
  printf("\n Enternth bit to read (0-31): ");
  scanf("%d", &c);
  d = 1 << d;
  read = num &d;
  printf("\n Number after set %d.", read);
 
 }
 return 0;
}