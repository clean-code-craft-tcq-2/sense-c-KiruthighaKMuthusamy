#include "stats.h"
#include "count.h"

extern int emailAlertCallCount;
extern int ledAlertCallCount;

void emailAlerter()
{	
	 emailAlertCallCount = 1;
}
void ledAlerter()
{
 ledAlertCallCount = 1;
}
