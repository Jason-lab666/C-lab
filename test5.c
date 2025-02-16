#include <stdio.h>

int main() {

int *myarr = NULL;
myarr= (int*)malloc(N* sizeof(int));

if (myarr==NULL){

    printf("Failed");
    return 1;
}


FILE* mystream=NULL;
mystream=fopen("inputFile.txt","w");

if (mystream==NULL){
    printf("ERROR");
    return 2 ;

}




return 0 ;

      
}
