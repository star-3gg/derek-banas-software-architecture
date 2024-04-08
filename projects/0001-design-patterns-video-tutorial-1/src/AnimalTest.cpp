#include "Animal.h"
#include "gtest/gtest.h"
/* #include "../../../external/googletest/googletest/include/gtest/gtest.h" */

TEST(AnimalTest, GetName) {
  Animal *animal = new Animal();
  animal->setName("Lion");
  ASSERT_EQ(animal->getName(), "Lion");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
