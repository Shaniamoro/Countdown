#include <iostream>
using namespace std;


class Countdown {
	int T = 0; // target number 
	int sum;
	int mult;
	int div;
	int sub;
	int a;
	int b;
public:
	int count = 0;
	Countdown();
	Countdown(int, int, int);
	int Addition(int, int);
	int Multiplication(int, int);
	int Division(int, int); // Only integers allowed 
	int Subtraction(int, int);// Only Positive Subtraction allowed
	bool Compare(int, int, int);
};
Countdown::Countdown() {
	T = 10;
	a = 5;
	b = 2;
}
Countdown::Countdown(int Target, int  first, int second) {
	T = Target;
	a = first;
	b = second;
}
int Countdown::Addition(int a, int b) {
	sum = a + b;
	count++;
	return sum;
}
int Countdown::Multiplication(int a, int b) {
	mult = a * b;
	count++;
	return mult;
}
int Countdown::Division(int a, int b) {
	int div = 0;
	if (a >= b && a % b == 0) {
		div = a / b;
		count++;
	}
	else if (a < b && b% a == 0) {
		div = b / a;
		count++;
	}
	return div;
}
int Countdown::Subtraction(int a, int b) {
	int sub = 0;
	if (a > b) {
		sub = a - b;
		count++;
	}
	else if (b > a) {
		sub = b - a;
		count++;
	}

	return sub;
}
bool Countdown::Compare(int T, int a, int b) {
	if (Addition(a, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else	if (Multiplication(a, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else	if (Division(a, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else 	if (Subtraction(a, b) == T) {
		cout << "Solved" << endl;
		return true;
	}
	else {
		cout << "No Solution";
		return false;
	}
}


int main() {
	int num = 0;
	int a = 0;
	int b = 0;
	int count = 0;
	cout << " What is the number you are trying to get ";
	cin >> num;
	cout << " ENTER FIRST NUMBER";
	cin >> a;
	cout << " ENTER SECOND NUMBER";
	cin >> b;

	Countdown C;
	C.Compare(num, a, b);
	cout << C.count << endl;

system("pause");
}
