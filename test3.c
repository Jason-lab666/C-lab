#include <stdio.h>
#include <string.h>

enum Size{
    S=27,
    M=31,
    L=35,
    XL=40,

};

int main (){

    enum Size shoesize1=S;
    enum Size shoesize2=M;
    enum Size shoesize3=L;
   

   printf("%d",shoesize1);
printf("%d",shoesize2);
    return 0 ;

      
}
