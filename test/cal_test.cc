#include <gtest/gtest.h>
#include "../src/cal.h"

TEST(MathAddTest, PositiveNum) { 
    EXPECT_EQ(2, cal::add(1, 1));
    EXPECT_EQ(10, cal::add(2, 8));
    EXPECT_EQ(100, cal::add(50, 50));
}

TEST(MathAddTest, ZeroB) { 
    EXPECT_EQ(1, cal::add(1, 0));
    EXPECT_EQ(10, cal::add(10, 0));
    EXPECT_EQ(100, cal::add(100, 0));
}

TEST(MathSubTest, PositiveNum) { 
    EXPECT_EQ(0, cal::sub(1, 1));
    EXPECT_EQ(-6, cal::sub(2, 8));
    EXPECT_EQ(100, cal::sub(150, 50));
}

TEST(MathSubTest, ZeroB) { 
    EXPECT_EQ(1, cal::sub(1, 0));
    EXPECT_EQ(10, cal::sub(10, 0));
    EXPECT_EQ(100, cal::sub(100, 0));
}

TEST(MathMulTest, PositiveNum) { 
    EXPECT_EQ(1, cal::mul(1, 1));
    EXPECT_EQ(16, cal::mul(2, 8));
    EXPECT_EQ(1500, cal::mul(150, 10));
}

TEST(MathMulTest, ZeroB) { 
    EXPECT_EQ(0, cal::mul(1, 0));
    EXPECT_EQ(0, cal::mul(10, 0));
    EXPECT_EQ(0, cal::mul(100, 0));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
