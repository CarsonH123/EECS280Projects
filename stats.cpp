#include "stats.h"
#include <cassert>
#include <cmath>
#include <vector>

using namespace std;

vector<vector<double> > summarize(vector<double> v) {
  assert(false);
}

int count(vector<double> v) {
  assert(false);
}

double sum(vector<double> v) {
	double total = 0;

	for(unsigned int i = 0; i < v.size(); i++){
		total += v.at(i);
	}
	return total;
}

double mean(vector<double> v) {
	double answer = 0;

	for(unsigned int i = 0; i < v.size(); i++){
		answer += v.at(i);
	}

	answer = answer / v.size();

	return answer;
}

double median(vector<double> v) {

	
	if(v.size() % 2) { //odd

		return v.at((int)(v.size() / 2)	);
		
	} else { //even

	}
	return 0;
}

double mode(vector<double> v) {
  assert(false);
}

double min(vector<double> v) {
  assert(false);
}

double max(vector<double> v) {
  assert(false);
}

double stdev(vector<double> v) {
  assert(false);
}

double percentile(vector<double> v, double p) {
  assert(false);
}