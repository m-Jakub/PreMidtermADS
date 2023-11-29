// #include <iostream>

// template <typename Key, typename Info>
// class Ring // doubly-linked ring
// {

// private:
//     struct Node
//     {
//         Key key;
//         Info info;
//         Node *next;
//         Node *previous;
//     };
//     Node *start;

// public:
//     Ring() : start(nullptr) {}

//     void insert(const Key &key, const Info &info)
//     {
//         Node *newNode = new Node{key, info, nullptr, nullptr};

//         if (start == nullptr)
//         {
//             start = newNode;
//             start->next = start;
//             start->previous = start;
//         }
//         else
//         {
//             newNode->previous = start->previous;
//             newNode->next = start;
//             start->previous->next = newNode;
//             start->previous = newNode;
//         }
//     }

//     bool removeAllByKey(const Key &key)
//     {
//         if (start == nullptr)
//             return false;

//         Node *nodePtr = start->next;
//         Node *toBeRemoved;

//         while (nodePtr != start)
//         {
//             if (nodePtr->key == key)
//             {
//                 nodePtr->next->previous = nodePtr->previous;
//                 nodePtr->previous->next = nodePtr->next;
//                 toBeRemoved = nodePtr;
//                 nodePtr = nodePtr->next;
//                 delete toBeRemoved;
//             }
//             else
//                 nodePtr = nodePtr->next;
//         }

//         // now nodePtr must be = start
//         if (start->key == key)
//         {
//             start->next->previous = start->previous;
//             start->previous->next = start->next;
//             toBeRemoved = start;
//             start = start->next;
//             delete toBeRemoved;
//         }

//         return true;
//     }

//     bool insert(const Key &place, const Key &before, const Key &after)
//     {
//         if (start == nullptr)
//             return false;

//         Node *nodePtr = start;

//         do
//         {
//             if (nodePtr->key == place)
//             {
//                 Node *newBefore = new Node;
//                 Node *newAfter = new Node;

//                 newBefore->key = before;
//                 newAfter->key = after;

//                 nodePtr->previous->next = newBefore;
//                 newBefore->previous = nodePtr->previous;
//                 nodePtr->next->previous = newAfter;
//                 newAfter->next = nodePtr->next;
//                 nodePtr->previous = newBefore;
//                 nodePtr->next = newAfter;
//                 newBefore->next = nodePtr;
//                 newAfter->previous = nodePtr;

//                 // if (nodePtr == start) //depends if we want the element inserted before the start to become the start or not
//                 //     start = nodePtr->previous;

//                 return true;
//             }
//             nodePtr = nodePtr->next;
//         } while (nodePtr != start);

//         return false;
//     }

//     void printRing() const
//     {
//         if (start == nullptr)
//         {
//             std::cout << "Ring is empty." << std::endl;
//             return;
//         }

//         Node *current = start;
//         do
//         {
//             std::cout << "Key: " << current->key << ", Info: " << current->info << std::endl;
//             current = current->next;
//         } while (current != start);
//     }
// };
// int main()
// {
//     Ring<int, std::string> myRing;

//     // Insert some elements into the ring
//     myRing.insert(2, "Two");
//     myRing.insert(1, "One");
//     myRing.insert(4, "Four");
//     myRing.insert(4, "Four");
//     myRing.insert(3, "Three");
//     myRing.insert(2, "Two");
//     myRing.insert(4, "Four");
//     myRing.insert(4, "Four");
//     myRing.insert(2, "Two");
//     myRing.insert(2, "Another Two"); // Adding a duplicate key

//     std::cout << "Initial Ring:" << std::endl;
//     myRing.printRing(); // Print the initial ring

//     // // Remove elements by key
//     // bool removed = myRing.removeAllByKey(2);

//     // if (removed)
//     // {
//     //     std::cout << "\nAfter removing elements with key 2:" << std::endl;
//     //     myRing.printRing(); // Print the ring after removal
//     // }
//     // else
//     // {
//     //     std::cout << "\nNo elements found with key 2 to remove." << std::endl;
//     // }

//     // removed = myRing.removeAllByKey(4);

//     // if (removed)
//     // {
//     //     std::cout << "\nAfter removing elements with key 2:" << std::endl;
//     //     myRing.printRing(); // Print the ring after removal
//     // }
//     // else
//     // {
//     //     std::cout << "\nNo elements found with key 2 to remove." << std::endl;
//     // }

//     myRing.insert(3, 10, 15);
//     myRing.insert(2, 55, 68);

//     std::cout << "After Insertion:" << std::endl;
//     myRing.printRing();

//     return 0;
// }

// 2  ====================================================================================================================

// int fibSum(int x)
// {
//     if (x == 0 || x == 1)
//         return 1;
//     else
//         return (fibSum(x-2) + fibSum(x-1));
// }

// int main()
// {
//     std::cout << fibSum(8);

//     return 0;
// }

// 3  ====================================================================================================================

