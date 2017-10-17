#include "gtest/gtest.h"
#include "heap.hpp"
#include <bits/stdc++.h>
using namespace std;

TEST(heap_sort, all_tests){
	int foo[] = {1, 3, 2, 5, 4};
	heap_sort(5,foo);
	ASSERT_EQ(foo[4], 5);
}
