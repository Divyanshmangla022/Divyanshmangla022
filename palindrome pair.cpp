#include <bits/stdc++.h>
using namespace std;
#include <string>
#include<vector>


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



    string reverseword(string word)
    {
        int st=0;
        int ed=word.size()-1;

        while(st<ed)
        {
            char temp=word[st];
            word[st]=word[ed];
            word[ed]=temp;
            st++;
            ed--;


        }
        return word;

    }

    bool isPalindromePair(vector<string> words) {
       for(int i=0;i<words.size();i++)
    {
        for(int j=0;j<words[i].size();j++)
        {
            insertWord(words[i].substr(j));
        }


    }

        for(int i=0;i<words.size();i++)
        {
            string temp1=words[i];
            string temp=reverseword(temp1);
                bool check=search(temp);
                if(check)
                {
                    return true;
                }
        }
        return false;
    }
};


int main() {
    Trie t;
    int n;
    cin >> n;
    vector<string> words(n);

    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    cout << (t.isPalindromePair(words) ? "true" : "false");
}
