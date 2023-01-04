#include <stdio.h>
#include <stdlib.h>

typedef int Data;

struct Node
{
    Data val;
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

struct Node *tree_add(struct Node *tree, Data x)
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

    printf("%d\n", tree_depth(tree));

    tree_delete(tree);
    return 0;
}
