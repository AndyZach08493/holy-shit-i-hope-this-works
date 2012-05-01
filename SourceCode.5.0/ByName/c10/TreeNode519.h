const int MAX_NODES = 100; // maximum number of nodes
typedef string TreeItemType;

class TreeNode            // node in the tree
{
private:
   TreeNode();
   TreeNode(const TreeItemType& nodeItem,
            int left, int right);
   TreeItemType item;      // data portion
   int          leftChild;    // index to left child
   int          rightChild;   // index to right child

   // friend class - can access private parts
   friend class BinaryTree;
}; // end TreeNode

TreeNode tree[MAX_NODES];  // array of tree nodes
int      root;             // index of root
int      free;             // index of free list
