/*
 * SimpleStuckTest.cpp
 *
 *  Created on: 1 Jun 2023
 *      Author: yaron
 */

#include "SimpleStuck.h"
#include <iostream>

using namespace std;

int main()
{
	SimpleStuck stuck;
	bool res = false;

	for(int i = 0; i < 5 ; ++i)
	{
		stuck.Push(i);
	}

	if(stuck.size() != 5 || stuck.Peek() != 4)
	{
		res = true;
		cout << "stuck step1 fail" << endl;
	}

	stuck.Pop();

	if(stuck.size() != 4 || stuck.Peek() != 3)
	{
		res = true;
		cout << "stuck step2 fail" << endl;
	}

	stuck.Pop();
	stuck.Pop();
	stuck.Pop();

	if(stuck.size() != 1 || stuck.IsEmpty() != false)
	{
		res = true;
		cout << "stuck step3 fail" << endl;
	}

	stuck.Pop();
	if(stuck.IsEmpty() != true)
	{
		res = true;
		cout << "stuck step3 fail" << endl;
	}

	if(!res)
	{
		cout << "Test Pass !!!" << endl;
	}
	//readme
}


