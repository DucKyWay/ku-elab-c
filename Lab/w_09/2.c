#include <stdio.h>

typedef enum {TUE, WED, THU, FRI, SAT, SUN, MON} DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
	int day_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int total = 0;
	for(int i = 0; i < month - 1; i++)
		total += day_in_month[i];
 	total += day - 1;

	return (DayOfWeek)((TUE + total) % 7);
}

int main() {
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case SUN: printf("Sunday.\n"); break;
		case MON: printf("Monday.\n"); break;
		case TUE: printf("Tuesday.\n"); break;
		case WED: printf("Wednesday.\n"); break;
		case THU: printf("Thursday.\n"); break;
		case FRI: printf("Friday.\n"); break;
		case SAT: printf("Saturday.\n"); break;
	}
}