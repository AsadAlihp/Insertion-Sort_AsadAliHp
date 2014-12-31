// vC++.cpp : powered by socioteachers.com..:
//
using namespace std;
#include "stdafx.h"
#include <iostream>
#include <conio.h>
	#include <cstdlib>


 
//member functions (user defined)
void insertion_sort(int arr[], int length);
void print_array(int array[],int size);

int _tmain(int argc, _TCHAR* argv[])
{ 
	int array[5]= {3572,5,0,577,1};
	insertion_sort(array,5);
 

	getchar();
	return 0;
}

void print_array(int array[], int size){ //////// our defined function for pring elements of array.
 
 cout<< "Wait you list is being sorted: ";
	 int j;
	for (j=0; j<size;j++)
 for (j=0; j<size;j++)
 cout <<" "<< array[j];
 cout << endl;
 }//end of print_array
///////////////SORTING CODE BELOW////////////////////////
void insertion_sort(int arr[], int length) {
	 int i, j ,tmp;
		for (i = 1; i < length; i++) {
 			j = i;
 			while (j > 0 && arr[j - 1] > arr[j]) {
				tmp = arr[j];
 				arr[j] = arr[j - 1];
				 arr[j - 1] = tmp;
				 j--;
 		}//end of while loop
	print_array(arr,5);
	}
 }