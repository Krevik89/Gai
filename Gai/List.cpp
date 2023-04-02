#include "List.h"

List::List(const List& other) {
    begin = end = 0;
    Node* temp = other.begin;
    while (temp) {
        Push(temp->getViolation());
        temp = temp->next;
    }
}

List& List::operator=(const List& other) {
    List tmp(other);
    swap(*this, tmp);
    return *this;
}

void List::Push(Node* n) {
    if (!end)
        begin = n;
    else
        end->next = n;
    end = n;
}

void List::Push(string str) {
    Push(new Node(str));
}

void List::Clear() {
    Node* temp = 0;
    while (begin) {
        temp = begin;
        begin = begin->next;
        delete temp;
    }
    end = 0;
}

void List::PushHead(string str) {
    Node* temp = new Node(str);
    temp->next = begin;
    begin = temp;
    if (!end)
        end = begin;
}

ostream& operator<<(ostream& os, const List& list) {
    if (!list.begin)
        os << "";
    else {
        int count = 1;
        Node* temp = list.begin;
        while (temp) {
            os << setw(3) << right << count++ << " " << *temp;
            temp = temp->next;
        }
        os << endl;
    }
    return os;
}