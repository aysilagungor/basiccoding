#include <stdio.h>

int main(void) {
float x,y,fxy;
printf("x değerini giriniz -> "); scanf("%f", &x);printf("y değerini giriniz -> "); scanf("%f", &y);


if (x>=0)
if(y>=0)
        {fxy = x*y; printf("x=%.2f ve y=%.2f oldugunda fonk. degeri= %.2f olur.\n\n",x,y,fxy);}
  else

        {fxy=x+y; printf("x=%.2f ve y=%.2f oldugunda fonk. degeri= %.2f olur.\n\n",x,y,fxy);}
    else
    if(y>=0) {
    fxy = y-x; printf("x=%.2f ve y=%.2f oldugunda fonk. degeri= %.2f olur.\n\n",x,y,fxy);}

    else
     printf("sartlar saglanmadigi icin fonk degeri bulunamadi.\n\n");

    return 0;
}
