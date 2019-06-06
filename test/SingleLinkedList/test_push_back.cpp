#include <gtest/gtest.h>
#include <include/SingleLinkedList.hpp>

class pushBackTest : public ::testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
};

TEST_F(pushBackTest, emptyLinkedListShouldAddThenNewNodeAsHead)
{
  SingleLinkedList *list = new SingleLinkedList();
  list->push_front(10);
  ASSERT_EQ(list->peek_back(), 10);
}

TEST_F(pushBackTest, nonEmptyLinkedListShouldAddThenNewNodeAtTheTail)
{
  SingleLinkedList *list = new SingleLinkedList();
  list->push_back(10);
  list->push_back(20);
  ASSERT_EQ(list->peek_back(), 20);
  list->push_back(30);
  ASSERT_EQ(list->peek_back(), 30);
}