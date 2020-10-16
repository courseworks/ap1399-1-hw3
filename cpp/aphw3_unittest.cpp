#include <limits.h>
#include "aphw3.h"
#include "bst.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include "gtest/gtest.h"
namespace
{
/*
TEST(APHW3Test, BSTTest0)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    mytree->add(10);
    mytree->add(12);
    EXPECT_EQ(10, mytree->root());    
}

TEST(APHW3Test, BSTTest1)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    mytree->add(10);
    mytree->add(12);
    EXPECT_EQ(2, mytree->size());    
}

TEST(APHW3Test, BSTTest2)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    mytree->add(10);
    mytree->add(12);
    mytree->remove(12);
    EXPECT_EQ(1, mytree->size());    
}

TEST(APHW3Test, BSTTest3)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    mytree->add(10);
    mytree->add(12);
    mytree->remove(10);
    EXPECT_EQ(12, mytree->root());    
}

TEST(APHW3Test, BSTTest4)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    mytree->add(10);
    mytree->add(12);
    mytree->add(9);
    mytree->add(14);
    auto v = mytree->inorder();
    EXPECT_EQ(10, v[1]);    
}

TEST(APHW3Test, BSTTest5)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    mytree->add(10);
    mytree->add(12);
    mytree->add(9);
    mytree->add(14);
    auto v = mytree->preorder();
    EXPECT_EQ(10, v[0]);    
}

TEST(APHW3Test, BSTTest6)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    mytree->add(10);
    mytree->add(12);
    mytree->add(9);
    mytree->add(14);
    mytree->remove(9);
    auto v = mytree->inorder();
    EXPECT_EQ(10, v[0]);    
}

TEST(APHW3Test, BSTTest7)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    mytree->add(10)->add(14)->add(12);
    auto v = mytree->inorder();
    EXPECT_EQ(12, v[1]);    
}

TEST(APHW3Test, BSTTest8)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    mytree->add(10)->add(14)->add(12)->remove(10);
    EXPECT_EQ(14, mytree->root());    
}

TEST(APHW3Test, BSTTest9)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    mytree->add(10);
    mytree->add(9);
    mytree->add(11);
    mytree->add(14);
    BST tree{*mytree};
    mytree->remove(11);
    EXPECT_EQ(3, mytree->size());    
    EXPECT_EQ(4, tree.size());    
}

TEST(APHW3Test, BSTTest10)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    *mytree + 6;
    *mytree = *mytree + 5;
    *mytree = *mytree + 7;
    BST tree = *mytree + 10;
    EXPECT_EQ(5, mytree->root());    
    EXPECT_EQ(3, tree.size());    
}
TEST(APHW3Test, BSTTest11)
{
    std::shared_ptr<BST>mytree{std::make_shared<BST>()};
    *mytree + 6;
    *mytree = *mytree + 5;
    *mytree = *mytree + 7;
    BST tree = *mytree + 10;
    EXPECT_EQ(false, mytree->search(6));    
}
*/
}
