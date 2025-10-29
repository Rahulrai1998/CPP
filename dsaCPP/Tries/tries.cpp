#include <bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 26;
struct TrieNode
{
    TrieNode *children[ALPHABET_SIZE];
    bool isEndOfWord;
    TrieNode()
    {
        isEndOfWord = false;
        for (int i = 0; i < ALPHABET_SIZE; ++i)
            children[i] = nullptr;
    }
};

void insert(const string &word)
{
    TrieNode *curr = root
    for (char ch : word)
    {
        int index = ch - 'a';
        if (!curr->children[index])
            curr->children[index] = new TrieNode();
        curr = curr->children[index];
    }
    curr->isEndOfWord = true;
}

bool search(const string &word)
{
    TrieNode *curr = root;
    for (char ch : word)
    {
        int index = ch - 'a';
        if (!curr->children[index])
            return false;
        curr = curr->children[index];
    }
    return curr->isEndOfWord;
}

int main()
{

    return 0;
}