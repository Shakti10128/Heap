#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int *arr;
    int size;

    // constructor
    Heap(){
        arr[0] = -1;
        size = 0;
    }

    // inserting element's in Heap
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            // finding the parent index
            int parent = index/2;
            // if parent is less than the index value than swap the values
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                // and set index equal to parent
                index = parent;
            }
            // if parent is greater than the index value than simply return mean it's max heap
            else{
                return;
            }
        }

    }


    // delete element from the heap
    void remove(){
        if(size == 0){
            cout<<"nothing to remove!"<<endl;
            return;
        }
        // swapping the value of first and last element
        swap(arr[1],arr[size]);
        // removing the last element by decrementing the size
        size--;
        int i = 1;
        while(i<size){
            int leftchild = 2*i;
            int rightchild = 2*i+1;
            // checking for both child weither both are less to size or not
            if(leftchild < size && rightchild < size){
                // checking which element is bigger
                if(arr[leftchild] > arr[rightchild]){
                    swap(arr[i],arr[leftchild]);
                    i = leftchild;
                }
                else if(arr[rightchild] > arr[leftchild]){
                // checking which element is bigger
                    swap(arr[i],arr[rightchild]);
                    i = rightchild;
                }
                else{
                    // if both child is less to parent than simply return it's mean max heap is satisfied
                    return;
                }
            }
            // checking weither the elemnt is lying inside array or not
            else if(leftchild < size && arr[i] < arr[leftchild]){
                // if leftchild is greater to parent than swap the value 
                swap(arr[i],arr[leftchild]);
                i = leftchild;
            }
            else if(rightchild < size && arr[i] < arr[rightchild]){
                // if rightchild is greater to parent than swap the value 
                swap(arr[i],arr[rightchild]);
                i = rightchild;
            }
            else{
                return;
            }
        }

    }


     // print function
     void print(){
         for(int i = 1;i<=size;i++){
             cout<<arr[i]<<" ";
         }
         cout<<endl;
     }
};