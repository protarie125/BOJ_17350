#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto isIn = bool{ false };
	while (0 < (n--)) {
		auto s = string{};
		cin >> s;

		if ("anj" == s) {
			isIn = true;
			break;
		}
	}

	if (isIn) {
		cout << "构具;";
	}
	else {
		cout << "构具?";
	}

	return 0;
}