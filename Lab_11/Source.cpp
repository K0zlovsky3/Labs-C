#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)

class List
{
public:
    List() : root(0) {}
    void Add(char const* rhs)
    {
        if (!root)
            root = new Node(0, rhs);
        else
            root->Add(rhs);
    }
    void Erase(char const* rhs)
    {
        if (root)
        {
            if (!strcmp(root->pstr, rhs))
            {
                std::cout << "Found lst\n";
                Node* tmp = root;
                root = root->next;
                if (root)
                    root->prev = 0;
                tmp->prev = 0;
                tmp->next = 0;
                delete tmp;
                std::cout << "Erased lst\n";
            }
            else
                root->Erase(rhs);
        }
    }
    ~List()
    {
        delete root;
        root = 0;
    }
private:
    struct Node
    {
        Node(Node* pnode) : prev(pnode), next(0), pstr(0) {}
        Node(Node* pnode, char const* rhs) : prev(pnode), next(0)
        {
            pstr = new char[strlen(rhs) + 1];
            strcpy(pstr, rhs);
        }
        void Add(char const* rhs)
        {
            if (!next)
                next = new Node(this, rhs);
            else
                next->Add(rhs);
        }
        void Erase(char const* rhs)
        {
            if (!strcmp(rhs, pstr))
            {
                std::cout << "Found\n";
                prev->next = next;
                if (next)
                    next->prev = prev;
                prev = 0;
                next = 0;
                delete this;
                std::cout << "Erased\n";
            }
            else if (next)
                next->Erase(rhs);

        }
        ~Node()
        {
            if (next)
                delete next;
            prev = 0;
            next = 0;
            std::cout << "Destructor: " << pstr << '\n';
            delete[] pstr;
            pstr = 0;
        }
        Node* prev, * next;
        char* pstr;
    private:
        Node(Node const&);
        Node& operator=(Node);
    };
    Node* root;
    List(List const&);
    List& operator=(List);
    friend struct Node;
};

int main()
{
    List lst;
    lst.Add("dfdf");
    lst.Add("ghgh");
    lst.Add("kjkj");
    lst.Erase("ghgh");
}