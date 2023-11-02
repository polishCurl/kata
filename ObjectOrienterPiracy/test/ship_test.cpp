#include "src/ship.hpp"

#include "gtest/gtest.h"

TEST(ShipTestFixture, test_simple_worth_it) {
  Ship ship{22, 1};
  EXPECT_TRUE(ship.isWorthIt());
}

TEST(ShipTestFixture, test_simple_not_worth_it) {
  Ship ship{14, 10};
  EXPECT_FALSE(ship.isWorthIt());
}

TEST(ShipTestFixture, test_on_the_boundary) {
  Ship ship{23, 2};
  EXPECT_TRUE(ship.isWorthIt());
}

TEST(ShipTestFixture, test_no_crew) {
  Ship ship{20, 0};
  EXPECT_TRUE(ship.isWorthIt());
}

TEST(ShipTestFixture, test_sinking_ship) {
  Ship ship{0, 10000};
  EXPECT_FALSE(ship.isWorthIt());
}
