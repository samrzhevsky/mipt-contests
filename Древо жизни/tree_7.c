#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
};

void tree_delete(struct Node *node)
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

struct Node *new_tree()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->val = 0;
    return ptr;
}

struct Node *tree_add(struct Node *tree, int x)
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

int tree_depth(struct Node *tree)
{
    if (tree == NULL)
        return 0;

    int nleft = tree_depth(tree->left);
    int nright = tree_depth(tree->right);

    return nleft > nright ? nleft + 1 : nright + 1;
}

void tree_print_level(struct Node *tree, int level)
{
    if (tree == NULL)
        return;

    if (level == 0)
        printf("%d ", tree->val);
    else if (level > 0)
    {
        tree_print_level(tree->left, level - 1);
        tree_print_level(tree->right, level - 1);
    }
}

int main()
{
    struct Node *tree = NULL;

    int n;
    do
    {
        scanf("%d", &n);

        if (n != 0)
            tree = tree_add(tree, n);
    } while (n != 0);

    int h = tree_depth(tree);
    for (int i = 0; i < h; i++)
    {
        tree_print_level(tree, i);
    }

    tree_delete(tree);

    return 0;
}
