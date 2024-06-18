/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 
typedef struct Queue {
    int front,rear,size;
    unsigned capacity;
    struct TreeNode **array;
}Queue;

Queue *createQueue( unsigned capacity){
    Queue *queue=(Queue *)malloc(sizeof(Queue));
    queue->front=queue->rear=-1;
    queue->size=0;
    queue->capacity=capacity;
    queue->array=(struct TreeNode **)malloc(capacity*sizeof(struct TreeNode*));
    return queue;
}

void enqueue(struct TreeNode *node,Queue *queue){
    if(queue->size<queue->capacity){
        queue->array[queue->rear+1]=node;
        queue->rear++;
        queue->size++;
    }
}

struct TreeNode* dequeue(Queue *queue){
    if(queue->size!=0){
      struct TreeNode *nd=  queue->array[queue->front+1];
        queue->front++;
        queue->size--;
        return nd;
    }
    return NULL;
}

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;

if(root==NULL){
    return result;
}
         Queue *queue1=createQueue(2000);
       
       enqueue(root,queue1);
        int i=0;
        
        while(queue1->size>0){
            
             vector<int> arr;
             int i=queue1->size;
             while(--i>=0){
                struct TreeNode *current=dequeue(queue1);
                   arr.push_back(current->val);
                   if(current->left!=NULL){
                    enqueue(current->left,queue1);
                   }

                   if(current->right!=NULL){
                    enqueue(current->right,queue1);
                   }

                  
                   
             }
             
              result.push_back(arr); 
          
        
              
        }

        return result;
    }
};