﻿#include "CMake-dedication.h"

using namespace std;

int main() {
	auto i{ 0x01B99644 };
	std::string x{ " DFaeeillnor" };
	while (i--) std::next_permutation(x.begin(), x.end());
	std::cout << x;
}


