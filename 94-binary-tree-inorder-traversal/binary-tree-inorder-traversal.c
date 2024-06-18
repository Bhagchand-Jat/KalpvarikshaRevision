/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int current=0;
 void traverse(struct TreeNode* root, int *arr){
    if(root==NULL)return;
     
    traverse(root->left,arr);
    arr[current++]=root->val;
    traverse(root->right,arr);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    
    int arr[101];
    current=0;
    traverse(root,arr);
    int total=current;
 
    *returnSize=current;
    int *result=(int *)calloc(current,sizeof(int));
    while(--total>=0){
        result[total]=arr[total];
    }
    return result;
}
