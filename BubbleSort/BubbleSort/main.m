//
//  main.m
//  BubbleSort
//
//  Created by 陈学明 on 2020/1/8.
//  Copyright © 2020 陈学明. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "BubbleSort.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        linkP L = (linkP)malloc(sizeof(linkNode));
        L->next = NULL;
        int newData = 0;
        printf("请输入：");
        scanf("%d", &newData);
        while (newData != -1) {
            CreateList(L, newData);
            printf("请输入：");
            scanf("%d", &newData);
            
        }
        printList(L);
        printf("开始冒泡排序\n");
        BubbleSort(L);
        printList(L);
    }
    return 0;
}
