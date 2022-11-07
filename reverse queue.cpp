#include <iostream>
using namespace std;
#include<queue>
#include<stack>

void reverseQueue(queue<int>&q)
{

    if(q.empty())
    {
        return;
    }
    int temp=q.front();
    q.pop();
    reverseQueue(q);
     q.push(temp);
     return ;

/*stack<int>s;
while(!q.empty())
{
    s.push(q.front());
    q.pop();

}
while(!s.empty())
{
    q.push(s.top());
    s.pop();
}
return ;


*/
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}
