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

int binary_search_mod ( int a[], int n, int key ) {
	if ( a == NULL ) return -1;
	int low = 0; int high = n-1;
	while (low <= high ) {
		int mid = low + (high-low)/2;
		if ( key == a[mid] ) {
			while ( mid > low ) {
				if ( a[mid-1] == key ) mid--;
				else return mid;
			}
			return mid;
		} else if ( key > a[mid] ) low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}

int binary_search_mod2 ( int a[], int n, int key ) {
	if ( a == NULL ) return -1;
	int low = 0; int high = n-1; int result;
	while (low <= high ) {
		int mid = low + (high-low)/2;
		if ( key == a[mid] ) {
				result = mid; high = mid -1;
		} else if ( key > a[mid] ) low = mid + 1;
		else high = mid - 1;
	}
	return result;
}



int main()
{
	int a[10] = {-14,-10,2,108,108,285,285,285,285,401};

	int x = binary_search_mod2(a,10,285);



	return 0;
}