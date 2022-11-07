#include<iostream>
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
    int getMin()
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
          if(pq[childIndex]<pq[parentIndex])
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

    int removeMin()
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
        int miniindex;
        if(pq[childIndex1]<pq[childIndex2])
        {
            miniindex=childIndex1;
            int temp=pq[parentIndex];
            pq[parentIndex]=pq[childIndex1];
            pq[childIndex1]=temp;
        }
        else
        {
            miniindex=childIndex2;
            int temp=pq[parentIndex];
            pq[parentIndex]=pq[childIndex2];
            pq[childIndex2]=temp;

        }
        parentIndex=miniindex;

    }
    return ans;
    }
    /*  alternte option

      int removeMin()
    {
        if(isEmpty())
            return 0;
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
     //down heapify
        int parentIndex=0;

        int childIndex1=2*parentIndex+1;
        int childIndex2=2*parentIndex+2;
        while(childIndex1<pq.size())
        {


        int minIndex=parentIndex;
        if(pq[minIndex]<pq[childIndex1])
        {
            minIndex=childIndex1;
        }
        if(pq[childIndex2]<pq[minIndex])
        {
        minIndex=childIndex2;
        }
        if(minIndex==parentIndex)
            break;

        int temp=pq[minIndex];
        pq[minIndex]=pq[parentIndex];
        pq[parentIndex]=temp;

        parentIndex=minIndex;
         childIndex1=2*parentIndex+1;
        childIndex2=2*parentIndex+2;

    }
    return ans;
    }

    */

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
            case 2:  // getMin
                cout << pq.getMin() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMin() << "\n";
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
