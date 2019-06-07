#include <gtest/gtest.h>
#include <include/SingleLinkedList.hpp>

class removeTest : public ::testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
};

TEST_F(removeTest, linkedListIsEmptyShouldReturnFalse)
{
  SingleLinkedList *list = new SingleLinkedList();
  ASSERT_FALSE(list->remove(10));
}

TEST_F(removeTest, dataIsPresentInHead)
{
  SingleLinkedList *list = new SingleLinkedList();
  list->push_front(40);
  list->push_front(30);
  list->push_front(20);
  list->push_front(10);
  std::vector<int> expected = {20, 30, 40};
  ASSERT_TRUE(list->remove(10));
  auto vect = list->toList();
  ASSERT_EQ(vect, expected);
}

TEST_F(removeTest, dataIsPresentAtTail)
{
  SingleLinkedList *list = new SingleLinkedList();
  list->push_front(40);
  list->push_front(30);
  list->push_front(20);
  list->push_front(10);
  std::vector<int> expected = {10, 20, 30};
  ASSERT_TRUE(list->remove(40));
  auto vect = list->toList();
  ASSERT_EQ(vect, expected);
}

TEST_F(removeTest, dataIsPresentInBetween)
{
  SingleLinkedList *list = new SingleLinkedList();
  list->push_front(40);
  list->push_front(30);
  list->push_front(20);
  list->push_front(10);
  std::vector<int> expected = {10, 20, 40};
  ASSERT_TRUE(list->remove(30));
  auto vect = list->toList();
  ASSERT_EQ(vect, expected);
}

TEST_F(removeTest, dataIsNotPresent)
{
  SingleLinkedList *list = new SingleLinkedList();
  list->push_front(40);
  list->push_front(30);
  list->push_front(20);
  list->push_front(10);
  std::vector<int> expected = {10, 20, 30, 40};
  ASSERT_FALSE(list->remove(400));
  auto vect = list->toList();
  ASSERT_EQ(vect, expected);
}