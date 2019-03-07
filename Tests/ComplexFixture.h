#pragma once
#include "gtest/gtest.h"
#include "../LibraryforTest/Complex.h"
class ComplexFixture : public testing::Test {

protected:
  virtual void setUp() {
    zero = Complex(0, 0);
  }

  Complex zero;
};