#include <bits/stdc++.h>
#define NULL 0
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

int height(Node* root) {
    if(root == NULL)
        return -1;
    
    int left = height(root->left);
    int right = height(root->right);

    if(left > right)
        return (left +1);
    else
        return (right + 1);    
}

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    int height = myTree.height(root);
    
  	std::cout << height;

    return 0;
}
