#include<iostream>
using namespace std;
#include<string>
class TrieNode{
public:

char data;
TrieNode**children;
bool isTerminal;
TrieNode(char data)
{

    this->data=data;
    children=new TrieNode*[26];
    for(int i=0;i<26;i++)
    {
    children[i]=NULL;
    }
    isTerminal=false;
}
};

class Trie{
TrieNode* root;
public:
    Trie()
    {
        root=new TrieNode('\0');
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
            if(root->isTerminal==true)
                return true;
            else
            return false;
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

    bool searchWord(string word) {
        return searchWordhelper(root,word);
    }
    void removehelper(TrieNode*root,string word)
    {

        if(word.size()==0)
        {
            root->isTerminal=false;
            return ;
        }
        int index=word[0]-'a';
        TrieNode*child;
        if(root->children[index]!=NULL)
        {
            child=root->children[index];


             }
        else
        {
            return;
        }
        removehelper(child,word.substr(1));
        //remove child if it is useless

             if(child->isTerminal==false)
             {
                 for(int i=0;i<26;i++)
                 {
                     if(child->children[i]!=NULL)
                     {
                         return;
                     }

                 }
                 delete child;
                 root->children[index]=NULL;



    }
    }


    void removeWord(string word)
    {
       removehelper(root,word);

    }

};







int main()
{
    Trie t;

    t.insertWord("abc");
    t.insertWord("are");
    t.insertWord("dot");

    cout<<t.searchWord("abc")<<endl;
    t.removeWord("abc");
    cout<<t.searchWord("abc")<<endl;
}
