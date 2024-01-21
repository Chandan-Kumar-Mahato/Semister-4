//  In this problem you have to perform Direct address table operation
#include<iostream>
using namespace std;
void search(int num , int arr[]){
    (arr[num]==1) ? cout << "TRUE" << endl : cout << "FALSE" << endl;
}
void insert(int num , int arr[]){
    arr[num] = 1;
}
void dlete(int num , int arr[])
{
    arr[num]  = 0;

}
int main(){
    int arr[1000];
    for(int i = 0;i<1000;i++)
    {
        arr[i] = i-i;
    }
    

    // inserting
        insert(10,arr);
        insert(20,arr);
        insert(119 , arr);
    // searching
        search(10 , arr);  // if found should print TRUE else FALSE
        search(20 , arr);
    // deleting
         dlete(119,arr);  // must remove the the number present
    // searching
        search(119 ,arr);  
    return 0;
}