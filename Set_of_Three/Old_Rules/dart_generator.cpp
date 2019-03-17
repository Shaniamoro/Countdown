#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

ofstream outfile;

int main() {
  outfile.open ("input.txt");

//no pairs
 for (int i=1; i<=10;i++){
    for( int j=i+1; j<=10;j++){
      for (int k= j+1; k<= 10; k++){
        outfile<< i<< " "<< j<< " " <<k << endl;
      }
    }
  }
for( int j=1; j<=10;j++){
  for (int k= j+1; k<=10;k++){
   for (int i=1; i<=4;i++){
      outfile<<j << " "<< k<< " "<< 25*i <<endl;
   }
  }
}
for( int j=1; j<=4;j++){
  for (int i=j+1; i<=4;i++){
    for (int k=1; k<=10;k++){
      if( i!=j){
        outfile<<j*25 << " "<< 25*i << " " << k <<endl;
      }
    }
  }
}
for( int j=1; j<=4;j++){
  for (int i=j+1; i<=4;i++){
    for (int k=i+1; k<=4;k++){
      if( i!=j && i!=k && j!=k){
        outfile<<j*25 << " "<< 25*i << " " << k*25 <<endl;
      }
    }
  }
}

//onepair
  for (int i=1; i<=10;i++){
    for (int k = 1; k<=10; k++){
      if( k!=i){
        outfile << i << " " << i << " "<< k<<endl; 
      }
    }
  }
 for (int i=1; i<=10;i++){
     for (int k = 1; k<=4; k++){
      outfile << i << " " << i << " "<< k*25 <<endl; 
    }
  }
}
