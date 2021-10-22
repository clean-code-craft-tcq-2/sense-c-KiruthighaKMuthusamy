
#include<stdio.h>
#include "stats.h"

//Testcase::("reports average, minimum and maximum")
Stats compute_statistics(const float* numberset, int setlength) 
{
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
	//Testcase:"average is NaN for empty array"
	if ((setlength == 0 ))
	{
		
       s.average = NAN;
	   s.min = NAN;
       s.max = NAN;
		
	}
	else
	{
	   s.average = total / setlength;
	}
	
return s;
}

//Testcase:"average is NaN for empty array"
Stats compute_statistics(const int numberset, int setlength)
 {
	 
	if ((setlength == 0 ) || (numberset == 0))
	{
		Stats s;
		s.average = NAN;
		s.min = NAN;
		s.max = NAN;
		return s;		
	}
	
}

