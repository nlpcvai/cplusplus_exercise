#include "Precompiled.h"

#include <vector>

using namespace std;

auto main() -> int
{
	auto c = vector<int> {};
	assert(c.empty());
	assert(c.size() == 0);

	c = vector<int> {1, 2, 3, 4, 5};

	assert(!c.empty());
	assert(c.size() == 5);

	c = vector<int> {begin(c), end(c)};

	assert(!c.empty());
	assert(c.size() == 5);

	c = vector<int> {begin(c) + 1, end(c) - 1};

	assert(c.size() == 3);

	assert(c[0] == 2);
	assert(c[1] == 3);
	assert(c[2] == 4);

	c = vector<int>(10, 123);

	assert(c.size() == 10);
	for (auto e : c){
		assert(e == 123);

	}

	c = vector<int> {1, 2, 3, 4, 5};
	for (auto e : c){
		printf("%d\n", e);

	}
	for (auto i = begin(c); i != end(c); ++i){
		printf("%d\n", *i);

	}
	for(auto i = 0u; i != c.size(); ++i){
		printf("%d\n", c[i]);
	}
	c.emplace_back(6);
	c.emplace(begin(c), 0);
	printf("\n");

	for (auto e : c){
		printf("%d\n", e);

	}


}



