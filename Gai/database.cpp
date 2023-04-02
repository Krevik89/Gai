#include "database.h"

void database::Clear(TreeNode* temp) {
    if (temp) {
        Clear(temp->left);
        Clear(temp->right);
        delete temp;
    }
}

void database::Add(TreeNode*& head, TreeNode* parent, string car, string str) {
    TreeNode* temp = new TreeNode(car, str);
    temp->left = temp->right = temp->parent = 0;
    if (!head)
        head = temp;
    else {
        if (car < head->getCar())
            Add(head->left, head, car, str);
        else if (car > head->getCar())
            Add(head->right, head, car, str);
        else
            head->Push(str);
    }
}

void database::Add(string car, string str) {
    Add(root, NULL, car, str);
}

void database::PrintAll(TreeNode* temp) {
    if (temp) {
        PrintAll(temp->left);
        cout << "Номер машины: " << temp->getCar() << endl;
        cout << "Нарушения: " << endl;
        cout << temp->getViolations();
        PrintAll(temp->right);
    }
}

TreeNode* database::PrintNumber(TreeNode* node, string input) {
    if (!node)
        return 0;
    if (input == node->getCar())
        return node;
    else if (input < node->getCar())
        return  PrintNumber(node->left, input);
    else
        return  PrintNumber(node->right, input);
}

void database::PrintNumber(string input) {
    TreeNode* node = PrintNumber(root, input);
    if (!node)
        cout << "Not found." << endl;
    else {
        cout << "Номер машины: " << node->getCar() << endl;
        cout << "Нарушения: " << endl;
        cout << node->getViolations();
    }
}

void database::PrintRangeNumber(TreeNode* node, string min, string max) {
    if (!node)
        return;
    if (node->getCar() > min)
        PrintRangeNumber(node->left, min, max);
    if (node->getCar() >= min && node->getCar() <= max)
        PrintNumber(node->getCar());
    if (node->getCar() < max)
        PrintRangeNumber(node->right, min, max);
}

void database::PrintRangeNumber(string min, string max) {
    PrintRangeNumber(root, min, max);
}
