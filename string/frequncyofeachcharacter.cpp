#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "Enter a string: ";
	getline(cin, s);

	unordered_map<char, int> freq;

	for (char ch : s) {
		freq[ch]++;
	}

	for (auto it : freq) {
		cout << it.first << " -> " << it.second << endl;
	}

	return 0;
}
