// must refer- http://www.cplusplus.com/reference/library/manipulators/

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        
        // LINE 1 
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long) A << endl; // actual printed part

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl; // actual printed part

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl; // actual printed part



	}
	return 0;

}

/*
Input Format

The first line contains an integer, T, the number of test cases.
Each of the T subsequent lines describes a test case as 3 space-separated floating-point numbers:A ,B , and ,C respectively.

Output Format

For each test case, print 3 lines containing the formatted A,B , and C respectively. Each A ,B , and C  must be formatted as follows:

A: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the  prefix) in lower case letters.
B: Print it to a scale of  decimal places, preceded by a + or - sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly  characters wide.
C: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.

Sample Input
1  
100.345 2006.008 2331.41592653498

Sample Output
0x64             
_______+2006.01  
2.331415927E+03
*/
