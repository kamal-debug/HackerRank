#include <stdio.h>
void fun1(char *s1, char *s2) {
  char *temp;
  temp = s1;
  s1 = s2;
  s2 = temp;
}
void fun2(char **s1, char **s2) {
  char *temp;
  temp = *s1;
  *s1 = *s2;
  *s2 = temp;
}
int main() {
  char *str1 = "Hi", *str2 = "Bye";
  printf("%p\n",str1);
  printf("%c\n",*str2);
  //printf("%d\n",)

  fun1(str1, str2);
  printf("%s %s", str1, str2);
  fun2(&str1, &str2);
  printf("%s %s", str1, str2);
  return 0;
}