/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if(root==NULL){
        return NULL;
    }else if(root->val>key){
        root->left=deleteNode(root->left,key);
    }else if(root->val<key){
        root->right=deleteNode(root->right,key);
    }else{
        if(root->left==NULL && root->right==NULL){
               return NULL;
        }else if(root->left==NULL){
           struct TreeNode *temp=root->right;
            free(root);
            return temp;
        }else if(root->right==NULL){
           struct TreeNode *temp=root->left;
            free(root);
            return temp;
        }else{
           struct TreeNode *current=root->right;
            while(current->left!=NULL){
                current=current->left;
            }

            root->val=current->val;
            
            root->right=deleteNode(root->right,current->val);
             return root;
        }
    }

   return root;
}