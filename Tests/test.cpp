#include "pch.h"
#include "../LibraryforTest/Calculadora.h"
#include "gtest/gtest.h"

TEST(MiTest, Test1) {
  Calculadora *c = new Calculadora();
  double valor = c->suma(4.5, 5);
  EXPECT_EQ(valor, 9.5);

  delete c;
  //EXPECT_TRUE(true);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}