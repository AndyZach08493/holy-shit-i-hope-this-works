class TreeNode
{
private:
   TreeItemType smallItem, middleItem, largeItem;
   TreeNode *leftChildPtr, *lMidChildPtr,
            *rMidChildPtr, *rightChildPtr;

   friend class TwoThreeFourTree;
}; // end TreeNode
