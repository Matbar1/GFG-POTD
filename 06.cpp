class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        if (root == NULL) return 0;
    
        if (root->left == NULL and root->right == NULL) return 1;
        // no child nodes indicate base case
    
        int left, right;
        if (root->left != NULL) left = maxDepth(root->left);
        // finding depth of left sub tree
        else
            left = INT_MIN;
    
        if (root->right != NULL) right = maxDepth(root->right);
        // finding depth of right sub tree
        else
            right = INT_MIN;
    
        return 1 + max(left, right);
    }

};