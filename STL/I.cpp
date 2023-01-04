#include <iostream>

struct Node
{
    int val;
    Node *left;
    Node *right;
};

void tree_delete(Node *node)
{
    if (node == NULL)
        return;

    if (node->left != NULL)
        tree_delete(node->left);

    if (node->right != NULL)
        tree_delete(node->right);

    free(node);

    return;
}

Node *new_tree()
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->val = 0;
    return ptr;
}

Node *tree_add(Node *tree, int x)
{
    if (tree == NULL)
        tree = new_tree();
    if (tree->val == x)
        return tree;

    if (tree->val == 0)
        tree->val = x;

    if (x < tree->val)
    {
        if (tree->left == NULL)
            tree->left = new_tree();

        tree_add(tree->left, x);
    }
    else if (x > tree->val)
    {
        if (tree->right == NULL)
            tree->right = new_tree();
        tree_add(tree->right, x);
    }

    return tree;
}

int AVL(Node *root)
{
    if (root == NULL)
        return 1;

    int lh = AVL(root->left);
    int rh = AVL(root->right);

    return (lh == 0 || rh == 0 || abs(lh - rh) > 1) ? 0 : std::max(lh, rh) + 1;
}

int main()
{
    int t;
    Node *tree = new_tree();

    while (std::cin >> t)
        tree = tree_add(tree, t);

    std::cout << (AVL(tree) == 0 ? "NO" : "YES") << std::endl;

    tree_delete(tree);

    return 0;
}