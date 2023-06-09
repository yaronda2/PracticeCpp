/*
 * SimplemystuckTest.cpp
 *
 *  Created on: 1 Jun 2023
 *      Author: yaron
 */

#include "SimpleStuck.h"
#include <iostream>

using namespace std;
using namespace hrd24;

struct limits
{
    int min;
};

int main()
{
	limits mydata ;
	mydata.min = 0;
	SimpleStuck <limits>mystuck1;

	bool res = false;

	for(int i = 0; i < 5 ; ++i)
	{
		++mydata.min;
		mystuck1.Push(mydata);

	}

	if(mystuck1.size() != 5 || mystuck1.Peek().min != 5)
	{
		res = true;
		cout << "mystuck step1 fail" << endl;
	}

	mystuck1.Pop();

	if(mystuck1.size() != 4 || mystuck1.Peek().min != 4)
	{
		res = true;
		cout << "mystuck step2 fail" << endl;
	}

	mystuck1.Pop();
	mystuck1.Pop();
	mystuck1.Pop();

	if(mystuck1.size() != 1 || mystuck1.IsEmpty() != false)
	{
		res = true;
		cout << "mystuck step3 fail" << endl;
	}

	mystuck1.Pop();
	if(mystuck1.IsEmpty() != true)
	{
		res = true;
		cout << "mystuck step3 fail" << endl;
	}

	if(!res)
	{
		cout << "Test Pass !!!" << endl;
	}

}


