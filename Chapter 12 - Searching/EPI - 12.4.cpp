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

int find_cycle_start ( int a[], int n ) {
	if ( a == NULL ) return -1;
	int low = 0; int high = n-1; int result = 0;
	while ( low <= high ) {
		int mid = low + (high-low)/2;
		if ( a[0] > a[mid] ) {
			result = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}


	}

	return result;

}





int main()
{
	int a[12] = {15,16,19,20,25,1,3,4,5,7,10,14};
	int x = find_cycle_start(a, 12);



	return 0;
}