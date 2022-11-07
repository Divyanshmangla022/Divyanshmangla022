#include <iostream>
using namespace std;

#include<vector>
class PriorityQueue{
vector<int> pq;

public:
    PriorityQueue()
    {

    }

    bool isEmpty()
    {
        return pq.size()==0;
    }
    int getSize()
    {
        return pq.size();
    }
    int getMax()
    {
        if(isEmpty())
            return 0;

            return pq[0];


    }

    void insert(int element)
    {
        pq.push_back(element);

        int childIndex=pq.size()-1;
        while(childIndex>0)
        {
            int parentIndex=(childIndex-1)/2;
            if(pq[childIndex]>pq[parentIndex])
            {
                int temp=pq[parentIndex];
                pq[parentIndex]=pq[childIndex];
                pq[childIndex]=temp;

            }
            else
            {
                break;
            }
            childIndex=parentIndex;

        }

    }


    int removeMax()
    {
        if(isEmpty())
            return 0;
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();

        int parentIndex=0;
        while(2*parentIndex+1<pq.size())
        {


        int childIndex1=2*parentIndex+1;
        int childIndex2=2*parentIndex+2;
        int maxindex;
        if(pq[childIndex1]>pq[childIndex2])
        {
            maxindex=childIndex1;
            int temp=pq[parentIndex];
            pq[parentIndex]=pq[childIndex1];
            pq[childIndex1]=temp;
        }
        else
        {
            maxindex=childIndex2;
            int temp=pq[parentIndex];
            pq[parentIndex]=pq[childIndex2];
            pq[childIndex2]=temp;

        }
        parentIndex=maxindex;

    }
    return ans;
    }

};


int main() {
    PriorityQueue pq;
    int choice;
    cin >> choice;

    while (choice != -1) {
        switch (choice) {
            case 1:  // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2:  // getMax
                cout << pq.getMax() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMax() << "\n";
                break;
            case 4:  // size
                cout << pq.getSize() << "\n";
                break;
            case 5:  // isEmpty
                cout << (pq.isEmpty() ? "true\n" : "false\n");
            default:
                return 0;
        }

        cin >> choice;
    }
}
