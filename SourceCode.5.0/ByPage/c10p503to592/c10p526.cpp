/** @file BinaryTree.cpp */

#include <cstddef>  // definition of NULL
#include <new>      // for bad_alloc
#include "BinaryTree.h"      // header file

using namespace std;

BinaryTree::BinaryTree() : root(NULL)
{
}  // end default constructor

BinaryTree::BinaryTree(const TreeItemType& rootItem)
   throw(TreeException)
{
   try
   {
      root = new TreeNode(rootItem, NULL, NULL);
   }
   catch (bad_alloc e)
   {  delete root;
      throw TreeException(
	 "TreeException: constructor cannot allocate memory");
   }  // end try
}  // end constructor

BinaryTree::BinaryTree(const TreeItemType& rootItem,
                       BinaryTree& leftTree,
                       BinaryTree& rightTree)
   throw(TreeException)
{
   try
   {
      root = new TreeNode(rootItem, NULL, NULL);

      attachLeftSubtree(leftTree);
      attachRightSubtree(rightTree);
   }
   catch (bad_alloc e)
   {  delete root;
      throw TreeException(
	 "TreeException: constructor cannot allocate memory");
   }  // end try
}  // end constructor

BinaryTree::BinaryTree(const BinaryTree& tree)
   throw(TreeException)
{
   try
   {
      copyTree(tree.root, root);
   }
   catch (bad_alloc e)
   {  destroyTree(tree.root);
      throw TreeException(
	 "TreeException: copy constructor cannot allocate memory");
   }  // end try
}  // end copy constructor

BinaryTree::BinaryTree(TreeNode *nodePtr) : root(nodePtr)
{
}  // end protected constructor

BinaryTree::~BinaryTree()
{
   destroyTree(root);
}  // end destructor

bool BinaryTree::isEmpty() const
{
   return (root == NULL);
}  // end isEmpty

TreeItemType BinaryTree::getRootData() const
   throw(TreeException)
{
   if (isEmpty())
      throw TreeException("TreeException: Empty tree");
   return root->item;
}  // end getRootData

void BinaryTree::setRootData(const TreeItemType& newItem)
   throw(TreeException)
{
   if (!isEmpty())
      root->item = newItem;
   else
   {
      try
      {
	 root = new TreeNode(newItem, NULL, NULL);
      }
      catch (bad_alloc e)
      {
	 throw TreeException(
	    "TreeException: setRootData cannot allocate memory");
      }  // end try
    }  // end if
}  // end setRootData

void BinaryTree::attachLeft(const TreeItemType& newItem)
   throw(TreeException)
{
   if (isEmpty())
      throw TreeException("TreeException: Empty tree");
   else if (root->leftChildPtr != NULL)
      throw TreeException(
	 "TreeException: Cannot overwrite left subtree");
   else  // Assertion: nonempty tree; no left child
   {
      try
      {
	 root->leftChildPtr = new TreeNode(newItem, NULL, NULL);
      }
      catch (bad_alloc e)
      {
	 throw TreeException(
	    "TreeException: attachLeft cannot allocate memory");
      }  // `end try
   }  // end if
}  // end attachLeft

void BinaryTree::attachRight(const TreeItemType& newItem)
   throw(TreeException)
{
   if (isEmpty())
      throw TreeException("TreeException: Empty tree");
   else if (root->rightChildPtr != NULL)
      throw TreeException(
	 "TreeException: Cannot overwrite right subtree");
   else  // Assertion: nonempty tree; no right child
   {
      try
      {
	 root->rightChildPtr = new TreeNode(newItem, NULL, NULL);
      }
      catch (bad_alloc e)
      {
	 throw TreeException(
	    "TreeException: attachRight cannot allocate memory");
      }  // `end try
   }  // end if
}  // end attachRight

void BinaryTree::attachLeftSubtree(BinaryTree& leftTree)
   throw(TreeException)
{
   if (isEmpty())
      throw TreeException("TreeException: Empty tree");
   else if (root->leftChildPtr != NULL)
      throw TreeException(
	 "TreeException: Cannot overwrite left subtree");
   else  // Assertion: nonempty tree; no left child
   {  root->leftChildPtr = leftTree.root;
      leftTree.root = NULL;
   }  // end if
}  // end attachLeftSubtree

void BinaryTree::attachRightSubtree(BinaryTree& rightTree)
   throw(TreeException)
{
   if (isEmpty())
      throw TreeException("TreeException: Empty tree");
   else if (root->rightChildPtr != NULL)
      throw TreeException(
	 "TreeException: Cannot overwrite right subtree");
   else  // Assertion: nonempty tree; no right child
   {  root->rightChildPtr = rightTree.root;
      rightTree.root = NULL;
   }  // end if
}  // end attachRightSubtree

void BinaryTree::detachLeftSubtree(BinaryTree& leftTree)
   throw(TreeException)
{
   if (isEmpty())
      throw TreeException("TreeException: Empty tree");
   else
   {  leftTree = BinaryTree(root->leftChildPtr);
      root->leftChildPtr = NULL;
   }  // end if
}  // end detachLeftSubtree

void BinaryTree::detachRightSubtree(BinaryTree& rightTree)
   throw(TreeException)
{
   if (isEmpty())
      throw TreeException("TreeException: Empty tree");
   else
   {  rightTree = BinaryTree(root->rightChildPtr);
      root->rightChildPtr = NULL;
   }  // end if
}  // end detachRightSubtree

BinaryTree BinaryTree::getLeftSubtree() const
   throw(TreeException)
{
   TreeNode *subTreePtr;

   if (isEmpty())
      return BinaryTree();
   else
   {  copyTree(root->leftChildPtr, subTreePtr);
      return BinaryTree(subTreePtr);
   }  // end if
}  // end getLeftSubtree

BinaryTree BinaryTree::getRightSubtree() const
   throw(TreeException)
{
   TreeNode *subTreePtr;

   if (isEmpty())
      return BinaryTree();
   else
   {  copyTree(root->rightChildPtr, subTreePtr);
      return BinaryTree(subTreePtr);
   }  // end if
}  // end getRightSubtree

void BinaryTree::preorderTraverse(FunctionType visit)
{
   preorder(root, visit);
}  // end preorderTraverse

void BinaryTree::inorderTraverse(FunctionType visit)
{
   inorder(root, visit);
}  // end inorderTraverse

void BinaryTree::postorderTraverse(FunctionType visit)
{
   postorder(root, visit);
}  // end postorderTraverse

BinaryTree& BinaryTree::operator=(const BinaryTree& rhs)
   throw(TreeException)
{
   if (this != &rhs)
   {  destroyTree(root);  // deallocate left-hand side
      copyTree(rhs.root, root);  // copy right-hand side
   }  // end if
   return *this;
}  // end operator=

void BinaryTree::copyTree(TreeNode *treePtr,
                          TreeNode *& newTreePtr) const
   throw(TreeException)
{
   // preorder traversal
   if (treePtr != NULL)
   {  // copy node
      try
      {
	 newTreePtr = new TreeNode(treePtr->item, NULL, NULL);
	 copyTree(treePtr->leftChildPtr, newTreePtr->leftChildPtr);
	 copyTree(treePtr->rightChildPtr, newTreePtr->rightChildPtr);
      }
      catch (bad_alloc e)
      {
	 throw TreeException(
	    "TreeException: copyTree cannot allocate memory");
      }  // `end try
   }
   else
      newTreePtr = NULL;  // copy empty tree
}  // end copyTree

void BinaryTree::destroyTree(TreeNode *& treePtr)
{
   // postorder traversal
   if (treePtr != NULL)
   {  destroyTree(treePtr->leftChildPtr);
      destroyTree(treePtr->rightChildPtr);
      delete treePtr;
      treePtr = NULL;
   }  // end if
}  // end destroyTree

TreeNode *BinaryTree::rootPtr() const
{
   return root;
}  // end rootPtr

void BinaryTree::setRootPtr(TreeNode *newRoot)
{
   root = newRoot;
}  // end setRoot

void BinaryTree::getChildPtrs(TreeNode *nodePtr,
                              TreeNode *& leftPtr,
                              TreeNode *& rightPtr) const
{
   leftPtr = nodePtr->leftChildPtr;
   rightPtr = nodePtr->rightChildPtr;
}  // end getChildPtrs

void BinaryTree::setChildPtrs(TreeNode *nodePtr,
                              TreeNode *leftPtr,
                              TreeNode *rightPtr)
{
   nodePtr->leftChildPtr = leftPtr;
   nodePtr->rightChildPtr = rightPtr;
}  // end setChildPtrs

void BinaryTree::preorder(TreeNode *treePtr,
                          FunctionType visit)
{
   if (treePtr != NULL)
   {  visit(treePtr->item);
      preorder(treePtr->leftChildPtr, visit);
      preorder(treePtr->rightChildPtr, visit);
   }  // end if
}  // end preorder

void BinaryTree::inorder(TreeNode *treePtr,
                         FunctionType visit)
{
   if (treePtr != NULL)
   {  inorder(treePtr->leftChildPtr, visit);
      visit(treePtr->item);
      inorder(treePtr->rightChildPtr, visit);
   }  // end if
}  // end inorder

void BinaryTree::postorder(TreeNode *treePtr,
                           FunctionType visit)
{
   if (treePtr != NULL)
   {  postorder(treePtr->leftChildPtr, visit);
      postorder(treePtr->rightChildPtr, visit);
      visit(treePtr->item);
   } // end if
}  // end postorder
// End of implementation file.
