void BinaryTree::inorder(TreeNode *treePtr,
                         FunctionType visit)
{  if (treePtr != NULL)
   {  inorder(treePtr->leftChildPtr, visit); // Point 1
      visit(treePtr->item);
      inorder(treePtr->rightChildPtr, visit); // Point 2
   }  // end if
}  // end inorder
