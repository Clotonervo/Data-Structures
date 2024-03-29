
#ifndef BSTInterface_h
#define BSTInterface_h

#include <string>
using std::string;

/** A binary tree node with data, left and right child pointers */
template<typename T>
class BSTInterface {
public:
    BSTInterface(void) {}
    ~BSTInterface(void) {}
    
    /** Return true if node added to BST, else false */
    virtual bool addNode(const T& data) = 0;
    
    /** Return true if node removed from BST, else false */
    virtual bool removeNode(const T& data) = 0;
    
    /** Return true if BST cleared of all nodes, else false */
    virtual bool clearTree() = 0;
    
    /** Return a level order traversal of a BST as a string */
    virtual string toString() const = 0;
};

#endif /* BSTInterface_h */
