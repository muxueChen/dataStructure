//
//  LinkBinTree.h
//  TwoTreeDemo
//
//  Created by 陈学明 on 2020/1/8.
//  Copyright © 2020 陈学明. All rights reserved.
//

#ifndef LinkBinTree_h
#define LinkBinTree_h

#include <stdio.h>

typedef char ElenType;

typedef struct Node {
    ElenType data;
    struct Node *lchild;
    struct Node *rchild;
} BTNode;

BTNode *CreateBinTree();

void preOrder(BTNode *b);

void inOrder(BTNode *b);

void postOrder(BTNode *b);
#endif /* LinkBinTree_h */
