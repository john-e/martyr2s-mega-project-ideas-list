#include<iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	for(int i=0; i<(s.length()/2);i++) {
		char t = s[i];
		s[i] = s[s.length()-1-i];
		s[s.length()-1-i] = t;
	}
	cout << s << endl;
	return 0;
}
