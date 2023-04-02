#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
#include "TreeNode.h"

class database
{
private:
    TreeNode* root;
public:
    database() { root = 0; };
    ~database() { Clear(root); };
    void Add(string, string);
    void Add(TreeNode*&, TreeNode*, string, string);
    void PrintAll(TreeNode*);
    void PrintNumber(string);
    TreeNode* PrintNumber(TreeNode*, string);
    void PrintRangeNumber(string min, string max);
    void PrintRangeNumber(TreeNode* node, string min, string max);
    TreeNode* ReturnRoot() { return root; };
    void Clear(TreeNode* temp);
};

