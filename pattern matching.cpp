#include <iostream>
#include <string>
#include <vector>
using namespace std;


class TrieNode {
   public:
    char data;
    TrieNode **children;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
    }
};
class Trie {
    TrieNode *root;

   public:
    Trie() {
        root = new TrieNode('\0');
    }

    void insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            return;
        }

        // Small Calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        insertWord(child, word.substr(1));
    }
     bool searchWordhelper(TrieNode*root,string word)
    {
        if(word.size()==0)
        {
            return true;
        }

        int index=word[0]-'a';
        TrieNode* child;

        if(root->children[index]!=NULL)
        {

            child=root->children[index];
            bool check=searchWordhelper(child,word.substr(1));
            return check;
        }
        else
        {
            return false;
        }

    }

    void insertWord(string word) {
        insertWord(root, word);
    }

    bool search(string word) {
        return searchWordhelper(root,word);
    }


    bool patternMatching(vector<string> vect, string pattern) {

    for(int i=0;i<vect.size();i++)
    {
        for(int j=0;j<vect[i].size();j++)
        {
            insertWord(vect[i].substr(j));
        }


    }
    bool check=search(pattern);
    return check;


    }
};




int main() {
    Trie t;
    int n;
    cin >> n;
    string pattern;
    vector<string> vect;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        vect.push_back(word);
    }
    cin >> pattern;

    cout << (t.patternMatching(vect, pattern) ? "true" : "false");
}
