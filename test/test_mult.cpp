#include <gtest/gtest.h>
#include "multiplicacion.h"

TEST(MultiplicarTest, HandlesPositiveInput) {
    EXPECT_EQ(multiplicar(2, 3), 6);
    EXPECT_EQ(multiplicar(7, 5), 35);
}

TEST(MultiplicarTest, HandlesZeroInput) {
    EXPECT_EQ(multiplicar(0, 10), 0);
    EXPECT_EQ(multiplicar(10, 0), 0);
}

TEST(MultiplicarTest, HandlesNegativeInput) {
    EXPECT_EQ(multiplicar(-4, 6), -24);
    EXPECT_EQ(multiplicar(-3, -5), 15);
}

