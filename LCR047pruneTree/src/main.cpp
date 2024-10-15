#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode()
        : val( 0 )
        , left( nullptr )
        , right( nullptr ) {}
    TreeNode( int x )
        : val( x )
        , left( nullptr )
        , right( nullptr ) {}
    TreeNode( int x, TreeNode *left, TreeNode *right )
        : val( x )
        , left( left )
        , right( right ) {}
};

class Solution {

  public:
    TreeNode *pruneTree( TreeNode *root ) {
        if ( !root ) {
            return nullptr;
        }
        root->left = pruneTree( root->left );
        root->right = pruneTree( root->right );
        if ( !root->left && !root->right && root->val == 0 ) {
            return nullptr;
        }
        return root;
    }
};
int main( int argc, char **argv ) {
    cout << "hello world!" << endl;
    return 0;
}