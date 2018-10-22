
int testParameters[][10] = {
	{ 4, 1600, 2010, 1900, 1501, },
	// TODO: 
	{ 7, 500, 2100, 1600, 0, 1900, 1801, 2000 },
	{ 7, 500, 2100, 1600, 0, 1900, 1600, 2100 },
	{ 7, 500, 2100, 1600, 0, 1900, 1900, 2100 },
};

#include "detector.h"
/*
* detector.h

int detectOverload()
{
static int count = 0;
int value = getCurrentLoad();

if (value > 2000)
{
count += 5;
}
else if (value > 1800)
{
count += 3;
}
else if (value > 1500)
{
count += 2;
}
else
{
count = 0;
}

return (count > 10) ? 1 : 0;
}
*/



static int fakeCurrent;

static void setFakeCurrentLoad(int current)
{
	fakeCurrent = current;
}


int getCurrentLoad()
{
	// TODO: 

	//return 0; // FIXME: 
	return fakeCurrent;
}


void test_2_1()
{
	// TODO: 
	setFakeCurrentLoad(1600);
	detectOverload();

	setFakeCurrentLoad(2000);
	detectOverload();

	setFakeCurrentLoad(0);
	detectOverload();

	setFakeCurrentLoad(2100);
	detectOverload();

}

void test_2_2()
{
	// TODO: 
	setFakeCurrentLoad(1600);
	detectOverload();

	setFakeCurrentLoad(2000);
	detectOverload();

	setFakeCurrentLoad(0);
	detectOverload();

	setFakeCurrentLoad(2100);
	detectOverload();

	detectOverload();

	setFakeCurrentLoad(1600);
	detectOverload();
}


int main()
{
	printTestResults();  
	
	test_2_1();

	test_2_2();

	return 0;
}
