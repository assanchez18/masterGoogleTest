#include "gtest/gtest.h"
#include "../LibraryforTest/Complex.h"

using TestType = std::pair<Complex, double>;
class ParametrizedTestFixture : public ::testing::TestWithParam<TestType> {

};

TEST_P(ParametrizedTestFixture, givenComplex_thenAbsolute_) {
  Complex c = GetParam().first;
  double v = GetParam().second;
  ASSERT_NEAR(c.abs(), v,0.01);
}

INSTANTIATE_TEST_CASE_P(Parameters, ParametrizedTestFixture, 
                        ::testing::Values(TestType(Complex(0, 0), 0),
                                          TestType(Complex(1, 1), 1.42),
                                          TestType(Complex(2, 2), 2.82),
                                          TestType(Complex(5, 5), 7.07),
                                          TestType(Complex(10, 1), 10.04),
                                          TestType(Complex(2, 20), 20.09)
                                          ));