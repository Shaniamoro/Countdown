#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

ofstream outfile;

int main() {
  outfile.open ("input.txt");

//no pairs

// s s s s
 for (int i=1; i<=10;i++){
    for( int j=i+1; j<=10;j++){
      for (int k= j+1; k<= 10; k++){
        for ( int l =k+1; l<=10 ; l++){
         outfile<< i<< " "<< j<< " " <<k << " " << l << endl;
        }
      }
    }
  }

// s s s l
for( int j=1; j<=10;j++){
  for (int k= j+1; k<=10;k++){
    for ( int l = k+1; l <=10; l++){
      for (int i=1; i<=4;i++){
       outfile<<j << " "<< k << " " << l << " "<< 25*i <<endl;
      }
   }
  }
}

// s s l l
for( int j=1; j<=10;j++){
  for (int k= j+1; k<=10;k++){
    for ( int l= 1; l <=4; l++){
      for (int i=l+1; i<=4;i++){
       outfile<<j << " "<< k << " " << l*25 << " "<< 25*i <<endl;
      }
   }
  }
}

//slll
for( int j=1; j<=4;j++){
  for (int i=j+1; i<=4;i++){
    for ( int l = i+1; l<=4;l++){
      for (int k=1; k<=10;k++){
        if( i!=j && l!=j){
          outfile<<j*25 << " "<< 25*i <<" " << l*25 << " " << k <<endl;
        }
      }
    }
  }
}

// l l l l 
for( int j=1; j<=4;j++){
  for (int i=j+1; i<=4;i++){
    for (int k=i+1; k<=4;k++){
      for ( int l = k+1; l <=4; l++){
        if( i!=j && i!=k && j!=k){
          outfile<<j*25 << " "<< 25*i << " " << k*25 << " " << l*25 << endl;
        }
      }
    }
  }
}

//onepair

// s s l l 
 for (int i=1; i<=10;i++){
    for( int j=1; j<=4;j++){
      for (int k=j+1; k<= 4; k++){
        outfile<< i << " "<< i<< " " <<j*25 << " " << k*25 << endl;
      }
    }
  }


// s s s s 
 for (int i=1; i<=10;i++){
    for( int j=1; j<=10;j++){
      for (int k= j+1; k<= 10; k++){
        if( j!= i && k!=i) {
          outfile<< i << " "<< i<< " " <<j << " " << k << endl;
        }
      }
    }
  }
// s s s l

 for (int i=1; i<=10;i++){
    for( int j=1; j<=10;j++){
      for (int k=1; k<= 4; k++){
        if( j!= i) {
          outfile<< i << " "<< i<< " " <<j << " " << k*25 << endl;
        }
      }
    }
  }

// two pairs 
// s s s s 
 for (int i=1; i<=10;i++){
    for ( int j= i+1; j<=10 ; j++){
      outfile<< i << " "<< i<< " " <<j<< " " << j << endl;
    }
  }

}
