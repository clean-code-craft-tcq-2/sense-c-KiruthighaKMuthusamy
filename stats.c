
#include<stdio.h>
#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
Stats compute_statistics(const float* numberset, int setlength) {
	Stats s;
	s.average = 0;
    s.min = numberset[0];
    s.max = numberset[0];
	float total = 0.0;
	
	for (int i=0;i<setlength;i++)
	{
	total+=	numberset[i] ;
	if (s.min > numberset[i])
	{
		s.min = numberset[i];
	}
	if (s.max < numberset[i])
	{
		s.max = numberset[i];
	}
	}
	//Testcase2:
	if ((setlength == 0 )|| (total == 0.0))
	{
		printf("ashok");
    s.average = NAN;
    s.min = NAN;
    s.max = NAN;
		printf("Naveen");
		printf("%d",s.average);
	}
else
{
	printf("Kirutghigha");
	s.average = total / setlength;
}
return s;}

void emailAlerter()
{	
	 emailAlertCallCount = 1;
}
void ledAlerter()
{
 ledAlertCallCount = 1;
}

void check_and_alert(float maxThreshold,alerter_funcptr alerters, Stats computedStats)
{
	if(computedStats.max > maxThreshold)
	{
		alerters();
			
	}
	
}

