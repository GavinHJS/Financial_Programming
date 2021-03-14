#include <iostream>
#include <vector>
#include <string>
#include "Template.h"

//use valuetype so you don't have to specify each variable data type
template <class ValueType> class EuropeanOption
{
	ValueType r;	//interest rate
	ValueType sig;	//vol
	ValueType K;	//strike
	ValueType T;	//TTM
	ValueType s;	//Underlying price
	ValueType d;	//cost of carry

	std::string optType;

};

template <class Name, class Type> class Property
{
private:
	Name name;
	Type con;
public:
	Property();
	Property(const Name& name, const Type& t);

};

