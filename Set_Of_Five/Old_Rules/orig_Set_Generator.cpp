#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

ofstream outfile;

int main() {
  outfile.open ("input.txt");

//no pairs

// s s s s s
 for (int i=1; i<=10;i++){
    for( int j=i+1; j<=10;j++){
      for (int k= j+1; k<= 10; k++){
        for ( int l =k+1; l<=10 ; l++){
          for (int m= l+1; m<=10 ; m++){
           outfile<< i<< " "<< j<< " " <<k << " " << l << " " << m<< endl;
          }
        }
      }
    }
  }


// s s s s l
 for (int i=1; i<=10;i++){
    for( int j=i+1; j<=10;j++){
      for (int k= j+1; k<= 10; k++){
        for ( int l =k+1; l<=10 ; l++){
          for (int m= 1; m<=4 ; m++){
           outfile<< i<< " "<< j<< " " <<k << " " << l << " " << m* 25<< endl;
          }
        }
      }
    }
  }
// s s s l l
 for (int i=1; i<=10;i++){
    for( int j=i+1; j<=10;j++){
      for (int k= j+1; k<= 10; k++){
        for ( int l =1; l<=4 ; l++){
          for (int m= l+1; m<=4 ; m++){
           outfile<< i<< " "<< j<< " " <<k << " " << l*25<< " " << m* 25<< endl;
          }
        }
      }
    }
  }

// s s l l l
 for (int i=1; i<=10;i++){
    for( int j=i+1; j<=10;j++){
      for (int k= 1; k<= 4; k++){
        for ( int l =k+1; l<=4 ; l++){
          for (int m= l+1; m<=4 ; m++){
           outfile<< i<< " "<< j<< " " <<k*25 << " " << l*25<< " " << m* 25<< endl;
          }
        }
      }
    }
  }

// s l l l l
 for (int i=1; i<=10;i++){
    for( int j=1; j<=4;j++){
      for (int k= j+ 1; k<= 4; k++){
        for ( int l =k+1; l<=4 ; l++){
          for (int m= l+1; m<=4 ; m++){
           outfile<< i<< " "<< j*25<< " " <<k*25 << " " << l*25<< " " << m* 25<< endl;
          }
        }
      }
    }
  }

//onepair


// s s s s s
 for (int i=1; i<=10;i++){
    for( int j=1; j<=10;j++){
      for (int k= j+1; k<= 10; k++){
        for ( int l =k+1; l<=10 ; l++){
          if( j!= i && k!=i && l !=i){
           outfile<< i<< " "<< i<< " " <<j << " " << k << " "<< l << endl;
          }
        }
      }
    }
  }

// s s s s l
 for (int i=1; i<=10;i++){
    for( int j=1; j<=10;j++){
      for (int k= j+1; k<= 10; k++){
        for ( int l =1; l<=4 ; l++){
          if( j!= i && k!=i){
           outfile<< i<< " "<< i<< " " <<j << " " << k << " " << l*25 << endl;
          }
        }
      }
    }
  }

  // s s s l l
 for (int i=1; i<=10;i++){
    for( int j=1; j<=10;j++){
      for (int k= 1; k<= 4; k++){
        for ( int l =k + 1; l<=4 ; l++){
          if( j!= i){
           outfile<< i<< " "<< i<< " " <<j << " " << k*25 << " " << l*25 << endl;
          }
        }
      }
    }
  }

 // s s l l l
 for (int i=1; i<=10;i++){
    for( int j=1; j<=4;j++){
      for (int k= j+1; k<= 4; k++){
        for ( int l =k + 1; l<=4 ; l++){
         outfile<< i<< " "<< i<< " " <<j*25 << " " << k*25 << " " << l*25 << endl;
        }
      }
    }
  }


// two pairs 
// s s s s s
 for (int i=1; i<=10;i++){
    for( int j=i+1; j<=10;j++){
      for (int k= 1; k<= 10; k++){
        if (k !=i && k!=j){
         outfile<< i<< " "<< i<< " " <<j << " " << j << " " << k<< endl;
        }
      }
    }
  }
  // s s s s l 
 for (int i=1; i<=10;i++){
    for( int j=i+1; j<=10;j++){
      for (int k= 1; k<= 4; k++){
        outfile<< i<< " "<< i<< " " <<j << " " << j << " " << k*25<< endl;
      }
    }
  }

}
