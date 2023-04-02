#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
#include "Node.h"

class List
{
    Node* begin, * end;
public:
    List() { begin = end = 0; }
    ~List() { Clear(); }
    List(const List& other);
    List& operator=(const List& other);
    void Push(Node* n);
    void Push(string);
    void Clear();
    void PushHead(string);
    friend ostream& operator<<(ostream& os, const List& list);
};

