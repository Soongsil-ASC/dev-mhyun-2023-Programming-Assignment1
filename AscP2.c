#include <stdio.h>
#include <string.h>

long toBin(int);

int main(){
    long bno;
    int dno;
    printf("====================================================\n");
    printf("\tFunction : convert decimal to binary\n");
    printf("====================================================\n");    
    printf("Decimal Number : ");
    scanf("%d", &dno);
    bno = toBin(dno);
    printf("The Binary value is : %ld\n\n",bno);
    return 0;
}

long toBin(int dno){
    int storage=0;
    int rs=0;
    while(dno!=0){
        if(dno%2==1) storage = storage*10 +1;
        else if(dno%2==0) storage *= 10;
        dno /= 2;
        if(dno==1){
            storage = storage*10 +1;
            dno = 0;
        }
    }
    while(storage!=0){
        rs =(rs*10)+storage%10;
        storage /= 10;
        if(storage==1){
            rs = rs*10 +1;
            storage=0;
        }
    }
    return rs;
}