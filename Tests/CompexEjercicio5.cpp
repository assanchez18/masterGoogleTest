#include "gtest/gtest.h"
#include "../LibraryforTest/Complex.h"
#include "ComplexFixture.h"


TEST_F(ComplexFixture, thenError) {
  EXPECT_EQ(Complex(1, 0), zero.add(Complex(1, 1)));
}
