#include "gtest/gtest.h"
#include "../LibraryforTest/Calculadora.h"

TEST(MiCalculadora, Test1) {
  Calculadora *c = new Calculadora();
  double valor = c->suma(4.5, 5);
  EXPECT_EQ(valor, 9.5);

  delete c;
}