#include <gtest/gtest.h>
#include "add.hpp"


TEST(AddTest, positiveNumbers){
	ASSERT_EQ(2, add(1, 1));
	ASSERT_EQ(0, add(0, 0));
}

int main(int argc, char **argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
