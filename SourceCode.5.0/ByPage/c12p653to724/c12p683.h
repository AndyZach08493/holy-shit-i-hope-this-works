enum Color {RED, BLACK};

class TreeNode
{
private:
   TreeItemType Item;
   TreeNode *leftChildPtr, *rightChildPtr;
   Color     leftColor, rightColor;

   friend class RedBlackTree;
}; // end TreeNode
