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

int find_element ( int a[], int n, int k ) {
	if ( a == NULL ) return -1;
	int low = 0; int high = n-1; int result = -1;
	while ( low <= high ) {
		int mid = low + (high-low)/2;
		if ( a[mid] > k ) {
			result = mid;
			high = mid-1;
		} else low = mid +1;

	}
	return result;
}



int main()
{
	int a[] = {1,2,2,4,4,4,7,11,11,13};

	int x = find_element(a,10,4);

	return 0;
}