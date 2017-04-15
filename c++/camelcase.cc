#include <iostream>
#include <cctype>

int main()
{
	int words {1};
	char c;
	std::cin >> std::noskipws;
	while ((std::cin >> c).good() && c != '\n') {
		if (std::isupper(c))
			++words;
	}
	std::cout << words << '\n';

}

