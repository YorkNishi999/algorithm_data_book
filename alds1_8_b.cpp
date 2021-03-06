#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>


struct Node {
  int key;
  Node *right, *left, *parent;
};

Node *root, *NIL;

Node* find (Node *u, int k){
  while( u != NIL && k != u->key ) {
    if (k < u->key) u = u->left;
    else u = u->right;
  }
  return u;
}


void insert( int k ) {
  Node *y = NIL;  // yはNILを指すポインタ
  Node *x = root; // xはrootを指すポインタ
  Node *z; // zを色々動かす。zもポインタ

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL) {
    y = x;
    if ( z->key < x->key ) {
      x = x->left;
    } else {
      x = x->right;
    }
  }

  z->parent = y;
  if ( y == NIL ) {
    root = z;
  } else {
    if ( z->key < y->key ) {
      y->left = z;
    } else {
      y->right = z;
    }
  }
}

void inorder( Node *u) {
  if ( u == NIL ) return;
  inorder( u->left);
  printf(" %d", u->key);
  inorder( u->right);
}

void preorder( Node *u) {
  if ( u == NIL ) return;
  printf(" %d", u->key);
  preorder( u->left);
  preorder( u->right);
}

int main() {
  int n, i, x;
  std::string com;

  scanf("%d", &n);

  for( i = 0; i < n; i++) {
    std::cin >> com;
   if (com == "find") {
     scanf("%d", &x);
     Node *t = find(root, x);
     if ( t != NIL) printf("yes\n");
     else printf("no\n");
   } else if ( com == "insert") {
     scanf("%d", &x);
     insert(x);
   } else if (com == "print") {
     inorder(root);
     printf("\n");
     preorder(root);
     printf("\n");
   }
  }
  
  return 0;
}


