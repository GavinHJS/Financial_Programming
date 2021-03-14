#pragma once
#ifndef Containers_H
#define Containers_H

#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <set>
#include <map>


class listPractice {
public:
	void practice();
};

template<class T> void print(const std::vector<T>& l);
template<class T> void printSet(const std::set<T>& n);
template<class k, class v> void printMap(const std::map<k, v>& m);
std::vector<double> makeVector(int size);

#endif // !container
