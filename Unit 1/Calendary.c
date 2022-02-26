#include <stdio.h>
#include <stdbool.h>
/*
This code will print the entire calendary of the year you decide to select.
There are a few things we have to consider: 
 - Leap years. Every 4 years is a leap year. 2020 was a leap year therefore, if the remainder of the year/4 is 0, it is a leap year.
 - Days. A quick calculation. Every 4 years, there are 1,461 days. That means, from year the start of year 1 to the end of 2020, there was a total of 505*1461=737,805 days. 
 This is 105,400.71 weeks, or 105,400 weeks and 5 days. January 1st 2021 was a friday, therefore, january 1st of the year 1 was a saturday (friday is the 6th day of the week). 
We'll use this calculation to describe the day of the week.

*/
int howManyDaysBeforeYear(int a){
    int year = a-1;
    int DaysBeforeYear = 0;
    switch (year % 4)
    {
    case 0:
        DaysBeforeYear = (year/4)*1461;
        break;
    case 1:
        DaysBeforeYear = ((year-1)/4) * 1461 + 365;
        break;
    case 2:
        DaysBeforeYear = ((year-2)/4) * 1461 + 365 + 365;
        break;
    case 3:
        DaysBeforeYear = ((year-3)/4) * 1461 + 365 + 365 + 365;
        break;                
    default:
        break;
    }
}

int whatDayIsToday(int a){
    switch (a % 7)
    {
     case 0:
        printf("Friday");
        break;
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;    
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break; 
    case 5:
        printf("Wednesday");
        break;  
    case 6:
        printf("Thursday");
        break;                             
    default:
        break;
    }
}

int calendar(int b){
    int year = b;
    //The # of the first day of the year entered since year 1. 
    int daysSince1 = howManyDaysBeforeYear(year)+2;
    //To define the day of the week
    int dayInYear = daysSince1 % 7;
    //To define the limit of the print counter.
    int limitDay = dayInYear + 364; 
    //The day of the year.
    int day = 1;
    printf("\nCalendar of %d", year);

    for (dayInYear;dayInYear <= limitDay; dayInYear++ ){
        printf("\t %d|%d", dayInYear, day);
        day++;
    }
    return 0;
}



int main(){
    int year = 0;
    scanf("%d", &year);
    printf("%d \n\n\n\n",howManyDaysBeforeYear(year));
    calendar(year);
    return 0;
}