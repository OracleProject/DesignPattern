#pragma once
#include<iostream>

using namespace std;

class entry {

public:
	virtual string getName() = 0;
	virtual double getSize() = 0;
	virtual void add(entry* en) = 0;
	virtual void printList() = 0;
};