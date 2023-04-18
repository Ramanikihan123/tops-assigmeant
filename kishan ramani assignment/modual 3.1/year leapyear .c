#include<stdio.h>
int main(){
	//1) 1200 1600 2000 2400 etc
	//2) 2012 2016 2020...2026 and
	//3) 2100 2200 2300 2500
	int y;
	printf("enter any year:");
	scanf("%d",&y);
	if(y%400==0||y%4==0&&y%100!=0)
	{
		printf("year is leapyear");
		
	}
	else
	{
		printf("year is not leapyear");
		
	}
	return 0;
}
