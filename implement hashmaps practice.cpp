#include<iostream>
using namespace std;
template<typename V>
#include<string>

class MapNode{
public:
    string key;
    V value;
    MapNode*next;

    MapNode(string key,V value)
    {
        this->key=key;
        this->value=value;
        next=NULL;
    }
    ~MapNode()
    {
        delete next;
    }

};

template<typename V>
class ourmap{

    MapNode<V>** buckets;
    int count;
    int numbuckets;

public:
    ourmap()
    {


    count=0;
    numbuckets=5;
    buckets=new MapNode<V>*[numbuckets];
    for(int i=0;i<numbuckets;i++)
    {
        buckets[i]=NULL;
    }
    }
    ~ourmap()
    {
       for(int i=0;i<numbuckets;i++)
    {
       delete  buckets[i];
    }
    delete []buckets;
    }



private:
    int getBucketIndex(string key)
    {
        int hashcode=0;
        int coefficent=1;
        for(int i=key.length()-1;i>=0;i--)
        {
            hashcode+=key[i]*coefficent;
            hashcode=hashcode%numbuckets;
            coefficent*=37;
            coefficent=coefficent%numbuckets;

        }
        return hashcode%numbuckets;
    }

    void rehash()
    {
        MapNode<V>**temp=buckets;
        buckets=new MapNode<V>*[2*numbuckets];
        int oldbuckets=numbuckets;
        numbuckets*=2;
        for(int i=0;i<numbuckets;i++)
        {
            buckets[i]=NULL;
        }
        for(int i=0;i<oldbuckets;i++)
        {
        MapNode<V>*head=temp[i];

        while(head!=NULL)
        {
            string key=head->key;
        V value=head->value;
        insert(key,value);
        head=head->next;
        }
        }

         for(int i=0;i<oldbuckets;i++)
         {
             MapNode<int>*head=temp[i];
             delete head;
         }
         delete[]temp;






    }

public:

   int size()
   {
       return count;
   }

    V getValue(string key)
    {
         int bucketIndex=getBucketIndex(key);
     MapNode<V>* head=buckets[bucketIndex];
     while(head!=NULL)
     {
         if(head->key==key)
         {
             return head->value;
         }
         head=head->next;
     }
     return 0;
    }

    void  insert(string key,V value)
    {
     int bucketIndex=getBucketIndex(key);
     MapNode<V>* head=buckets[bucketIndex];
     while(head!=NULL)
     {
         if(head->key==key)
         {
             head->value=value;
             return;
         }
         head=head->next;
     }
     head=buckets[bucketIndex];
     MapNode<V>*node=new MapNode<V>(key,value);
     node->next=head;
     buckets[bucketIndex]=node;
     count++;
     double loadfactor=(1.0*count)/numbuckets;
      if(loadfactor>0.7)
      {
              rehash();
      }
    }

    V remove(string key)
    {
       int bucketIndex=getBucketIndex(key);
       MapNode<V>* head=buckets[bucketIndex];
       MapNode<V>* prev=NULL;

       while(head!=NULL)
       {
           if(head->key==key)
           {
               if(prev==NULL)
               {
                   buckets[bucketIndex]=head->next;
               }
               else
               {
                   prev->next=head->next;
               }
               V value=head->value;
               head->next=NULL;
               delete head;
               count--;
               return value;
           }


           prev=head;
           head=head->next;

       }
       return 0;

    }


};








int main()
{

}
