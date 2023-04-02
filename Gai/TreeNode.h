#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
#include "List.h"

class TreeNode
{
    string car;
    List violations;
public:
    TreeNode* left, * right, * parent;
    TreeNode(string str, string violation) : car(str), left(0), right(0), parent(0) { violations.PushHead(violation); };
    string getCar() const { return car; }
    List getViolations() const { return violations; }
    void Push(string violation) { violations.PushHead(violation); }
    friend ostream& operator<<(ostream& os, const TreeNode& N);
};

