#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	unordered_map<char, size_t> freq {50};
	char c;
	while ((cin >> c).good()) {
		++freq[c];
	}
	if (freq.size() < 2) {
		cout << "YES\n";
		return 0;
	}
	vector<size_t> freqs{};
	for (const auto& it: freq) {
		freqs.push_back(it.second);
	}
	sort(freqs.begin(), freqs.end());
	auto head = freqs.begin();
	auto tail = freqs.end() - 1;
	if (*tail == *head) {
		cout << "YES\n";
		return 0;
	}
	if ((*head == 1 && *(head + 1) == *tail)
		|| (*tail - *head == 1 && *(tail - 1) == *head)) {
		cout << "YES\n";
		return 0;
	}
	cout << "NO\n";
	return 0;
}
