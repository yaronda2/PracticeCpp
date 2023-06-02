/*
 * SimpleStuck.cpp
 *
 *  Created on: 1 Jun 2023
 *      Author: yaron
 */

#include "SimpleStuck.h"

SimpleStuck::SimpleStuck() {
	// TODO Auto-generated constructor stub

}

SimpleStuck::~SimpleStuck() {
	// TODO Auto-generated destructor stub
}

bool SimpleStuck::IsEmpty()
{
	return storage.empty();
}

void SimpleStuck::Push(int num)
{
	storage.push_back(num);
}

void SimpleStuck::Pop()
{
	storage.pop_back();
}

int SimpleStuck::Peek()
{
	return storage.back();
}

int SimpleStuck::size()
{
	return storage.size();
}
