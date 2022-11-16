#include <stdio.h>  
  int main(void)
{  
    int y = 233;  
    printf("y = %d\n", y);  
    add_one(&y);  
    printf("y = %d\n", y);  
    return 0;  
}  
