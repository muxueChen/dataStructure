//
//  LinkBinTree.c
//  TwoTreeDemo
//
//  Created by 陈学明 on 2020/1/8.
//  Copyright © 2020 陈学明. All rights reserved.
//

#include "LinkBinTree.h"

BTNode *CreateBinTree() {
    BTNode *T;
    char ch;
    if ((ch = getchar()) == '#') {
        return NULL;
    } else {
        T = (BTNode *)malloc(sizeof(BTNode));
        T->data = ch;
        T->lchild = CreateBinTree();
        T->rchild = CreateBinTree();
        return T;
    }
}

// 前序遍历
void preOrder(BTNode *b) {
    if (b != NULL) {
        printf("%c",b->data);
        preOrder(b->lchild);
        preOrder(b->rchild);
    }
}

// 中续遍历
void inOrder(BTNode *b) {
    if (b!=NULL) {
        preOrder(b->lchild);
        printf("%c",b->data);
        preOrder(b->rchild);
    }
}

// 后续遍历
void postOrder(BTNode *b) {
    if (b!=NULL) {
        preOrder(b->lchild);
        preOrder(b->rchild);
        printf("%c",b->data);
    }
}
