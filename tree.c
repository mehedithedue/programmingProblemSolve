#include <stdio.h>

typedef struct node treeNode;

struct node{
    int data;
    treeNode *left;     // address of node struct
    treeNode *right;    // address of node struct
};


treeNode *create_node(int item){
    treeNode *new_node = (treeNode *) malloc(sizeof(treeNode));

    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}


void add_right_child(treeNode *node, treeNode *child){

    node->right = child;
}


void add_left_child(treeNode *node, treeNode *child){

    node->left = child;
}


/*     2
     /    \
    7      9
   / \       \
  1   6      8
     / \    / \
    5   10 3   4    */

treeNode *create_tree(){
    //       2
    //      / \
    //     7   9
    treeNode *two = create_node(2);
    treeNode *seven = create_node(7);
    treeNode *nine = create_node(9);

    add_left_child(two, seven);
    add_right_child(two , nine);

    //       7
    //      / \
    //     1   6
    treeNode *one = create_node(1);
    treeNode *six = create_node(6);

    add_left_child(seven, one);
    add_right_child(seven , six);

    //       6
    //      / \
    //     5   10
    treeNode *five = create_node(5);
    treeNode *ten = create_node(10);

    add_left_child(six, five);
    add_right_child(six , ten);

    //       9
    //        \
    //         8
    treeNode *eight = create_node(8);
    add_right_child(nine , eight);

    //       8
    //      / \
    //     3   4
    treeNode *three = create_node(3);
    treeNode *four = create_node(4);

    add_left_child(eight, three);
    add_right_child(eight , four);

    return two;
}


void pre_order_traverse(treeNode *node){
    // 2, 7, 1, 6, 5, 10, 9, 8, 3, 4 => first root then child
    printf("%d ", node->data);

    if(node->left != NULL){
        pre_order_traverse(node->left);
    }
    if(node->right != NULL){
        pre_order_traverse(node->right);
    }
}


void post_order_traverse(treeNode *node){
    // 1, 5, 10, 6, 7, 3, 4, 8, 9, 2 => first child then root
    if(node->left != NULL){
        pre_order_traverse(node->left);
    }
    if(node->right != NULL){
        pre_order_traverse(node->right);
    }

    printf("%d ", node->data);
}

void in_order_traverse(treeNode *node){
    // atfirst left, then root, then right
    // 1, 7, 5, 6, 10, 2, 9, 3, 8, 4

    if(node->left != NULL){
        in_order_traverse(node->left);
    }

    printf("%d ", node->data);

    if(node->right != NULL){
        in_order_traverse(node->right);
    }
}

int main()
{

    treeNode *root = create_tree();

    printf("Pre order traverse \n");
    pre_order_traverse(root);

    return 0;
}


