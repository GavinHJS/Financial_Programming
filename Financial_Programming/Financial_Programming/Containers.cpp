#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <set>
#include <map>
#include "Containers.h"

void listPractice::practice() {
	std::list<int> list1;

	size_t n = 10;
	double val = 3.14;
	std::list<double> list2(n, val); //init list with n numbers of val

	std::list<double> list3(list2);

	std::cout << list1.size();

	//create an iterator to print out items in the list
	std::list<double>::const_iterator i;
	for (i = list2.begin(); i != list2.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

	std::list<double> list4;
	for (i = list2.begin(); i != list2.end(); ++i)
	{
		list4.push_back(*i + 2);
	}

	for (i = list4.begin(); i != list4.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

};
template<class T> void print(const std::vector<T>& l) {
	std::cout << std::endl << "Size of the vector is " << l.size() << "\n[";
	typename std::vector<T>::const_iterator i;
	for (i = l.begin(); i != l.end(); ++i)
	{
		std::cout << *i << std::endl;
	}
	std::cout << "]\n";
}

//sets
template<class T> void printSet(const std::set<T>& n)
{
	std::cout << std::endl << "Size of the set is: " << n.size() << "\n";
	typename std::set<T>::const_iterator i;

	for (i = n.begin(); i != n.end(); ++i)
	{
		std::cout << *i << std::endl;
	}
	std::cout << "\n";
	//std::set<std::string> test;
	//test.insert("interest rate");
	//test.insert("interest rate");

	//printSet(test);
}

//maps
template<class k , class v> void printMap(const std::map<k,v>& m)
{
	typename std::map<k, v>::const_iterator i;
	for (i = m.begin(); i != m.end(); ++i)
	{
		std::cout << (*i).first << "\n" << (*i).second << std::endl;
	}
	//std::map<std::string, double> container;
	//container["new"] = 3.43;
	//printMap(container);
}

std::vector<double> makeVector(int size)
{
	std::vector<double> result;
	for (int i = 1; i < size; i++)
	{
		result.push_back(double(i));
	}
	return result;
	//std::vector<double> testing = makeVector(4);
	//print(testing);
}

