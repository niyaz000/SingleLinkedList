#include <gtest/gtest.h>
#include <include/SingleLinkedList.hpp>

class pushFrontTest : public ::testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
};

TEST_F(pushFrontTest, emptyLinkedListShouldAddThenNewNodeAsHead)
{
  SingleLinkedList *list = new SingleLinkedList();
  list->push_front(10);
  ASSERT_EQ(list->peek_front(), 10);
}

TEST_F(pushFrontTest, nonEmptyLinkedListShouldAddThenNewNodeAsHead)
{
  SingleLinkedList *list = new SingleLinkedList();
  list->push_front(10);
  list->push_front(20);
  ASSERT_EQ(list->peek_front(), 20);
  list->push_front(30);
  ASSERT_EQ(list->peek_front(), 30);
}