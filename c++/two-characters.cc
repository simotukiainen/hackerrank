#include <iostream>
#include <unordered_map>
#include <vector>
#include <functional>
#include <limits>

class UOP
{
public:
	const char a;
	const char b;
	UOP(const char& _a, const char& _b) :a{_a}, b{_b} {}
};

size_t hf(const UOP& uop)
{
	if (uop.a < uop.b)
		return std::hash<char>{}(uop.a) ^ std::hash<char>{}(uop.b) << 1;
	if (uop.b < uop.a)
		return std::hash<char>{}(uop.b) ^ std::hash<char>{}(uop.a) << 1;
	return std::hash<char>{}(uop.a);
}

bool eq(const UOP& first, const UOP& second)
{
	return (first.a == second.a && first.b == second.b)
		|| (first.a == second.b && first.b == second.a);
}

int main()
{
	std::unordered_map<UOP, int, decltype(&hf), decltype(&eq)> map {
		{}, hf, eq
	};
	std::unordered_map<char, int> occurrences {};
	std::vector<char> sequence {};
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	char c;
	while ((std::cin >> c).good()) {
		auto p = sequence.begin();
		while (p != sequence.end() && *p != c) {
			if (map.count({c, *p}) == 0) {
				if (occurrences[*p] > 1)
					map[{c, *p}] = -1;
				else
					map[{c, *p}] = 2;
			}
			++p;
		}
		++occurrences[c];
		if (p == sequence.end()) {
			sequence.push_back(c);
			continue;
		}
		for (auto q = sequence.begin(); q != p; ++q) {
			map[{c, *q}] = -1;
		}
		auto found = p++;
		while (p != sequence.end()) {
			auto& len = map[{c, *p}];
			if (len != -1) {
				len++;
			}
			std::swap(*found, *p);
			++p, ++found;
		}
	}
	int max = 0;
	for (auto it = map.begin(); it != map.end(); ++it) {
		if (it->second > max)
			max = it->second;
	}
	std::cout << max << '\n';
	return 0;
}
