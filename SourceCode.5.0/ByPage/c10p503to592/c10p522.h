typedef string TreeItemType;

class TreeNode             // node in the tree
{
private:
   TreeNode() {}
   TreeNode(const TreeItemType& nodeItem,
            TreeNode *left = NULL,
            TreeNode *right = NULL)
      : item(nodeItem),leftChildPtr(left),
      rightChildPtr(right) {}
   TreeItemType item;        // data portion
   TreeNode *leftChildPtr;   // pointer to left child
   TreeNode *rightChildPtr;  // pointer to right child
   friend class BinaryTree;
}; // end TreeNode
