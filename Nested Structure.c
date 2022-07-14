#include<stdio.h>

struct interest{
	float principal;
	
	struct{
		float year;
		float month;
		float day;
	} time;
	float rate;
};

int main(){
	struct interest amt;
	
	amt.principal = 100000.0;
	amt.rate = 12;
	
	amt.time.year = 2.0;
	amt.time.month = 4.0;
	amt.time.day = 14.0;
	
	float total_year;
	total_year = amt.time.year + (amt.time.month/12.0) + (amt.time.day/365.0);
	
	float simple_interest;
	
	simple_interest = (amt.principal * total_year * amt.rate)/100;
	
	printf("Total interest amount is %.2f", simple_interest);
	
	return 0;
}
