#include "gtest/gtest.h"
#include "ComplexFixture.h"


TEST_F(ComplexFixture, GivenZeroComplex_whenRealPartZeroAndImagPartZero) {
  EXPECT_EQ(0, zero.getRealPart());
  EXPECT_EQ(0, zero.getImaginaryPart());
}

TEST_F(ComplexFixture, GivenZeroComplexAndOneComplex_whenAdd_ZeroComplex_thenZeroIsNeutral) {
  Complex complexOne(1, 1);
  EXPECT_EQ(Complex(1,1), complexOne.add(zero));
}

TEST_F(ComplexFixture, GivenZero_whenReciprocal_thenDivisionByZeroExceptionThrown) {
  EXPECT_THROW(zero.reciprocal(), std::overflow_error);
}
