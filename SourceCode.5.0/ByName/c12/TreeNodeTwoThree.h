class TreeNode
{
private:
   TreeItemType smallItem, largeItem;
   TreeNode *leftChildPtr, *midChildPtr, *rightChildPtr;

   // friend class-can access private class members
   friend class TwoThreeTree;
}; // end TreeNode
