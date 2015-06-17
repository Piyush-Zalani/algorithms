#include <iostream>

using namespace std;

int main()
{
	int start = 'A';
	int end = 'G';

	for(int i=end;i>=start;i--) {
		for(int j=start;j<=i;j++) {
			cout << (char)j << " ";
		}
		if(i != end) {
			for(int j=5;j<(3 + (end-i) * 4);j++) {
				cout << " ";
			}
		}
		for(int j=i==end?i-1:i;j>=start;j--) {
			cout << (char)j << " ";
		}
		cout << endl;
	}
	return 0;
}
