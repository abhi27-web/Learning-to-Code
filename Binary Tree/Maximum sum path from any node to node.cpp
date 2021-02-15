#include <iostream>
using namespace std;

class TreeNode
{
public:

    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
    int globalMax = -10000;
    int maxPathNode2Node(TreeNode* root)
    {
        if(root == NULL) return 0;

        int ls = maxPathNode2Node(root->left);
        int rs = maxPathNode2Node(root->right);

        int cand1 = root->val;
        int cand2 = ls + root->val;
        int cand3 = rs + root->val;
        int cand4 = ls + rs + root->val;
        globalMax = max(cand1, max(cand2, max(cand3, max(cand4, globalMax))));
        return max(ls, max(rs,0)) + root->val;
    }
};

int main(int argc, char const *argv[])
{
    return 0;
}
