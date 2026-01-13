/*#include <iostream>
#include<vector>
using namespace std ;
class Node{
    public:
    int data ;
    Node* left ;
    Node * right;

    Node (int value){
        data = value ;
        left = right = NULL;
    }

}; 
static int index = -1;
Node * buildTree(vector<int> element){
    index++ ;
    if(element [index] == -1 ){
        return NULL;
    }

    Node * root = new Node(element[index]);
    root -> left = buildTree(element); //left 
    root -> right = buildTree(element)); //right
    return root ;
}
int main(){
 vector<int> element = { 1,2,-1,-1,3,4,-1,-1,5,-1,-1};
   
 Node * root = buildTree(preorder);
 cout<<root-> data <<endl;
 cout<<root -> left -> data <<endl;
 cout<<root -> right -> data <<endl;
 return 0 ;

}*/


/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node {
    public:
    int data;
    Node * left ;
    Node * right;

    Node (int value){
        data = value ;
        left = right = NULL;
    }
};
static int index = -1;
Node* buildTree( vector<int> preorder){
    index ++ ;
    if(preorder [index] == -1){
        return NULL;
    }

    Node * root = new Node(preorder[index]);
    root -> left = buildTree(preorder);
    root -> right = buildTree(preorder);

    return root ;

}

//preorder traversal(root -> left -> right)
void preOrder(Node * root){  //pass the root value
    if(root == NULL){   
        return ;
    }
    cout<<root -> data <<" ";
    preOrder(root -> left);
    preOrder(root -> right);
}



//inorder traversal(lef)
void inorder(Node * root ){
    if(root == NULL){
        return ;
    }
    inorder (root -> left);
    cout<<root -> data << " ";
    inorder (root -> right); 

}


//post order traversal(left -> right -> root)
void postorder(root * Node ){   //always enter the root first 
    if(root == NULL){
        return ;
    }

    postorder(root -> left );
    postorder(root -> right);
    cout<< root -> data << " "; 
}

//iterative order traversal OR level order traversal ( print the every level of the traversal)
void level( Node * root){
    queue<int>q;
    q.push(root);
    while( q.size() > 0 ){
        Node * curr = q.front();  //delete the node 
        q.pop();

        cout<<curr -> data ;   //get the out data 
        if(curr -> left != NULL)
        q.push

    }

}



}


int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node * root = buildTree(preorder);
    cout<<root -> data <<endl;
    cout<<root -> left -> data <<endl;
    cout<<root -> right -> data <<endl; 

    //call the preorder 
    preOrder(root);
    cout<<endl;


    //call the inorder 
    inorder(root);
    cout<<endl;


    return 0;


}*/

/*//create the binary tree , preOrder ,inOrder , postOrder , levelOrder
#include <iostream>
#include <vector>
using namespace std;
class Node {
    public :
    int data ;
    Node * left ;
    Node * right;

    Node ( int value ){
        data = value ;
        left = right = NULL;
    }
};
static int index = -1;
Node * buildTree(vector<int> preorder){
    index ++;
    if( preorder[index] == -1){
        return NULL;
    }

    Node * root = new Node(preorder[index]);
    root -> left = buildTree(preorder);
    root -> right = buildTree(preorder);
    return root ;


}

//inorder (root -> left-> right)
void inOrder(Node * root){
    if(root == NULL){
        return ;
    }
    
    inOrder(root -> left );
    cout<<root -> data <<" ";
    inOrder(root -> right);
};

//print the data in the preorder
void preorder(Node * root ){
    if(root == NULL){
        return ;
    }

    preorder(root -> left );
    cout<<  root -> data <<" ";
    preorder ( root -> right);
}

//print the data in the postOrder
void postOrder(Node * root){
    if (root == NULL){
        return ;
    }
    
    postOrder(root ->left);
    postOrder(root -> right);
    cout<<root -> data <<" ";


}

int main(){
    vector <int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1 };
    Node * root = buildTree(preorder);
    cout<<root -> data <<endl;
    cout<<root -> left -> data <<endl; 
    cout<<root ->right ->data <<endl;

    inOrder(root);
    cout<<endl;

    preorder(root);
    cout<<endl;

    postOrder(root);
    cout<<endl;
    
    return 0;

}*/





#include <iostream>
#include <vector>
#include <queue>
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

//preorder  traverse the tree 
void preorder(Node * root ){
    if( root = NULL ){
        return;
    }

    cout<< root -> data <<" ";  //root
    preorder( root -> left );   // left
    preorder( root -> right);   //right


}

//traverse the inorder tree
void inorder( Node * root ){
    if(root == NULL){
        return ;
    }

    inorder( root -> left );
    cout<< root -> data <<" ";
    inorder (  root -> right);
}


//traverse the tree  Inorder traversal
//step : push the node value in the loop
//step 2 : run the loop the size is grater than zero
//step 3 : pop the element one by one 
//step 4 : store the value of the queue
void levelOrder(Node * root){
    queue<Node*> q;   // queue ma Node ki value pass kerni ha 

    q.push(root); // push the root node ki value in the queue
    while( q.size() > 0){
        Node * curr = q.front(); //push in the fornt and store in current 
        q.pop();

        cout<< curr -> data << " ";

        if( curr -> left != NULL){
            q.push(curr -> left );
        }

        if( curr -> right != NULL){
            q.push( curr -> left);
        }

    }

    cout<<endl;
    


}




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








