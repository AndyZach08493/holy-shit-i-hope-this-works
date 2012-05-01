/** @file BinaryTree.h */
#include "TreeException.h"
#include "TreeNode.h" // contains definitions for TreeNode
                      // and TreeItemType

typedef void (*FunctionType)(TreeItemType& anItem);

/** @class BinaryTree
 *  ADT binary tree. */
class BinaryTree
{
public:
// constructors and destructor:
   BinaryTree();
   BinaryTree(const TreeItemType& rootItem) throw(TreeException);
   BinaryTree(const TreeItemType& rootItem,
              BinaryTree& leftTree,
              BinaryTree& rightTree) throw(TreeException);
   BinaryTree(const BinaryTree& tree) throw(TreeException);
   virtual ~BinaryTree();

// binary tree operations:
   virtual bool isEmpty() const;

   virtual TreeItemType getRootData() const
      throw(TreeException);
   virtual void setRootData(const TreeItemType& newItem)
      throw(TreeException);

   virtual void attachLeft(const TreeItemType& newItem)
      throw(TreeException);
   virtual void attachRight(const TreeItemType& newItem)
      throw(TreeException);

   virtual void attachLeftSubtree(BinaryTree& leftTree)
      throw(TreeException);
   virtual void attachRightSubtree(BinaryTree& rightTree)
      throw(TreeException);

   virtual void detachLeftSubtree(BinaryTree& leftTree)
      throw(TreeException);
   virtual void detachRightSubtree(BinaryTree& rightTree)
      throw(TreeException);

   virtual BinaryTree getLeftSubtree() const
      throw(TreeException);
   virtual BinaryTree getRightSubtree() const
      throw(TreeException);

   virtual void preorderTraverse(FunctionType visit);
   virtual void inorderTraverse(FunctionType visit);
   virtual void postorderTraverse(FunctionType visit);

// overloaded operator:
   virtual BinaryTree& operator=(const BinaryTree& rhs)
      throw(TreeException);

protected:
   BinaryTree(TreeNode *nodePtr);  // constructor

   /** Copies the tree rooted at treePtr into a tree rooted at
    *  newTreePtr.
    * @throw TreeException  If a copy of the tree cannot be
    *        allocated. */
   void copyTree(TreeNode *treePtr,
                 TreeNode *& newTreePtr) const throw(TreeException);

   /** Deallocates memory for a tree. */
   void destroyTree(TreeNode *& treePtr);

   // The next two methods retrieve and set the value
   // of the private data member root.

   TreeNode *rootPtr() const;
   void setRootPtr(TreeNode *newRoot);

   // The next two methods retrieve and set the values
   // of the left and right child pointers of a tree node.

   void getChildPtrs(TreeNode *nodePtr,
                     TreeNode *& leftChildPtr,
                     TreeNode *& rightChildPtr) const;
   void setChildPtrs(TreeNode *nodePtr,
                     TreeNode *leftChildPtr,
                     TreeNode *rightChildPtr);

   void preorder(TreeNode *treePtr, FunctionType visit);
   void inorder(TreeNode *treePtr, FunctionType visit);
   void postorder(TreeNode *treePtr, FunctionType visit);

private:
   /** Pointer to root of tree. */
   TreeNode *root;
}; // end BinaryTree
// End of header file.
