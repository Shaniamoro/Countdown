#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;


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
    bool Compare(int, int, int); //Checks to see if the target is solved 
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
// Performs the addition operation on two numbers 
int Countdown::Addition(int a, int b) {
	int sum = a + b;
	return sum;
}
// Performs the multiplication operation on two numbers 
int Countdown::Multiplication(int a, int b) {
	int mult = a * b;
	return mult;
}
// Performs the division operation on two numbers 
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
// Performs the subtraction operation on two numbers 
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


//Checks if the target number is reached by checking each operation
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
	else {
		return false;
	}
}

int main() {
	int target = 0; //The number you are trying to solve for
	int a = 0;
	int b = 0;
  int n=0;

  // Output file with the details 
	ofstream outfile;
	outfile.open("output.txt");
	// Output file with the number solved 
	ofstream out;
	out.open("out.txt");

  Countdown C;

  ifstream infile;
	infile.open("input.txt");
	if (!infile) {
		exit(1);
	} 
  else {
    while (infile >>a >> b) {
		  int count =0;
      outfile<< "{ "<< a << " , "<< b << " }"<< endl;
      out<< "{ "<< a << " , "<< b << " }"<< endl;
      for(int x=101;x<=999; x++){
        if(C.Compare(x,a,b)== true){
          count++;
          outfile<< "     This solves "<< x << endl;
        }

      }
      out << "        Number solved :" << count << endl;
		}
	}
  outfile.close();
	out.close();
}
