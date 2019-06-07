#include <gtest/gtest.h>
#include <include/SingleLinkedList.hpp>

class isEmptyTest : public ::testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
};

TEST_F(isEmptyTest, byDefaultLinkedListShouldBeEmpty)
{
  SingleLinkedList *list = new SingleLinkedList();
  ASSERT_TRUE(list->isEmpty());
  list->push_back(1);
  ASSERT_FALSE(list->isEmpty());
  list->pop_back();
  ASSERT_TRUE(list->isEmpty());
}
