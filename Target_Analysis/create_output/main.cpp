
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

	string line;

	ifstream infile;
	infile.open("input.txt");

	ofstream outfile; 
	outfile.open("out.txt");


	if (!infile) {
		exit(5);
	}
	else {

		while (!infile.eof()) {
			getline(infile, line);

			if (line.length() == 0 || line[0] == '{')
			{
				cout << "IGNORE LINE\n";
			}
			else
			{
				outfile << line << "\n";
			}

		}// End While

	}
	system("pause");
}
