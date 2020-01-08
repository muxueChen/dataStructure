//
//  BubbleSort.h
//  BubbleSort
//
//  Created by 陈学明 on 2020/1/8.
//  Copyright © 2020 陈学明. All rights reserved.
//

#ifndef BubbleSort_h
#define BubbleSort_h

#include <stdio.h>

typedef int Datatype;

// 连标结构体
typedef struct node {
    Datatype data;
    struct node *next;
} linkNode, *linkP;


// 创建链表
void CreateList(linkP L, Datatype newData);
// 打印链表
void printList(linkP L);

// 冒泡排序
int BubbleSort(linkP L);
#endif /* BubbleSort_h */
