#include "myMath.h"
#define e 2.71828237

double Pow(double x , int y)
{
int i = 0 ;
double ans = 1;
while( i < y)
	{
		ans = ans * x ;
		i++;
	}
return ans ;
}
double Exp(int x)
{
int i = 0 ;
double ans = 1 ;
while( i < x)
	{
		ans= ans*e;
		i++;
	}

return ans;
}
