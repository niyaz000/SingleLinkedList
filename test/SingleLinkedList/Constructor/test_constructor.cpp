#include <include/SingleLinkedList.hpp>
#include <gtest/gtest.h>

class ConstructorTest : public ::testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
};

TEST_F(ConstructorTest, EmptyConstructorShouldInitializeTheHeadToNullptr)
{
}
