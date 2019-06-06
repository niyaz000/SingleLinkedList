#include <gtest/gtest.h>
#include <include/SingleLinkedList.hpp>

class popFrontTest : public ::testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
};

TEST_F(popFrontTest, shouldRemoveTheHeadAndUpdateNextNodeAsHead)
{
  SingleLinkedList *list = new SingleLinkedList();
  list->push_front(20);
  list->push_front(10);
  int data = list->pop_front();
  ASSERT_EQ(data, 10);
  ASSERT_EQ(list->peek_front(), 20);
}
