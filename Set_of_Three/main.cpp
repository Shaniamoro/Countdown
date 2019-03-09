#include <iostream>
#include <fstream>
using namespace std;

ofstream outfile;
class Countdown {
	int T = 0; // target number 
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
    int Exponentiation1(int,int);// First number raised to the second 
    int Exponentiation2(int,int);//Second number raised to the first 
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
	int sum = a + b;
	return sum;
}
int Countdown::Multiplication(int a, int b) {
	int mult = a * b;
	return mult;
}
int Countdown::Division(int a, int b) {
	int div = 0;
  if (a>=b){
	  if ( b!=0 && a % b == 0) {
			div = a / b;
    } else {
    div = a/1;
    }
  } else if (a < b){
      if( b!=0 && b% a == 0) {
				div = b / a;
			} else {
        div=b/1;
      }
  }
		return div;
}
int Countdown::Subtraction(int a, int b) {
	int sub = 0;
	if (a > b) {
		sub = a - b;
	}
	else if (b > a) {
		sub = b - a;
	}

	return sub;
}
int Countdown::Exponentiation1(int a,int b ) {
  int pow =a;
for(int p=1; p<b;p++){
  pow= pow* a;
  }
  return pow;
}
int Countdown::Exponentiation2(int a,int b ) {
  int pow2 =b;
for(int p=1; p<a;p++){
  pow2= pow2* b;
  }
  return pow2;
}

bool Countdown::Compare(int T, int a, int b) {
  
	if (Addition(a, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(a, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(a, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(a, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(a, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(a, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else {
		return false;
	}
}
bool Countdown::Compare(int T, int a, int b,int c) {
  //Check if pairs of two can solve first
  Compare(T,a,b);
  Compare(T,b,c);
  Compare (T,a,c);
  // Use a,b to create a new number, then use c 
  int sum = Addition(a,b);
  int mult = Multiplication(a,b);
  int div = Division(a,b);
  int sub = Subtraction(a,b);
  int e1 = Exponentiation1(a,b);
  int e2 = Exponentiation2(a,b);
  //Addition 
	if (Addition(sum, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(sum, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(sum, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(sum, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(sum, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(sum, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  //Multiplication 
	if (Addition(mult, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(mult, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(mult, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(mult, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(mult, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(mult, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  //Division 
	if (Addition(div, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(div, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(div, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(div, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(div, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(div, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  //Subtraction 
	if (Addition(sub, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(sub, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(sub, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(sub, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(sub, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(sub, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
   //Exp1 
	if (Addition(e1, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(e1, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(e1, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(e1, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(e1, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(e1, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
   //Exp2 
	if (Addition(e2, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(e2, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(e2, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(e2, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(e2, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(e2, c) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
   sum = Addition(a,c);
   mult = Multiplication(a,c);
   div = Division(a,c);
   sub = Subtraction(a,c);
   e1 = Exponentiation1(a,c);
   e2 = Exponentiation2(a,c);
  
  //Addition 
	if (Addition(sum, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(sum, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(sum, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(sum, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(sum, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(sum, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  //Multiplication 
	if (Addition(mult, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(mult, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(mult, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(mult, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(mult, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(mult, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  //Division 
	if (Addition(div, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(div, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(div, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(div, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(div, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(div, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  //Subtraction 
	if (Addition(sub, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(sub, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(sub, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(sub, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(sub, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(sub, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
   //Exp1 
	if (Addition(e1, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(e1, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(e1, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(e1, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(e1, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(e1, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
   //Exp2 
	if (Addition(e2, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(e2, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(e2, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(e2, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(e2, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(e2, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
   sum = Addition(b,c);
   mult = Multiplication(b,c);
   div = Division(b,c);
   sub = Subtraction(b,c);
   e1 = Exponentiation1(b,c);
   e2 = Exponentiation2(b,c);
  
  //Addition 
	if (Addition(sum, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(sum, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(sum, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(sum, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(sum, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(sum, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  //Multiplication 
	if (Addition(mult, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(mult, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(mult, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(mult, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(mult, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(mult, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  //Division 
	if (Addition(div, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(div, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(div, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(div, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(div, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(div, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  //Subtraction 
	if (Addition(sub, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(sub, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(sub, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(sub, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(sub, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(sub, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
   //Exp1 
	if (Addition(e1, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(e1, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(e1, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(e1, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(e1, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(e1, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
   //Exp2 
	if (Addition(e2, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Multiplication(e2, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Division(e2, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}
	else if (Subtraction(e2, a) == T) {
		outfile << "Solved " << T << endl;
outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;		return true;
	}
  else if (Exponentiation1(e2, a) == T) {
		outfile << "Solved " << T << endl;
outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;		return true;
	}
  else if (Exponentiation2(e2, a) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " , "<< c<<" }"<< endl;
		return true;
	}

	else {
		return false;
	}
}

int main() {
	int a = 0;
	int b = 0;
  int c = 0;
  int n=0;
  outfile.open ("output.txt");
  Countdown C;
  ifstream infile;
	infile.open("input.txt");
	if (!infile) {
		exit(1);
	} 
  else {
    while (!infile.eof()) {
		  infile>>a>>b>>c;
    
      for(int x=101;x<=999; x++){
        C.Compare(x,a,b,c);
      }
		}
	}
}
