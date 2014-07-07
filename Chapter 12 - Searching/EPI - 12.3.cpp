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

int index_value_equal ( int a[], int n ) {
	if ( a == NULL ) return -1;
	int low = 0; int high = n -1;
	while ( low <= high ) {
		int mid = low + (high-low)/2;
		if ( a[mid]==mid ) 
			return mid;
		else if ( a[mid] > mid )
			high = mid -1;
		else
			low = mid+1;

	}

	return -1;
}




int main()
{
	int a[] = {1,2,2,4,4,4,7,11,11,13};

	int x = find_element(a,10,4);

	return 0;
}