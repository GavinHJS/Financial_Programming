#include <iostream>
#include <vector>
#include <numeric>

template <class T> void print(const std::vector<T>& l) {
	std::cout << "Size of the vector: " << l.size() << std::endl ;
	typename std::vector<T>::const_iterator i;
	for (i = l.begin(); i != l.end(); i++)
	{
		std::cout << *i ;
	}
	std::cout << std::endl;
}
template <class V> void printMatrix(const std::vector<std::vector<V>>& mat)
{
	typename std::vector<std::vector<V>>::const_iterator i;
	for (i = mat.begin(); i != mat.end(); i++)
	{
		print(*i);
	}
}

std::vector<std::vector<double>> createMatrix()
{
	std::vector<std::vector<double>> matrix(2);
	size_t number = 5;
	matrix[0] = std::vector<double>(number, 1);
	matrix[1] = std::vector<double>(number-1, 2);
	return matrix;
}

//sum up numbers in a vector
template<class T> int vectorSum(const std::vector<T>& l) {
	double summation = std::accumulate(l.begin(), l.end(), 0);
	return summation;
}

template <class T> double vectorProduct(const std::vector<T>& m, const std::vector<T>& n)
{
	double product = std::inner_product(m.begin(), m.end(), n.begin(), 0);
	return product;
}

