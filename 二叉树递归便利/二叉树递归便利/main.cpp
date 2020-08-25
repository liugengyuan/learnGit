 //
 //  main.cpp
 //  二叉树的递归便利
 //
 //  Created by 刘庚源 on 2019/12/26.
 //  Copyright © 2019 刘庚源. All rights reserved.
 //

 #include <iostream>
 using namespace std;
 //二叉树节点
 typedef struct BinaryNode
 {
     char ch;
     struct BinaryNode* lchild;
     struct BinaryNode* rchild;
 }BinaryNode;
 void Recursion(BinaryNode* root);
 //创建二叉树
 void CreatBibaryTree()
 {
     //创建节点
     BinaryNode node1 = {'A',NULL,NULL};
     BinaryNode node2 = {'B',NULL,NULL};
     BinaryNode node3 = {'C',NULL,NULL};
     BinaryNode node4 = {'D',NULL,NULL};
     BinaryNode node5 = {'E',NULL,NULL};
     BinaryNode node6 = {'F',NULL,NULL};
     BinaryNode node7 = {'G',NULL,NULL};
     BinaryNode node8 = {'H',NULL,NULL};
     //建立节点关系
     node1.lchild = &node2;
     node1.rchild = &node6;
     node2.rchild = &node3;
     node3.lchild = &node4;
     node3.rchild = &node5;
     node6.rchild = &node7;
     node7.lchild = &node8;
     Recursion(&node1);
 }

 //递归遍历
 void Recursion(BinaryNode* root)
 {
     if (root == NULL) {
         return;
     }
     //根
     cout<<root->ch;
     //左
     Recursion(root->lchild);
     //右
     Recursion(root->rchild);
 }
 int main(int argc, const char * argv[]) {
  
     CreatBibaryTree();
     cout<<"\n";
     return 0;
 }

