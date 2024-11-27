// Revised Templates

#include<bits/stdc++.h>
using namespace std;


template <typename datatype> 
class vector__{
    private:
        int count, space;
        datatype *start, *temp;
    public:
        vector__(){
            count = 0;
            space = 4;
            start = (datatype *)malloc(5 * sizeof(datatype));
        }
        void push(datatype x){
            if(space == 0){
                temp = (datatype *)malloc((count + 5) * sizeof(datatype));
                for(int i=0; i<count; ++i){
                    temp[i] = start[i];
                }
                free(start);
                start = temp;
                start[count++] = x;
                space = 4;
            }
            else{
                start[count++] = x;
                space--;
            }
        }
        void pop(){
            --count;
        }
        void display(){
            cout << "Elements are as follows:\n";
            for(int i=0; i<count; ++i){
                cout << start[i] << " " << "\n ";
            }
        }
};

int main(){
    vector__<float> v;

    for(int i = 1; i<=100; ++i){
        v.push(i + i/10.0f);
    }
    v.display();
    return 0;
}