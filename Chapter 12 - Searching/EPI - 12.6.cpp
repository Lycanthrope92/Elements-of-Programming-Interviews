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

int largest_s ( int k ) {
	if ( k < 0 ) return -1;
	if ( k <= 1 ) return k;

	int s; int low= 0; int high = k/2;
	while ( low <= high ) {
		int mid = low + (high-low)/2;
		if ( mid*mid <= k ) {
			s = mid;
			low = mid + 1;
		} else {
			high = mid -1;
		}
	}

	return s;
}




int main()
{

	int x = largest_s(3);



	return 0;
}