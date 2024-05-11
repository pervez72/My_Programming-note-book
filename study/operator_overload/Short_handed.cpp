#include<bits/stdc++.h>
using namespace std;

class Marks{
    int mark; //this is a member
    public:
    Marks(int m=0){
        mark=m;
        }

    void dis(){
        cout<<mark<<" "<<"\n";
        }

      void operator +=(int bonous_marks){
            mark+=bonous_marks;
 
        }

        friend void operator -=(Marks cur_obj,int readmark);
};

 void operator -=(Marks cur_obj,int readmark){
    cur_obj.mark -= readmark;
}
int main(){
    
    Marks pervez_mark(50);
    pervez_mark.dis();
    pervez_mark += 20;
    pervez_mark.dis();
    pervez_mark-= 20;
    pervez_mark.dis();
    
    }
    