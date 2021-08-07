// Author: Julia Yu
// Date: April 2, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 7.1

#include <iostream>
using namespace std;

#define OPTION 0	// 0 causes min, max to be returned
					// 1 returns max, min

void sort2(double *p, double *q) {
    double a = *p, b= *q, temp;	// preset min, max
#if 0	// manipulating pointers incorrectly
    if (*p > *q){
        q = p;	// avoid doing this as the inputs are not passed back in this way. Pointers are on the stack!
        p = &a;
    } else if (*q > *p){
        p = p;
        q = &a;
    }
#endif
	
#if OPTION == 0		// this returns lowest, biggest
	if (a > b){
	  temp= a;
	  a= b;
	  b= temp;
	};
#else		// this returns biggest, lowest
	if (a < b)
	{
	  temp= a;
	  a= b;
	  b= temp;
	};
#endif

	p[0]= a;
	q[0]= b;

    // cout << *p << endl << *q;
}

int main(){
    double x = 3.2, y = 5.7;
//    double x = 5.7, y = 3.2;
    sort2(&x, &y);
	printf("x, y= %lf, %lf", x, y);
    return 0;
}