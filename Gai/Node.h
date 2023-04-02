#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>

using namespace std;

class Node
{
    string violation;
public:
    Node* next;
    Node(string str) :violation(str), next(0) {};
    string getViolation() const { return violation; }
    void setViolation(string str) { violation = str; }
    friend ostream& operator<<(ostream& os, const Node& Obj);
};

