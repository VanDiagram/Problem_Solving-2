#include <iostream>

// Create a Linked list node
class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int countNode(Node *head)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    push(&head, 6);
    push(&head, 3);
    push(&head, 2);
    push(&head, 5);

    std::cout << " Amount of node is: " << countNode(head);
    return 0;
}