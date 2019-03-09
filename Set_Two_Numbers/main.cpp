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
    outfile << "{ " << a << " , " << b << " }"<< endl;
		return true;
	}
	else if (Multiplication(a, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " }"<< endl;
		return true;
	}
	else if (Division(a, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " }"<< endl;
		return true;
	}
	else if (Subtraction(a, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " }"<< endl;
		return true;
	}
  else if (Exponentiation1(a, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " }"<< endl;
		return true;
	}
  else if (Exponentiation2(a, b) == T) {
		outfile << "Solved " << T << endl;
    outfile << "{ " << a << " , " << b << " }"<< endl;
		return true;
	}
	else {
		return false;
	}
}


int main() {
	int target = 0; //The number you are trying to solve for
	int a = 0;
	int b = 0;
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
		  infile>>a>>b;
    
      for(int x=101;x<=999; x++){
        C.Compare(x,a,b);
      }
		}
	}

}
