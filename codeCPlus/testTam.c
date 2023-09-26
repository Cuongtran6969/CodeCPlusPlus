#include <stdio.h>
void *foo(char str[], int k) {
  str[k] = '\0';
}
int main()
{
    char str[] = "abcde";
    foo(str, 3);
    printf("%s", str);
    
}
