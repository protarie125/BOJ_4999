#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	if (a.length() < b.length()) {
		cout << "no";
	}
	else {
		cout << "go";
	}

	return 0;
}