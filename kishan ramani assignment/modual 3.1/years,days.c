//* program to convert given days to years
#include<stdio.h>
void main(){
        int td,y,m,d;
        printf("enter the number of days=");
        scanf("%d",&td);
        y=td/365;
        m=(td%365)/30;
        d=(td%365);
        
        printf("years=%d\n month=%d\n days=%d",y,m,d);
        
        
return 0;
}
