
#include <stdio.h>
# define PI 3.14159265359
int main()
{
    int r= 4;
    printf("%d",area(r));

    return 0;
}

 int area (int x) {
      int area1 = (int)(PI*x*x);
      
      return area1;
  }
  
  
