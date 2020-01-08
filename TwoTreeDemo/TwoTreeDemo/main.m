//
//  main.m
//  TwoTreeDemo
//
//  Created by 陈学明 on 2020/1/8.
//  Copyright © 2020 陈学明. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "LinkBinTree.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        printf(">>>创建二叉树:");
        BTNode *binTree = CreateBinTree();
        printf("\n");
        
        printf(">>>前绪遍历");
        preOrder(binTree);
        printf("\n");
        
        // 中续遍历
        printf(">>>中续遍历");
        inOrder(binTree);
        printf("\n");
        
        // 后续遍历
        printf(">>>后续遍历");
        postOrder(binTree);
        printf("\n");
    }
    return 0;
}
