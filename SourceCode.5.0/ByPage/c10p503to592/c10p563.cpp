/** @file BST.cpp. */
#include <cstddef>   // definition of NULL
#include <new>       // for bad_alloc
#include "BST.h"     // header file

using namespace std;

BinarySearchTree::BinarySearchTree() : root(NULL)
{
}  // end default constructor

BinarySearchTree::BinarySearchTree(const BinarySearchTree& tree)
   throw(TreeException)
{
   copyTree(tree.root, root);
}  // end copy constructor

BinarySearchTree::~BinarySearchTree()
{
   destroyTree(root);
}  // end destructor

bool BinarySearchTree::isEmpty() const
{
   return (root == NULL);
}  // end searchTreeIsEmpty

void BinarySearchTree::searchTreeInsert(const TreeItemType& newItem)
   throw(TreeException)
{
   insertItem(root, newItem);
}  // end searchTreeInsert

void BinarySearchTree::searchTreeDelete(KeyType searchKey)
   throw(TreeException)
{
   deleteItem(root, searchKey);
}  // end searchTreeDelete

void BinarySearchTree::searchTreeRetrieve(KeyType searchKey,
					  TreeItemType& treeItem) const
   throw(TreeException)
{
   // if retrieveItem throws a TreeException, it is
   // ignored here and passed on to the point in the code
   // where searchTreeRetrieve was called
   retrieveItem(root, searchKey, treeItem);
}  // end searchTreeRetrieve

void BinarySearchTree::preorderTraverse(FunctionType visit)
{
   preorder(root, visit);
}  // end preorderTraverse

void BinarySearchTree::inorderTraverse(FunctionType visit)
{
   inorder(root, visit);
}  // end inorderTraverse

void BinarySearchTree::postorderTraverse(FunctionType visit)
{
   postorder(root, visit);
}  // end postorderTraverse

void BinarySearchTree::insertItem(TreeNode *& treePtr,
				  const TreeItemType& newItem)
   throw(TreeException)
{
   if (treePtr == NULL)
   {  // position of insertion found; insert after leaf

      // create a new node
      try
      {
	 treePtr = new TreeNode(newItem, NULL, NULL);
      }
      catch (bad_alloc e)
      {
	 throw TreeException(
	 "TreeException: insertItem cannot allocate memory");
      }  // end try
   }
   // else search for the insertion position
   else if (newItem.getKey() < treePtr->item.getKey())
      // search the left subtree
      insertItem(treePtr->leftChildPtr, newItem);

   else  // search the right subtree
      insertItem(treePtr->rightChildPtr, newItem);
}  // end insertItem

void BinarySearchTree::deleteItem(TreeNode *& treePtr,
                                  KeyType searchKey)
   throw(TreeException)
// Calls: deleteNodeItem.
{
   if (treePtr == NULL)
      throw TreeException("TreeException: delete failed");  // empty tree

   else if (searchKey == treePtr->item.getKey())
      // item is in the root of some subtree
      deleteNodeItem(treePtr);  // delete the item

   // else search for the item
   else if (searchKey < treePtr->item.getKey())
      // search the left subtree
      deleteItem(treePtr->leftChildPtr, searchKey);

   else  // search the right subtree
      deleteItem(treePtr->rightChildPtr, searchKey);
}  // end deleteItem

void BinarySearchTree::deleteNodeItem(TreeNode *& nodePtr)
// Algorithm note: There are four cases to consider:
//   1. The root is a leaf.
//   2. The root has no left child.
//   3. The root has no right child.
//   4. The root has two children.
// Calls: processLeftmost.
{
   TreeNode     *delPtr;
   TreeItemType replacementItem;

   // test for a leaf
   if ( (nodePtr->leftChildPtr == NULL) &&
        (nodePtr->rightChildPtr == NULL) )
   {  delete nodePtr;
      nodePtr = NULL;
   }  // end if leaf
   // test for no left child
   else if (nodePtr->leftChildPtr == NULL)
   {  delPtr = nodePtr;
      nodePtr = nodePtr->rightChildPtr;
      delPtr->rightChildPtr = NULL;
      delete delPtr;
   }  // end if no left child

   // test for no right child
   else if (nodePtr->rightChildPtr == NULL)
   {  delPtr = nodePtr;
      nodePtr = nodePtr->leftChildPtr;
      delPtr->leftChildPtr = NULL;
      delete delPtr;
   }  // end if no right child

   // there are two children:
   // retrieve and delete the inorder successor
   else
   {  processLeftmost(nodePtr->rightChildPtr,
                      replacementItem);
      nodePtr->item = replacementItem;
   }  // end if two children
}  // end deleteNodeItem

void BinarySearchTree::processLeftmost(TreeNode *& nodePtr, TreeItemType& treeItem)
{
   if (nodePtr->leftChildPtr == NULL)
   {  treeItem = nodePtr->item;
      TreeNode *delPtr = nodePtr;
      nodePtr = nodePtr->rightChildPtr;
      delPtr->rightChildPtr = NULL;  // defense
      delete delPtr;
   }

   else
      processLeftmost(nodePtr->leftChildPtr, treeItem);
}  // end processLeftmost

void BinarySearchTree::retrieveItem(TreeNode *treePtr,
                                    KeyType searchKey,
                                    TreeItemType& treeItem) const
   throw(TreeException)
{
   if (treePtr == NULL)
      throw TreeException("TreeException: searchKey not found");

   else if (searchKey == treePtr->item.getKey())
      // item is in the root of some subtree
      treeItem = treePtr->item;

   else if (searchKey < treePtr->item.getKey())
      // search the left subtree
      retrieveItem(treePtr->leftChildPtr,
                   searchKey, treeItem);

   else  // search the right subtree
      retrieveItem(treePtr->rightChildPtr,
                          searchKey, treeItem);
}  // end retrieveItem

// Implementations of copyTree, destroyTree, preorder,
// inorder, postorder, setRootPtr, rootPtr, getChildPtrs,
// setChildPtrs, and the overloaded assignment operator are
// the same as for the ADT binary tree.
// End of implementation file.
