#include <gtest/gtest.h>
#include "../src/Example.hpp"

TEST(ExampleTests, example) {
  ASSERT_EQ(add(1, 2), 3);

}
