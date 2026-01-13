#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
class Node {
    public:
    int data ;
    Node * left ;
    Node * right;

    Node(int value ){
        data = value ;
        left = right = NULL;
    }

};
static int index = -1;
Node * buildTree( vector<int> preorder){
    index ++;
    if( preorder[index] == -1){  //last wala node check keranga
        return NULL;
    }

    Node * root = new Node(preorder[index]);
    root -> left = buildTree(preorder);
    root -> right = buildTree(preorder);

    return root ;


}

void TopView(Node * root){
    queue<pair<Node *>>q;  //<HD , Node val>
    map<int,int>m   //current horizontal distance <Hd , node value>

    q.psuh({ root , 0});         //HD , value of root 

    while(q.size() > 0){
        Node * curr = q.front().first;  //data value
        int currHD = q.fornt().second;   //horizontal distance
        q.pop();

        if( m.find(currHD) == m.end()){
            m.[currHD] = curr -> data;
        }

        if(curr -> left !=NULL){
            q.psuh({curr -> data , currHD-1});
        }

        if(curr -> right !=NULL){
            q.push({curr -> data , currHD +1});
        } 

    }

    for(auro it: m){
        cout<<it.second<<" ";
        cout<<endl;
    }
}


//programe to bottom view of the program
class Solution {
public:
    vector<int> topView(Node *root) {
        vector<int> ans;
        if (root == NULL) return ans;   //Base case

        // Queue stores (Node, Horizontal Distance)
        queue<pair<Node*, int>> q;

        // Map stores first node at each HD
        map<int, int> m;

        q.push({root, 0});

        while (!q.empty()) {
            Node* curr = q.front().first;
            int hd = q.front().second;
            q.pop();

            // If this HD is seen first time, store it
            if (m.find(hd) == m.end()) {
                m[hd] = curr->data;
            }

            if (curr->left != NULL)
                q.push({curr->left, hd - 1});

            if (curr->right != NULL)
                q.push({curr->right, hd + 1});
        }

        // Extract answer from leftmost to rightmost
        for (auto it : m) {
            ans.push_back(it.second);
        }

        return ans;
    }
};

//find the Kth level of the tree
class solution kthlevel(Node * root, int k){
    if( root == NULL){
        return ;
    }

    if( k == 1){
        cout<< root -> data<< " ";
    }

    int leftCheck = kthlevel(root  -> left, k-1 );
    int rightCheck = kthlevel( root -> right, k+ 1);

    if()


}


//find the lowest common ancestor
class LCA (Node * root , int p , int q){
    if(root == NULL){
        return ;
    }

    if(root == p && root == q ){
        
    }
}


//BUilding Tree form preOrder & Inorder sequence
void preorderSequence(){
     
}

//transform to Sum Tree
void sumTree(Node * root){
    if( root == NULL){
        return 0;
    }

    int leftSum = sumTree( root -> left);
    int rightSum = sumTree( root -> right );
    root -> data += leftSum + rightSum;
    return root -> data ; 
}

//



int main(){
    vector<int> preorder = { 1,2,-1,-1,3,4,-1,-1,5,-1,-1 };
    Node * root = buildTree(preorder);
    cout<< root -> data <<endl;
    cout<< root -> left -> data  <<endl;
    cout<< root -> right -> data <<endl;


    inorder(root);  //call the function 
    cout<<endl;


    levelOrder(root);
    cout<<endl;
    
}





// Maximum of the complete binary tree
class Solution {

};
 