#include <iostream> 
using namespace std;
class Stack{            // user define data structure 
public:         
    int arr[5];
    int idx;
    Stack(){
        idx =-1;
    }

    void push(int val){
        idx++;
        arr[idx]=val;
    }

    void  pop(){
        idx--;
    }

    void top(){
        return arr[idx];
    }

    void size(){
        return idx+1;
    }
};
 int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(40);
    cout<<st.size()<<endl;
 }