#include <gtest/gtest.h>
#include <include/SingleLinkedList.hpp>

class toListTest : public ::testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
};

TEST_F(toListTest, shouldReturnTheLinkedListAsAVector)
{
  SingleLinkedList *list = new SingleLinkedList();
  list->push_back(10);
  list->push_back(20);
  list->push_back(30);
  list->push_front(9);
  list->push_front(5);
  list->push_front(1);
  list->push_back(100);
  auto vect = list->toList();
  std::vector<int> expected = {1, 5, 9, 10, 20, 30, 100};
  ASSERT_EQ(vect, expected);
}
