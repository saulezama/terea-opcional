#include "gmock/gmock.h"

#include "example.h"

using namespace testing;

TEST(funciones, adicional) {

	ASSERT_THAT(add(0, 10, arr, NULL), false);
	ASSERT_THAT(add(0, 0, arr, 2), true);
}

TEST(funciones, remove) {

	ASSERT_THAT(removePos(n+1, arr, NULL), false);
	ASSERT_THAT(removePos(0, arr, 3), true);
}