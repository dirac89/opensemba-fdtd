#include "Square.cpp"
#include <gtest/gtest.h>
 
TEST(SquareRootTest, PositiveNos) { 
    ASSERT_EQ(6, SquareRoot(36.0));
    ASSERT_EQ(9.0, SquareRoot(81.0));
    ASSERT_EQ(25.4, SquareRoot(645.16));
    ASSERT_EQ(15, SquareRoot(225.0));
}
 
TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(-1.0, SquareRoot(-15.0));
    ASSERT_EQ(-1.0, SquareRoot(-0.2));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
