#include <gtest/gtest.h>
#include "attribut_tests.inl"

int main(int argc,char * argv[]) {
	::testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}