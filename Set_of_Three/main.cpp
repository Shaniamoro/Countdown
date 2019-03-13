#include <iostream>
#include <fstream>
using namespace std;

ofstream outfile;
class Countdown {
	int T = 0; // target number 
	int a;
	int b;
  int c;
  int d;
  public:
    Countdown();
    Countdown(int, int, int,int,int);
    double Addition(int, int);
    double  Multiplication(int, int);
    double  Division(int, int); // Only integers allowed 
    double  Subtraction(int, int);// Only Positive Subtraction allowed
    double Exponentiation1(int,int);// First number raised to the second 
    double  Exponentiation2(int,int);//Second number raised to the first 
    bool Compare(int, int, int);
    bool Compare(int, int, int,int);
    bool Compare (int, int, int, int , int);
};
Countdown::Countdown() {
	// T = 10;
	// a = 5;
	// b = 2;
  // c= 1;
}

// Instead of a and b maybe use an array


Countdown::Countdown(int Target, int  first, int second,int third, int fourth) {
	T = Target;
	a = first;
	b = second;
  c = third;
  d = fourth;
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
  if (a>=b){
	  if ( b!=0 && a % b == 0) {
			div = a / b;
    } else {
    div = a/1;
    }
  } else if (a < b){
      if( a!=0 && b% a == 0) {
				div = b / a;
			} else {
        div=b/1;
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
double Countdown::Exponentiation1(int a,int b ) {
  if (a<10000 && b<10000){
    int pow =a;
    for(int p=1; p<b;p++){
    pow= pow* a;
    }
    return pow;
   } else {
    return a;
  }
}

double Countdown::Exponentiation2(int a,int b ) {
  if (a<10000 && b < 10000){
  int pow2 =b;
  for(int p=1; p<a;p++){
    pow2= pow2* b;
  }
  return pow2;
  } else {
   return b;
  }
}

bool Countdown::Compare(int T, int a, int b) {
	if (Addition(a, b) == T) {
	// 	outfile << "Solved " << T << endl;
  //  outfile << "{ " << a << " , " << b <<" }"<< endl;
		return true;
	}
	else if (Multiplication(a, b) == T) {
	// 	outfile << "Solved " << T << endl;
  //  outfile << "{ " << a << " , " << b <<" }"<< endl;
		return true;
	}
	else if (Division(a, b) == T) {
	// 	outfile << "Solved " << T << endl;
  //  outfile << "{ " << a << " , " << b <<" }"<< endl;
		return true;
	}
	else if (Subtraction(a, b) == T) {
		// outfile << "Solved " << T << endl;
    // outfile << "{ " << a << " , " << b <<" }"<< endl;
		return true;
	}
  else if (Exponentiation1(a, b) == T) {
		// outfile << "Solved " << T << endl;
    // outfile << "{ " << a << " , " << b <<" }"<< endl;
		return true;
	}
  else if (Exponentiation2(a, b) == T) {
		// outfile << "Solved " << T << endl;
    // outfile << "{ " << a << " , " << b <<" }"<< endl;
		return true;
	}
	else {
		return false;
	}
}
bool Countdown::Compare(int T, int a, int b,int c) {
  //Check if pairs of two can solve first
  if(Compare(T,a,b)== true){
    return true;
  }
  else if(Compare(T,b,c)==true){
    return true;
  }
  else if(Compare (T,a,c)==true){
    return true;
  }
  else if(Compare(T,Addition(a,b),c)==true){
    return true;
  }
  else if (Compare(T,Addition(b,c),a)==true){
    return true;
  }
  else if(Compare(T,Addition(a,c),b)==true){
    return true;
  }
  else if(Compare(T,Multiplication(a,b),c)==true){
    return true;
  }
  else if(Compare(T,Multiplication(b,c),a)==true){
    return true;
  }
  else if(Compare(T,Multiplication(a,c),b)==true){
    return true;
  }
  else if(Compare(T, Division(a,b),c)==true){
    return true;
  }
  else if(Compare(T, Division(b,c),a)==true){
    return true;
  }
  else if(Compare(T, Division(a,c),b)==true){
    return true;
  }
  else if(Compare(T, Subtraction(a,b),c)==true){
    return true;
  }
  else if(Compare(T, Subtraction(b,c),a)==true){
    return true;
  }
  else if(Compare(T, Subtraction(a,c),b)==true){
    return true;
  }
  else if(Compare(T, Exponentiation1(a,b),c)==true){
    return true;
  }
  else if(Compare(T, Exponentiation1(b,c),a)==true){
    return true;
  }
  else if(Compare(T, Exponentiation1(a,c),b)==true){
    return true;
  }
  else if(Compare(T, Exponentiation2(a,b),c)==true){
    return true;
  }
  else if(Compare(T, Exponentiation2(b,c),a)==true){
    return true;
  }
  else if(Compare(T, Exponentiation2(a,c),b)==true){
    return true;
  }
  else {
    return false;
  }
}
bool Countdown::Compare(int T, int a, int b,int c , int d) {
  //Check if pairs of two can solve first
  if(Compare(T,a,b,c)== true){
    return true;
  }
  if(Compare(T,a,b,d)== true){
    return true;
  }
   else if(Compare(T,a,c,d)==true){
    return true;
  }
  else if(Compare(T,b,c,d)==true){
    return true;
  }

  else if(Compare(T,Addition(a,b),c,d)==true){
    return true;
  }
   else if(Compare(T,Addition(a,c),b,d)==true){
    return true;
  }
   else if(Compare(T,Addition(a,d),b,c)==true){
    return true;
  }
   else if(Compare(T,Addition(b,c),a,d)==true){
    return true;
  }
   else if(Compare(T,Addition(b,d),a,c)==true){
    return true;
  }
   else if(Compare(T,Addition(c,d),a,b)==true){
    return true;
  }
  
    else if(Compare(T,Multiplication(a,b),c,d)==true){
    return true;
  }
   else if(Compare(T,Multiplication(a,c),b,d)==true){
    return true;
  }
   else if(Compare(T,Multiplication(a,d),b,c)==true){
    return true;
  }
   else if(Compare(T,Multiplication(b,c),a,d)==true){
    return true;
  }
   else if(Compare(T,Multiplication(b,d),a,c)==true){
    return true;
  }
   else if(Compare(T,Multiplication(c,d),a,b)==true){
    return true;
  }
  
   else if(Compare(T,Division(a,b),c,d)==true){
    return true;
  }
   else if(Compare(T,Division(a,c),b,d)==true){
    return true;
  }
   else if(Compare(T,Division(a,d),b,c)==true){
    return true;
  }
   else if(Compare(T,Division(b,c),a,d)==true){
    return true;
  }
   else if(Compare(T,Division(b,d),a,c)==true){
    return true;
  }
   else if(Compare(T,Division(c,d),a,b)==true){
    return true;
  }

  
  else if(Compare(T,Subtraction(a,b),c,d)==true){
    return true;
  }
   else if(Compare(T,Subtraction(a,c),b,d)==true){
    return true;
  }
   else if(Compare(T,Subtraction(a,d),b,c)==true){
    return true;
  }
   else if(Compare(T,Subtraction(b,c),a,d)==true){
    return true;
  }
   else if(Compare(T,Subtraction(b,d),a,c)==true){
    return true;
  }
   else if(Compare(T,Subtraction(c,d),a,b)==true){
    return true;
  }

   else if(Compare(T,Exponentiation1(a,b),c,d)==true){
    return true;
  }
   else if(Compare(T,Exponentiation1(a,c),b,d)==true){
    return true;
  }
   else if(Compare(T,Exponentiation1(a,d),b,c)==true){
    return true;
  }
   else if(Compare(T,Exponentiation1(b,c),a,d)==true){
    return true;
  }
   else if(Compare(T,Exponentiation1(b,d),a,c)==true){
    return true;
  }
   else if(Compare(T,Exponentiation1(c,d),a,b)==true){
    return true;
  }

  else if(Compare(T,Exponentiation2(a,b),c,d)==true){
    return true;
  }
   else if(Compare(T,Exponentiation2(a,c),b,d)==true){
    return true;
  }
   else if(Compare(T,Exponentiation2(a,d),b,c)==true){
    return true;
  }
   else if(Compare(T,Exponentiation2(b,c),a,d)==true){
    return true;
  }
   else if(Compare(T,Exponentiation2(b,d),a,c)==true){
    return true;
  }
   else if(Compare(T,Exponentiation2(c,d),a,b)==true){
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
  int d = 0;
  int n=0;
  outfile.open ("output.txt");
  Countdown C;
  ifstream infile;
	infile.open("input.txt");
	if (!infile) {
		exit(4);
	} 
  else {
    while (!infile.eof()) {
		  infile >> a >> b >> c >> d;
      outfile<< "{ " << a << " , " << b << " , "<<  c << ", " << d << "  }"<< endl;
      for(int x=101;x<=999; x++){
       if( C.Compare(x,a,b,c,d) == true){
          outfile<< "     This solves "<< x << endl;
        }
      }
	  }
  }
}
