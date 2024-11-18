// // BST
// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node *left;
//     struct Node *right;
// };

// struct Node *newNode(int x) {
//     struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
//     temp->data = x;
//     temp->left = temp->right = NULL;
//     return temp;
// }

// struct Node *search(struct Node *root, int x) {
//     if (root == NULL || root->data == x)
//         return root;
//     if (x > root->data)
//         return search(root->right, x);
//     else
//         return search(root->left, x);
// }

// struct Node *insert(struct Node *root, int x) {
//     if (root == NULL)
//         return newNode(x);
//     else if (x > root->data)
//         root->right = insert(root->right, x);
//     else
//         root->left = insert(root->left, x);
//     return root;
// }

// struct Node *findMin(struct Node *root) {
//     if (root == NULL)
//         return NULL;
//     else if (root->left != NULL)
//         return findMin(root->left);
//     return root;
// }

// struct Node *delete(struct Node *root, int x) {
//     if (root == NULL)
//         return NULL;
//     else if (x > root->data) {
//         root->right = delete(root->right, x);
//     } else if (x < root->data) {
//         root->left = delete(root->left, x);
//     } else {
//         if (root->left == NULL && root->right == NULL) {
//             free(root);
//             return NULL;
//         } else if (root->left == NULL || root->right == NULL) {
//             struct Node *temp;
//             if (root->left == NULL)
//                 temp = root->right;
//             else
//                 temp = root->left;
//             free(root);
//             return temp;
//         } else {
//             struct Node *temp = findMin(root->right);
//             root->data = temp->data;
//             root->right = delete(root->right, temp->data);
//         }
//     }
//     return root;
// }

// void inorder(struct Node *root) {
//     if (root != NULL) {
//         inorder(root->left);
//         printf("%d ", root->data);
//         inorder(root->right);
//     }
// }

// void preorder(struct Node *root) {
//     if (root != NULL) {
//         printf("%d ", root->data);
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// void postorder(struct Node *root) {
//     if (root != NULL) {
//         postorder(root->left);
//         postorder(root->right);
//         printf("%d ", root->data);
//     }
// }

// int main() {
//     struct Node *root = NULL;
//     int choice, value;

//     while (1) {
//         printf("\nMenu:\n");
//         printf("1. Insert\n");
//         printf("2. Delete\n");
//         printf("3. Search\n");
//         printf("4. Inorder Traversal\n");
//         printf("5. Preorder Traversal\n");
//         printf("6. Postorder Traversal\n");
//         printf("7. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter value to insert: ");
//                 scanf("%d", &value);
//                 root = insert(root, value);
//                 break;
//             case 2:
//                 printf("Enter value to delete: ");
//                 scanf("%d", &value);
//                 root = delete(root, value);
//                 break;
//             case 3:
//                 printf("Enter value to search: ");
//                 scanf("%d", &value);
//                 struct Node *result = search(root, value);
//                 if (result != NULL)
//                     printf("Value found in the tree.\n");
//                 else
//                     printf("Value not found in the tree.\n");
//                 break;
//             case 4:
//                 printf("Inorder Traversal: ");
//                 inorder(root);
//                 printf("\n");
//                 break;
//             case 5:
//                 printf("Preorder Traversal: ");
//                 preorder(root);
//                 printf("\n");
//                 break;
//             case 6:
//                 printf("Postorder Traversal: ");
//                 postorder(root);
//                 printf("\n");
//                 break;
//             case 7:
//                 exit(0);
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }

//     return 0;
// }
