#include <iostream>
#include <string>
#include <vector>
#include <optional>
#include "Template.h"

using namespace std;

template <typename T>
T findMinOrMax(const vector<T>& someVector, T(*doSomething)(vector<T>)) {
	return doSomething(someVector);
}

template <typename T>
T findMin(const vector<T>& someVector) {
	T min = *someVector.begin;
	for (T value : someVector) {
		if (value < min) {
			min = value;
		}
	}
	return min;
}

template <typename T>
T findMax(const vector<T>& someVector) {
	T max = *someVector.begin;
	for (T value : someVector) {
		if (value > max) {
			max = value;
		}
	}
	return max;
}

template <typename T>
void swap(T& value1, T& value2) {
	T temp = value1;
	value1 = value2;
	value2 = temp;
}

template <typename T>
void sortVector(const vector<T>& someVector) {
	for (int j = 0; j < someVector.size(); j++) {
		for (int i = someVector.size() - 1; i >= j; i--) {
			if (someVector[i] < someVector[i - 1]) {
				swap(someVector[i], someVector[i - 1]);
			}
		}
	}
}

template <typename T, typename Iterator>
optional<Iterator> binaryFind(Iterator begin, Iterator end, const T& value) {
	while (begin != end) {
		auto mid = begin + std::distance(begin, end) / 2;
		if (*mid == value) {
			return mid;
		}
		else if (*mid < value) {
			begin = mid + 1;
		}
		else {
			end = mid;
		}
	}
	return nullopt;
}

template <typename T> 
void replaceValue(vector<T> someVector, int index, T newValue) {
	if (index > 0 && index < someVector.size()) {
		someVector[index] = newValue;
	}
}