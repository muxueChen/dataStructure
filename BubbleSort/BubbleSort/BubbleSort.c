//
//  BubbleSort.c
//  BubbleSort
//
//  Created by 陈学明 on 2020/1/8.
//  Copyright © 2020 陈学明. All rights reserved.
//

#include "BubbleSort.h"

// 创建链表
void CreateList(linkP L, Datatype newData) {
    linkP node = (linkP)malloc(sizeof(linkNode));
    node->data = newData;
    node->next = NULL;
    linkP p = L;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = node;
}

// 打印链表
void printList(linkP L) {
    linkP node = L->next;
    while (node != NULL) {
        printf("%d\n", node->data);
        node = node->next;
    }
}

// 冒泡排序
int BubbleSort(linkP L) {
    linkP p = L, x,y;
    linkP tmax = NULL;
    // 链表没有任何节点
    if (L->next==NULL) {
        return 0;
        // 链表只有一个节点
    } else if(L->next->next == NULL) {
        return 0;
        //
    } else {
        while (tmax != L->next->next) {
            for (p = L; p->next->next != tmax; p = p->next) {
                if (p->next->data > p->next->next->data) {
                    x = p->next;
                    y = p->next->next;
                    p->next = y;
                    x->next = y->next;
                    y->next = x;
                }
            }
            tmax = p->next;
        }
    }
    return 0;
}
