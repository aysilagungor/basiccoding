#include <stdio.h>

int main(void) {
float x,y,fxy; char deger=1;
printf("x degerini giriniz -> "); scanf("%f", &x);printf("y değerini giriniz -> "); scanf("%f", &y);


if (x>=0)
if(y>=0)
        fxy = x*y;
  else

        fxy=x+y;
    else
    if(y>=0)
    fxy = y-x;

    else
        deger=0;
     if (deger==1)

         printf("x=%.2f ve y=%.2f oldugunda fonk. degeri %2.f olur",x,y,fxy);
    else
     printf("sartlar saglanmadigi icin fonk degeri bulunamadi.\n\n");

return 0;
}
