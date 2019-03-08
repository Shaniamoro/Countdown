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
	int c;
public:
	int count = 0;
	Countdown();
	Countdown(int, int, int);
	int Addition(int, int);
	int Multiplication(int, int);
	int Division(int, int); // Only integers allowed 
	int Subtraction(int, int);// Only Positive Subtraction allowed
	bool Compare(int, int, int);
	bool Compare(int, int, int,int);
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
bool Countdown::Compare(int T, int a, int b,int c) {
	Compare(T, a, b);
	Compare(T, b, c);
	Compare(T, a, c);

	int sum1 = Addition(a, b);
	int mult1 = Multiplication(a, b);
	int div1 = Division(a, b);
	int sub1 = Subtraction(a, b);

	// Addition
	if (Addition(sum1,c) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(sum1,c) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(sum1,c) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(sum1,c) == T) {
		cout << "Solved" << endl;
		return true;
	}
	//Multiplicaition
	if (Addition(mult1,c) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(mult1,c) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(mult1,c) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(mult1,c) == T) {
		cout << "Solved" << endl;
		return true;
	}
	// Using division 
	if (Addition(div1,c) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(div1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(div1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(div1, b) == T) {
		cout << "Solved" << endl;
		return true;
	}
	// Using Subtraction
	if (Addition(sub1, c) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(sub1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(sub1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(sub1, b) == T) {
		cout << "Solved" << endl;
		return true;
	}

	sum1 = Addition(b,c);
	mult1 = Multiplication(b,c);
	div1 = Division(b,c);
	sub1 = Subtraction(b,c);

	// Addition
	if (Addition(sum1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(sum1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(sum1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(sum1, a) == T) {
		cout << "Solved" << endl;
		return true;
	}
	//Multiplicaition
	if (Addition(mult1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(mult1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(mult1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(mult1, a) == T) {
		cout << "Solved" << endl;
		return true;
	}
	// Using division 
	if (Addition(div1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(div1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(div1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(div1, a) == T) {
		cout << "Solved" << endl;
		return true;
	}
	// Using Subtraction
	if (Addition(sub1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(sub1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(sub1, a) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(sub1, a) == T) {
		cout << "Solved" << endl;
		return true;
	}

	sum1 = Addition(a,c);
	mult1 = Multiplication(a, c);
	div1 = Division(a, c);
	sub1 = Subtraction(a, c);

	// Addition
	if (Addition(sum1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(sum1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(sum1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(sum1, b) == T) {
		cout << "Solved" << endl;
		return true;
	}
	//Multiplicaition
	if (Addition(mult1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(mult1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(mult1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(mult1, b) == T) {
		cout << "Solved" << endl;
		return true;
	}
	// Using division 
	if (Addition(div1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(div1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(div1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(div1, b) == T) {
		cout << "Solved" << endl;
		return true;
	}
	// Using Subtraction
	if (Addition(sub1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(sub1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(sub1, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(sub1, b) == T) {
		cout << "Solved" << endl;
		return true;
	}
	else {
		cout << "No Solution";
		return false;
	}

}
bool Countdown::Compare(int T, int a, int b) {
	if (Addition(a, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Multiplication(a, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Division(a, b) == T) {
		cout << "sOLVED" << endl;
		return true;
	}
	else if (Subtraction(a, b) == T) {
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
	int c = 0; 
	int count = 0;

	cout << " What is the number you are trying to get ";
	cin >> num;
	cout << " ENTER FIRST NUMBER";
	cin >> a;
	cout << " ENTER SECOND NUMBER";
	cin >> b;
	cout << " ENTER Third NUMBER";
	cin >> c;

	Countdown C;
	//C.Compare(num, a, b);
	C.Compare(num, a, b, c);

	cout << C.count << endl;

system("pause");
}
