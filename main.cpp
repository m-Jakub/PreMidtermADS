template <typename Key, typename Info>
class Ring // doubly-linked ring
{
public:
    bool removeAllByKey(const Key &key)
    {
        if (start == nullptr)
            return false;

        Node *nodePtr = start->next;
        Node *toBeRemoved;

        while (nodePtr != start)
        {
            if (nodePtr->key == key)
            {
                nodePtr->next->previous = nodePtr->previous;
                nodePtr->previous->next = nodePtr->next;
                toBeRemoved = nodePtr;
                nodePtr = nodePtr->next;
                delete toBeRemoved;
            }
            else
                nodePtr = nodePtr->next;

        }

        // now nodePtr must be = start
        if (start->key == key)
        {
            start->next->previous = start->previous;
            start->previous->next = start->next;
            toBeRemoved = start;
            start = start->next;
            delete toBeRemoved;
        }

        return true;
    }

private:
    struct Node
    {
        Key key;
        Info info;
        Node *next;
        Node *previous;
    };
    Node *start;
};