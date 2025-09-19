#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

bool isLeaf(Node* node) {
    return node && !node->left && !node->right;
}

void addLeftBoundary(Node* root, vector<int>& res) {
    Node* cur = root->left;
    while (cur) {
        if (!isLeaf(cur)) res.push_back(cur->val);
        if (cur->left) cur = cur->left;
        else cur = cur->right;
    }
}

void addLeaves(Node* root, vector<int>& res) {
    if (!root) return;
    if (isLeaf(root)) {
        res.push_back(root->val);
        return;
    }
    addLeaves(root->left, res);
    addLeaves(root->right, res);
}

void addRightBoundary(Node* root, vector<int>& res) {
    Node* cur = root->right;
    vector<int> temp;
    while (cur) {
        if (!isLeaf(cur)) temp.push_back(cur->val);
        if (cur->right) cur = cur->right;
        else cur = cur->left;
    }
    // add right boundary in reverse order
    for (int i = (int)temp.size() - 1; i >= 0; --i) res.push_back(temp[i]);
}

vector<int> boundaryTraversal(Node* root) {
    vector<int> res;
    if (!root) return res;
    if (!isLeaf(root)) res.push_back(root->val); // root (if not leaf)
    addLeftBoundary(root, res);
    addLeaves(root, res);
    addRightBoundary(root, res);
    return res;
}

// Helper to build a sample tree and demo
int main() {
    /*
           1
         /   \
        2     3
       / \   / \
      4   5 6   7
         / \
        8   9

    Boundary (anti-clockwise) : 1 2 4 8 9 6 7 3
    */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> boundary = boundaryTraversal(root);
    cout << "Boundary Traversal: ";
    for (int x : boundary) cout << x << " ";
    cout << endl;

    // cleanup (optional)
    // Note: For brevity, not deleting all nodes here.
    return 0;
}
