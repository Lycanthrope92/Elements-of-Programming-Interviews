#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
#include <limits>
#include <algorithm>

#include <cstdlib>
#include <fstream>
#include <sstream>
#include <signal.h>
#include <utility>
using namespace std;

int compare ( double x, double y ) {
	double diff = (x-y)/y;
	return diff < -std::numeric_limits<double>::epsilon() ? -1: diff > std::numeric_limits<double>::epsilon();
}


double square_root ( double x ) {
	if ( x < 0.0 ) return -1;
	if ( x == 0.0 || x == 1.0 ) return x;
	double low, high;
	if ( x > 0.0 && x < 1.0 ) {
		low = x; high = 1.0;
	} else {
		low = 1.0; high = x;
	}

	while ( compare(low,high) == -1 ) {
		double mid = low + 0.5*(high-low);
		if ( compare (mid*mid,x) == 0 ) return mid;
		else if ( compare ( mid*mid,x) == 1 ) high = mid;
		else low = mid;
	}

	return low;
}


int main()
{
	double x = 0.25;

	double y = square_root(x);

	return 0;
}