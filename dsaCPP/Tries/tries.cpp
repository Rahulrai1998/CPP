#include <iostream>
using namespace std;

class TrieNode
{
public:
    TrieNode *child[26];
    bool isEnd;
    TrieNode()
    {
        isEnd = false;
        for (int i = 0; i < 26; i++)
        {
            child[i] = nullptr;
        }
    }
};
class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode *node = root;
        for (char ch : word)
        {
            int idx = ch - 'a';
            if (node->child[idx] == nullptr)
                node->child[idx] = new TrieNode();
            node = node->child[idx];
        }
        node->isEnd = true;
    }

    bool search(string word)
    {
        TrieNode *node = root;
        for (char ch : word)
        {
            int idx = ch - 'a';
            if (node->child[idx] == nullptr)
                return false;
            node = node->child[idx];
        }
        return node->isEnd;
    }

    bool startsWith(string prefix)
    {
        TrieNode *node = root;
        for (char ch : prefix)
        {
            int idx = ch - 'a';
            if (node->child[idx] == nullptr)
                return false;
            node = node->child[idx];
        }
        return true;
    }
    void deleteWord(string word)
    {
        
    }
};

int main()
{
    Trie *trie = new Trie();
    trie->insert("Hello");
    bool present = trie->search("ello");
    bool prefix = trie->startsWith("el");
    cout << present << " " << prefix << " ";
    return 0;
}