#include <iostream>
#include <fstream>
using namespace std;

int main() {

	int a = 0; 
	int count[1000];
	for (int y = 101; y < 1000; y++) {
		count[y] = 0;
	}


	ifstream infile;
	infile.open("input.txt");

	ofstream outfile;
	outfile.open("out.txt");


	if (!infile) {
		exit(5);
	}
	else {

		while (infile >> a) {
			for (int i = 101; i < 1000; i++) {
				if (i == a) {
					count[i] += 1;
				}
		}

		}

	}

	for (int x = 101; x < 1000; x++) {
		outfile << x << " " << count[x] << endl;
	}
}
