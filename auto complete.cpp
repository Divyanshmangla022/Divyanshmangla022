#include <iostream>
#include <string>
#include <vector>
using namespace std;


class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
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
            root->isTerminal = true;
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



    void autocompletehelper(TrieNode*root,string pattern,string word)
    {

    if(pattern.size()==0)
    {
        if(root->isTerminal)
        {
            cout<<word<<endl;
        }
        for(int i=0;i<26;i++)
        {
            if(root->children[i]!=NULL)
            {
                autocompletehelper(root->children[i],pattern,word+(root->children[i]->data));
            }
        }


    }
    else if(pattern.size()!=0)
    {
        int index=pattern[0]-'a';
        TrieNode*child;
        if(root->children[index]!=NULL)
        {
            child=root->children[index];
            autocompletehelper(child,pattern.substr(1),word+pattern[0]);
        }

    }




    }




     void autoComplete(vector<string> input, string pattern)
      {

    for(int i=0;i<input.size();i++)
    {
       insertWord(input[i]);
    }


        autocompletehelper(root,pattern,"");





      }
};


int main() {
    Trie t;
    int n;
    cin >> n;

    vector<string> vect;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        vect.push_back(word);
    }

    string pattern;
    cin >> pattern;

    t.autoComplete(vect, pattern);
}
