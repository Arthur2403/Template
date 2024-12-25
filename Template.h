#pragma once

using namespace std;



template <typename T>
T findMinOrMax(const vector<T>& someVector, T(*doSomething)(vector<T>));


template <typename T>
T findMin(const vector<T>& someVector);


template <typename T>
T findMin(const vector<T>& someVector);

template <typename T>
void swap(T& value1, T& value2);

template <typename T>
void sortVector(const vector<T>& someVector);

template <typename T, typename Iterator>
optional<Iterator> binaryFind(Iterator begin, Iterator end, const T& value);
