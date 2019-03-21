
#include <iostream>
#include <fstream>
#include <math.h>
#include <thread>
using namespace std;

int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
int max = 0;
int min = 899;


// Creates a file with the generators 

class Countdown {
	int T = 0; // target number 
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
public:
	Countdown();
	Countdown(int, int, int, int, int, int, int);
	double Addition(int, int);
	double  Multiplication(int, int);
	double  Division(int, int); // Only integers allowed 
	double  Subtraction(int, int);// Only Positive Subtraction allowed
	double Exponentiation1(int, int);// First number raised to the second 
	double  Exponentiation2(int, int);//Second number raised to the first 
	bool Compare(int, int, int);
	bool Compare(int, int, int, int);
	bool Compare(int, int, int, int, int);
	bool Compare(int, int, int, int, int, int);
	bool Compare(int, int, int, int, int, int, int);
	void Driver1();
	void Driver2();
	void Driver3();
	void Driver4();
	void Driver5();
};
Countdown::Countdown() {
	// T = 10;
	// a = 5;
	// b = 2;
  // c= 1;
}
// Instead of a and b maybe use an array
Countdown::Countdown(int Target, int  first, int second, int third, int fourth, int fifth, int sixth) {
	T = Target;
	a = first;
	b = second;
	c = third;
	d = fourth;
	e = fifth;
	f = sixth;
}
double Countdown::Addition(int a, int b) {
	int sum = a + b;
	return sum;
}
double Countdown::Multiplication(int a, int b) {
	int mult = a * b;
	return mult;
}
double Countdown::Division(int a, int b) {
	int div = 0;
	if (a >= b) {
		if (b != 0 && a % b == 0) {
			div = a / b;
		}
		else {
			div = a / 1;
		}
	}
	else if (a < b) {
		if (a != 0 && b% a == 0) {
			div = b / a;
		}
		else {
			div = b / 1;
		}
	}
	return div;
}
double Countdown::Subtraction(int a, int b) {
	int sub = 0;
	if (a > b) {
		sub = a - b;
	}
	else if (b > a) {
		sub = b - a;
	}
	return sub;
}
double Countdown::Exponentiation1(int a, int b) {
	if (a == 1) {
		return a;
	}
	else if (a < 1000 && b < 1000) {
		return pow(a, b);
	}
	else {
		return a;
	}
}

double Countdown::Exponentiation2(int a, int b) {
	if (b == 1) {
		return b;
	}
	else if (a < 1000 && b < 1000) {
		return pow(b, a);
	}
	else {
		return b;
	}
}

bool Countdown::Compare(int T, int a, int b) {
	if (Addition(a, b) == T) {
		return true;
	}
	else if (Multiplication(a, b) == T) {
		return true;
	}
	else if (Division(a, b) == T) {
		return true;
	}
	else if (Subtraction(a, b) == T) {
		return true;
	}
	else if (Exponentiation1(a, b) == T) {
		return true;
	}
	else if (Exponentiation2(a, b) == T) {
		return true;
	}
	else {
		return false;
	}
}
bool Countdown::Compare(int T, int a, int b, int c) {
	//Check if pairs of two can solve first
	if (Compare(T, a, b) == true) {
		return true;
	}
	else if (Compare(T, b, c) == true) {
		return true;
	}
	else if (Compare(T, a, c) == true) {
		return true;
	}
	else if (Compare(T, Addition(a, b), c) == true) {
		return true;
	}
	else if (Compare(T, Addition(b, c), a) == true) {
		return true;
	}
	else if (Compare(T, Addition(a, c), b) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(a, b), c) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(b, c), a) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(a, c), b) == true) {
		return true;
	}
	else if (Compare(T, Division(a, b), c) == true) {
		return true;
	}
	else if (Compare(T, Division(b, c), a) == true) {
		return true;
	}
	else if (Compare(T, Division(a, c), b) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(a, b), c) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(b, c), a) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(a, c), b) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(a, b), c) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(b, c), a) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(a, c), b) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(a, b), c) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(b, c), a) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(a, c), b) == true) {
		return true;
	}
	else {
		return false;
	}
}
bool Countdown::Compare(int T, int a, int b, int c, int d) {
	//Check if pairs of two can solve first
	if (Compare(T, a, b, c) == true) {
		return true;
	}
	if (Compare(T, a, b, d) == true) {
		return true;
	}
	else if (Compare(T, a, c, d) == true) {
		return true;
	}
	else if (Compare(T, b, c, d) == true) {
		return true;
	}

	else if (Compare(T, Addition(a, b), c, d) == true) {
		return true;
	}
	else if (Compare(T, Addition(a, c), b, d) == true) {
		return true;
	}
	else if (Compare(T, Addition(a, d), b, c) == true) {
		return true;
	}
	else if (Compare(T, Addition(b, c), a, d) == true) {
		return true;
	}
	else if (Compare(T, Addition(b, d), a, c) == true) {
		return true;
	}
	else if (Compare(T, Addition(c, d), a, b) == true) {
		return true;
	}

	else if (Compare(T, Multiplication(a, b), c, d) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(a, c), b, d) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(a, d), b, c) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(b, c), a, d) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(b, d), a, c) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(c, d), a, b) == true) {
		return true;
	}

	else if (Compare(T, Division(a, b), c, d) == true) {
		return true;
	}
	else if (Compare(T, Division(a, c), b, d) == true) {
		return true;
	}
	else if (Compare(T, Division(a, d), b, c) == true) {
		return true;
	}
	else if (Compare(T, Division(b, c), a, d) == true) {
		return true;
	}
	else if (Compare(T, Division(b, d), a, c) == true) {
		return true;
	}
	else if (Compare(T, Division(c, d), a, b) == true) {
		return true;
	}


	else if (Compare(T, Subtraction(a, b), c, d) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(a, c), b, d) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(a, d), b, c) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(b, c), a, d) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(b, d), a, c) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(c, d), a, b) == true) {
		return true;
	}

	else if (Compare(T, Exponentiation1(a, b), c, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(a, c), b, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(a, d), b, c) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(b, c), a, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(b, d), a, c) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(c, d), a, b) == true) {
		return true;
	}

	else if (Compare(T, Exponentiation2(a, b), c, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(a, c), b, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(a, d), b, c) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(b, c), a, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(b, d), a, c) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(c, d), a, b) == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Countdown::Compare(int T, int a, int b, int c, int d, int e) {
	//Check if pairs of two can solve first
	if (Compare(T, a, b, c, d) == true) {
		return true;
	}
	if (Compare(T, a, b, c, e) == true) {
		return true;
	}
	if (Compare(T, a, b, d, e) == true) {
		return true;
	}
	if (Compare(T, a, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, b, c, d, e) == true) {
		return true;
	}

	else if (Compare(T, Addition(a, b), c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Addition(a, c), b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Addition(a, d), b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Addition(a, e), b, c, d) == true) {
		return true;
	}
	else if (Compare(T, Addition(b, c), a, d, e) == true) {
		return true;
	}
	else if (Compare(T, Addition(b, d), a, c, e) == true) {
		return true;
	}
	else if (Compare(T, Addition(b, e), a, c, d) == true) {
		return true;
	}
	else if (Compare(T, Addition(c, d), a, b, e) == true) {
		return true;
	}
	else if (Compare(T, Addition(c, e), a, b, d) == true) {
		return true;
	}
	else if (Compare(T, Addition(d, e), a, b, c) == true) {
		return true;
	}

	else if (Compare(T, Multiplication(a, b), c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(a, c), b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(a, d), b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(a, e), b, c, d) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(b, c), a, d, e) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(b, d), a, c, e) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(b, e), a, c, d) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(c, d), a, b, e) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(c, e), a, b, d) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(d, e), a, b, c) == true) {
		return true;
	}

	else if (Compare(T, Division(a, b), c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Division(a, c), b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Division(a, d), b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Division(a, e), b, c, d) == true) {
		return true;
	}
	else if (Compare(T, Division(b, c), a, d, e) == true) {
		return true;
	}
	else if (Compare(T, Division(b, d), a, c, e) == true) {
		return true;
	}
	else if (Compare(T, Division(b, e), a, c, d) == true) {
		return true;
	}
	else if (Compare(T, Division(c, d), a, b, e) == true) {
		return true;
	}
	else if (Compare(T, Division(c, e), a, b, d) == true) {
		return true;
	}
	else if (Compare(T, Division(d, e), a, b, c) == true) {
		return true;
	}

	else if (Compare(T, Subtraction(a, b), c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(a, c), b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(a, d), b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(a, e), b, c, d) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(b, c), a, d, e) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(b, d), a, c, e) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(b, e), a, c, d) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(c, d), a, b, e) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(c, e), a, b, d) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(d, e), a, b, c) == true) {
		return true;
	}

	else if (Compare(T, Exponentiation1(a, b), c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(a, c), b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(a, d), b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(a, e), b, c, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(b, c), a, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(b, d), a, c, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(b, e), a, c, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(c, d), a, b, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(c, e), a, b, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(d, e), a, b, c) == true) {
		return true;
	}

	else if (Compare(T, Exponentiation2(a, b), c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(a, c), b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(a, d), b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(a, e), b, c, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(b, c), a, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(b, d), a, c, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(b, e), a, c, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(c, d), a, b, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(c, e), a, b, d) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(d, e), a, b, c) == true) {
		return true;
	}
	else {
		return false;
	}
}
bool Countdown::Compare(int T, int a, int b, int c, int d, int e, int f) {
	//Check if pairs of two can solve first
	if (Compare(T, a, b, c, d, e) == true) {
		return true;
	}
	if (Compare(T, a, b, c, d, f) == true) {
		return true;
	}
	if (Compare(T, a, b, c, e, f) == true) {
		return true;
	}
	if (Compare(T, a, b, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, a, c, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, b, c, d, e, f) == true) {
		return true;
	}

	else if (Compare(T, Addition(a, b), c, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Addition(a, c), b, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Addition(a, d), b, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Addition(a, e), b, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Addition(a, f), b, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Addition(b, c), a, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Addition(b, d), a, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Addition(b, e), a, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Addition(b, f), a, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Addition(c, d), a, b, e, f) == true) {
		return true;
	}
	else if (Compare(T, Addition(c, e), a, b, d, f) == true) {
		return true;
	}
	else if (Compare(T, Addition(c, f), a, b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Addition(d, e), a, b, c, f) == true) {
		return true;
	}
	else if (Compare(T, Addition(d, f), a, b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Addition(e, f), a, b, c, d) == true) {
		return true;
	}

	else if (Compare(T, Multiplication(a, b), c, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(a, c), b, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(a, d), b, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(a, e), b, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(a, f), b, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(b, c), a, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(b, d), a, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(b, e), a, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(b, f), a, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(c, d), a, b, e, f) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(c, e), a, b, d, f) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(c, f), a, b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(d, e), a, b, c, f) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(d, f), a, b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Multiplication(e, f), a, b, c, d) == true) {
		return true;
	}


	else if (Compare(T, Division(a, b), c, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Division(a, c), b, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Division(a, d), b, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Division(a, e), b, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Division(a, f), b, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Division(b, c), a, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Division(b, d), a, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Division(b, e), a, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Division(b, f), a, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Division(c, d), a, b, e, f) == true) {
		return true;
	}
	else if (Compare(T, Division(c, e), a, b, d, f) == true) {
		return true;
	}
	else if (Compare(T, Division(c, f), a, b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Division(d, e), a, b, c, f) == true) {
		return true;
	}
	else if (Compare(T, Division(d, f), a, b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Division(e, f), a, b, c, d) == true) {
		return true;
	}

	else if (Compare(T, Subtraction(a, b), c, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(a, c), b, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(a, d), b, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(a, e), b, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(a, f), b, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(b, c), a, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(b, d), a, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(b, e), a, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(b, f), a, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(c, d), a, b, e, f) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(c, e), a, b, d, f) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(c, f), a, b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(d, e), a, b, c, f) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(d, f), a, b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Subtraction(e, f), a, b, c, d) == true) {
		return true;
	}

	else if (Compare(T, Exponentiation1(a, b), c, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(a, c), b, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(a, d), b, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(a, e), b, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(a, f), b, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(b, c), a, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(b, d), a, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(b, e), a, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(b, f), a, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(c, d), a, b, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(c, e), a, b, d, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(c, f), a, b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(d, e), a, b, c, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(d, f), a, b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation1(e, f), a, b, c, d) == true) {
		return true;
	}

	else if (Compare(T, Exponentiation2(a, b), c, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(a, c), b, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(a, d), b, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(a, e), b, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(a, f), b, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(b, c), a, d, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(b, d), a, c, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(b, e), a, c, d, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(b, f), a, c, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(c, d), a, b, e, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(c, e), a, b, d, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(c, f), a, b, d, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(d, e), a, b, c, f) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(d, f), a, b, c, e) == true) {
		return true;
	}
	else if (Compare(T, Exponentiation2(e, f), a, b, c, d) == true) {
		return true;
	}
	else {
		return false;
	}
}

void Driver1() {
	Countdown C;
	ifstream infile;
	// Output file with the details 
	ofstream outfile;
	outfile.open("output1.txt");
	// Output file with the number solved 
	ofstream out;
	ofstream output;
	output.open("generator1.txt");


	out.open("out1.txt");
	infile.open("input1.txt");
	if (!infile) {
		exit(1);
	}
	else {
		while (infile >> a >> b >> c >> d >> e >> f) {
			int count = 0;
			outfile << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			out << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			for (int x = 101; x <= 999; x++) {
				if (C.Compare(x, a, b, c, d, e, f) == true) {
					count++;
					outfile << "     This solves " << x << endl;
				}
			}
			out << "Number solved :" << count << endl;
			if (count == 899) {
				output << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			}
			if (count >= max) {
				max = count;
			}
			if (count <= min) {
				min = count;
			}
		}
	}
	out << " The most targets solved is : " << max << endl;
	out << " The least targets solved is : " << min << endl;
}

void Driver2() {
	Countdown C;
	ifstream infile;
	// Output file with the details 
	ofstream outfile;
	outfile.open("output2.txt");
	// Output file with the number solved 
	ofstream out;
	ofstream output;
	output.open("generator2.txt");

	out.open("out2.txt");
	infile.open("input2.txt");
	if (!infile) {
		exit(1);
	}
	else {
		while (infile >> a >> b >> c >> d >> e >> f) {
			int count = 0;
			outfile << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			out << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			for (int x = 101; x <= 999; x++) {
				if (C.Compare(x, a, b, c, d, e, f) == true) {
					count++;
					outfile << "     This solves " << x << endl;
				}
			}
			out << "Number solved :" << count << endl;
			if (count == 899) {
				output << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			}
			if (count >= max) {
				max = count;
			}
			if (count <= min) {
				min = count;
			}
		}
	}
	out << " The most targets solved is : " << max << endl;
	out << " The least targets solved is : " << min << endl;
}

void Driver3() {
	Countdown C;
	ifstream infile;
	// Output file with the details 
	ofstream outfile;
	outfile.open("output3.txt");
	// Output file with the number solved 
	ofstream out;
	out.open("out3.txt");
	infile.open("input3.txt");
	ofstream output;
	output.open("generator3.txt");
	
	if (!infile) {
		exit(1);
	}
	else {
		while (infile >> a >> b >> c >> d >> e >> f) {
			int count = 0;
			outfile << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			out << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			for (int x = 101; x <= 999; x++) {
				if (C.Compare(x, a, b, c, d, e, f) == true) {
					count++;
					outfile << "     This solves " << x << endl;
				}
			}
			out << "Number solved :" << count << endl;
			if (count == 899) {
				output << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			}
			if (count >= max) {
				max = count;
			}
			if (count <= min) {
				min = count;
			}
		}
	}
	out << " The most targets solved is : " << max << endl;
	out << " The least targets solved is : " << min << endl;
}
void Driver4() {
	Countdown C;
	ifstream infile;
	// Output file with the details 
	ofstream outfile;
	outfile.open("output4.txt");
	// Output file with the number solved 
	ofstream out;
	out.open("out4.txt");
	infile.open("input4.txt");
	ofstream output;
	output.open("generator4.txt");
	if (!infile) {
		exit(1);
	}
	else {
		while (infile >> a >> b >> c >> d >> e >> f) {
			int count = 0;
			outfile << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			out << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			for (int x = 101; x <= 999; x++) {
				if (C.Compare(x, a, b, c, d, e, f) == true) {
					count++;
					outfile << "     This solves " << x << endl;
				}
			}
			out << "Number solved :" << count << endl;
			if (count == 899) {
				output << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			}
			if (count >= max) {
				max = count;
			}
			if (count <= min) {
				min = count;
			}
		}
	}
	out << " The most targets solved is : " << max << endl;
	out << " The least targets solved is : " << min << endl;
}
void Driver5() {
	Countdown C;
	ifstream infile;
	// Output file with the details 
	ofstream outfile;
	outfile.open("output5.txt");
	// Output file with the number solved 
	ofstream out;
	out.open("out5.txt");
	infile.open("input5.txt");
	ofstream output;
	output.open("generator2.txt");
	
	if (!infile) {
		exit(1);
	}
	else {
		while (infile >> a >> b >> c >> d >> e >> f) {
			int count = 0;
			outfile << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			out << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			for (int x = 101; x <= 999; x++) {
				if (C.Compare(x, a, b, c, d, e, f) == true) {
					count++;
					outfile << "     This solves " << x << endl;
				}
			}
			out << "Number solved :" << count << endl;
			if (count == 899) {
				output << "{ " << a << " , " << b << " , " << c << ", " << d << " , " << e << " , " << f << "  }" << endl;
			}
			if (count >= max) {
				max = count;
			}
			if (count <= min) {
				min = count;
			}
		}
	}
	out << " The most targets solved is : " << max << endl;
	out << " The least targets solved is : " << min << endl;
}


int main() {	

	std::thread t1(Driver1);
	std::thread t2(Driver2);
	std::thread t3(Driver3);
	std::thread t4(Driver4);
	std::thread t5(Driver5);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();

}
