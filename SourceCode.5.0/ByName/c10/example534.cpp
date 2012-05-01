#include <iostream>
#include "BinaryTree.h"  // binary tree operations

using namespace std;

void display(TreeItemType& anItem);

int main()
{
   BinaryTree tree1, tree2, left; // empty trees
   BinaryTree tree3(70);    // tree with only a root 70

// build the tree in Figure 10-10
   tree1.setRootData(40);
   tree1.attachLeft(30);
   tree1.attachRight(50);

   tree2.setRootData(20);
   tree2.attachLeft(10);
   tree2.attachRightSubtree(tree1);

   // tree in Fig 10-10
   BinaryTree binTree(60, tree2, tree3);

   binTree.inorderTraverse(display);
   binTree.getLeftSubtree().inorderTraverse(display);
   binTree.detachLeftSubtree(left);
   left.inorderTraverse(display);
   binTree.inorderTraverse(display);

   return 0;
}  // end main
