#include<bits./stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
class Solution
{
    public:
    
    void preorder(Node* root,vector<int> &v){
        if(root==NULL){      
            v.push_back(-1);
            return;
        }
        v.push_back(root->data);
        
        preorder(root->left,v);
        
        
        preorder(root->right,v);
    }
    vector<int> serialize(Node *root) 
    {
        
        vector<int> v;
        preorder(root,v);
        return v;
    }
    
    
    Node* fun(vector<int> v,int &i){
        if(i==v.size() || v[i]==-1){  
            i++;   
            return NULL;
        }
        
        int val=v[i++];
        Node* root=new Node(val);
        root->left=fun(v,i);
        root->right=fun(v,i);
        return root;
    }
    Node * deSerialize(vector<int> &A)
    {
       
       int i=0;
       Node* root=fun(A,i);
       return root;
    }

};