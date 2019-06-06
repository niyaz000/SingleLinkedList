#include <gtest/gtest.h>
#include <include/SingleLinkedList.hpp>

class pustFrontTest : public ::testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
};

TEST_F(pustFrontTest, emptyLinkedListShouldAddThenNewNodeAsHead)
{
  SingleLinkedList *list = new SingleLinkedList();
  list->push_front(10);
  ASSERT_EQ(list->peek_front(), 10);
}