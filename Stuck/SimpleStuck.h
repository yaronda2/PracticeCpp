/*
 * SimpleStuck.h
 *
 *  Created on: 1 Jun 2023
 *      Author: yaron
 */
#include <iostream>
#include <list>

#ifndef SIMPLESTUCK_H_
#define SIMPLESTUCK_H_

using namespace std;

namespace hrd24
{

template<class T>
class SimpleStuck {

public:
	explicit SimpleStuck();
	virtual ~SimpleStuck();
	void Push(T name);
	void Pop();
	T Peek();
	bool IsEmpty();
	int size();

private:

	std::list<T> storage;

};

template<typename T> SimpleStuck<T>::SimpleStuck() {
	// TODO Auto-generated constructor stub

}

template <typename T> SimpleStuck<T>::~SimpleStuck() {
	// TODO Auto-generated destructor stub
}

template <typename T> bool SimpleStuck<T>::IsEmpty()
{
	return storage.empty();
}

template <typename T> void SimpleStuck<T>::Push(T num)
{
	storage.push_back(num);
}

template <typename T> void SimpleStuck<T>::Pop()
{
	storage.pop_back();
}

template <typename T> T SimpleStuck<T>::Peek()
{
	return storage.back();
}

template <typename T> int SimpleStuck<T>::size()
{
	return storage.size();
}
}
#endif /* SIMPLESTUCK_H_ */
