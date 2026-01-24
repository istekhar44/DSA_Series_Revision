//calculate the height of the tree 
int height ( Node * root){
    leftheight  = height ( root -> left );
    rightHeight= height ( root -> right );
    return max(left , right )+ 1;
}

int height(Node * root{
    leftpart = height( root -> left);
    rightpart = height( root -> right);

    return max(leftpart , rightpart)+1;
})

//calculate the total node in the tree
int totalNode( Node * root){
    if( root == NULL){
        return 0;
    }
    leftNode = countNode( root -> left );
    rightNode = countNode( root -> right);

    return leftNode+rightNode+1;
}


//identical tree or Same tree

bool isIdentical(Node * q, Node *p ){
    if( q-> NULL || q-> NULL){
        retun q == p;   //Agar dono ka dono null honga to true retun hoga warna false 
    }
    bool isLeftSame = isIdentical( q -> left , p -> left);
    bool idRightSame = isIdentical( q -> right , p -> left);

    return isLeftSame && isRightSame && p->value && q->value;

}



//check the main tree contain the subset of the another tree
class Solution {
public:

    bool isIdentical(TreeNode * p, TreeNode * q){

        if(p== NULL || q== NULL){  //if the any value is the null
            return p == q;
        }

        return p-> val == q-> val  //compare the value and the let and the right part exact same 
        && isIdentical(p-> left , q->left) 
        && isIdentical(p-> right , q -> right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(root == NULL || subRoot == NULL){   
            return root == subRoot;
        }

        if ( root -> val == subRoot -> val && isIdentical(root,subRoot)){
            return true;
        }
        return isSubtree( root-> left , subRoot);
        return isSubtree( root-> right , subRoot);


    }
};



//check the tree is identical or not 
class Solution {
    if(root )
    public:

}




//calcualte the diameter of the tree
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
class Solution {
    int ans = 0;
    int height(TreeNode * root){
        if( root == NULL){
            return 0;
        }

        int leftheight = height(root -> left );
        int rightheight = height(root -> right );
        ans = max(ans, leftheight + rightheight); // currentDiameter of root 

        return max(leftheight , rightheight) +1;
    }
    
public:
    

    int diameterOfBinaryTree(TreeNode* root) {
    //     if( root == NULL ){
    //         return 0;
    //     }

    //    int  leftdiameter = diameterOfBinaryTree( root -> left);  //left diameter
    //    int  rightdiameter = diameterOfBinaryTree( root -> right); //right diameter

    //    int currentDiameter = height( root -> left ) + height(root -> right);  //diameter including the node
     height(root);

       return ans;

        
        
    }
};







