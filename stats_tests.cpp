/* stats_tests.cpp
 *
 * Unit tests for the simple statistics library
 * Project UID 5366c7e2b77742d5b2142097e51561a5
 *
 * EECS 280 Project 1
 *
 * Protip #1: Write tests for the functions BEFORE you implement them!  For
 * example, write tests for median() first, and then write median().  It sounds
 * like a pain, but it helps make sure that you are never under the illusion
 * that your code works when it's actually full of bugs.
 *
 * Protip #2: Instead of putting all your tests in main(),  put each test case
 * in a function!
 */


#include "stats.h"
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

void sum_test();
void mean_test();
void median_test();

// Add prototypes for you test functions here.

int main()
{
	median_test();

  return 0;
}

void sum_test() {
	cout << "sum_test" << endl;

	vector<double> data;
	data.push_back(1);
	data.push_back(2);
	data.push_back(3);

	assert(sum(data) == 6);
	cout << "PASS!" << endl;
}

void mean_test() {
	cout << "mean_test" << endl;

	vector<double> data;
	data.push_back(2);
	data.push_back(3);
	data.push_back(4);
	data.push_back(5);

	assert(mean(data) == 3.5);

	cout << "PASS" << endl;
}

void median_test() {
	vector<double> data;
	data.push_back(1);
	data.push_back(2);
	data.push_back(4);//g->l
	data.push_back(3);
	data.push_back(3);

	cout << median(data);
}

// Add the test function implementations here.
