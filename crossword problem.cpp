#include<iostream>
using namespace std;
#include<string>
#define N 10
char crossword[10][10];

bool canplacewordhorizontal(string word,int i,int j)
{

    if(crossword[i][j-1]!='+'&&j-1>=0)
        return false;
    else if(j+word.size()<N&&crossword[i][j+word.size()]!='+')
        return false;

        for(int k=0;k<word.size();k++)
        {
            if(j+k>=N)
            {
                return false;
            }


            if(crossword[i][j+k]=='-'||crossword[i][j+k]==word[k])
                continue;
            else
                return false;
        }
    return true;
}
bool canplacewordvertical(string word,int i,int j)
{

    if(crossword[i-1][j]!='+'&&i-1>=0)
        return false;
    else if(i+word.size()<N&&crossword[i+word.size()][j]!='+')
        return false;

        for(int k=0;k<word.size();k++)
        {
            if(i+k>=N)
            {
                return false;
            }


            if(crossword[i+k][j]=='-'||crossword[i+k][j]==word[k])
                continue;
            else
                return false;
        }
    return true;
}

bool* placewordhorizontal(string word,int i,int j)
{
    bool *weplaced=new bool[word.size()];
    for(int k=0;k<word.size();k++)
    {
        if(crossword[i][j+k]=='-')
        {
            crossword[i][j+k]=word[k];
            weplaced[k]=true;
        }
    }
    return weplaced;


}
void unplacewordhorizontal(string word,bool*weplaced,int i,int j)

{



    for(int k=0;k<word.size();k++)
    {
        if(weplaced[k]==true)
        {
            crossword[i][j+k]='-';
        }
    }
    return;
}

bool* placewordvertical(string word,int i,int j)
{
    bool *weplaced=new bool[word.size()];
    for(int k=0;k<word.size();k++)
    {
        if(crossword[i+k][j]=='-')
        {
            crossword[i+k][j]=word[k];
            weplaced[k]=true;
        }
    }
    return weplaced;


}
void unplacewordvertical(string word,bool*weplaced,int i,int j)

{



    for(int k=0;k<word.size();k++)
    {
        if(weplaced[k]==true)
        {
            crossword[i+k][j]='-';
        }
    }
    return;
}




void crosswordhelper(string words[],int size,int index)
{
    if(index==words->size())
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cout<<crossword[i][j];
            }
            cout<<endl;
        }
        return;


    }


    string word=words[index];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(crossword[i][j]=='-'||crossword[i][j]==word[0])
            {
                if(canplacewordhorizontal(word,i,j))
                {
                    bool *weplaced= placewordhorizontal(word,i,j);
                   crosswordhelper(words,size,index+1);
                    unplacewordhorizontal(word,weplaced,i,j);
                }
                if(canplacewordvertical(word,i,j))
                {
                  bool*weplaced=    placewordvertical(word,i,j);
                  crosswordhelper(words,size,index+1);
                    unplacewordvertical(word,weplaced,i,j);
                }


            }
        }
    }












}




int main()
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>crossword[i][j];
        }
    }

    string s;
    cin>>s;

    string input[10];

    string word = "";
    int a = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == ';')
        {
            input[a++] = word;
            word = "";
        }
        else
            word += s[i];
    }


    input[a++] = word;


    crosswordhelper(input,a,0);
    return 0;
}
