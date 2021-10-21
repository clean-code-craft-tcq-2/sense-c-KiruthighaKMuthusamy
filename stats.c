#include "stats.h"
#include "stdio.h"
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
    s.average = NAN;
    s.min = NAN;
    s.max = NAN;
	}
else
{
	s.average = total / setlength;
}
return s;}

void check_and_alert(float maxThreshold,alerter_funcptr alerters, Stats computedStats)
{
	if(computedStats.max > maxThreshold)
	{
		alerters();
		printf("%d",alerters[0]);
		
	}
	
}

