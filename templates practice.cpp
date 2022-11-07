#include<iostream>
using namespace std;
template<typename T,typename V>

class pairs{
private:


T x;
V y;
public:
    void setX(T x)
    {
        this->x=x;
    }
    T getX()
    {

        return x;
    }
    void setY(V y){
    this->y=y;
    }
    V getY()
    {
        return y;
    }

};

int main()
{
    pairs <pairs<int,char>,int >p1;

     pairs<int,char>p4;
     p4.setX(20);
     p4.setY('c');
     p1.setX(p4);
     p1.setY(10);
     cout<<p1.getX().getX()<<" "<<p1.getY()<<" "<<p1.getX().getY()<<endl;


   /* pairs<int,double>p1;

     p1.setX(100);
     p1.setY(100.34);
     cout<<p1.getX()<<" "<<p1.getY()<<endl;

*/


   /* pairs<int>p1;
    p1.setX(20);
    p1.setY(40);
    cout<<p1.getX()<<" "<<p1.getY()<<endl;

    pairs<double>p2;
    p2.setX(100.33);
    p2.setY(34.31);

cout<<p2.getX()<<" "<<p2.getY()<<endl;
*/

}
