//  this program will implement the CHAINING in hashing which is 
// is used to control collision in HASHING

#include<iostream>
using namespace std;
int main(){
    int bucket = 7;
    int keysArray[]={70,71,9,56,72};
//    you cannot initilize the array itself to NULL keyword , it asks for pointer array value
    int hashArray[7] = {0};  // this way you can initilizate the whole array to 0;
   
   for(int i = 0;i<5;i++)
   {

        if(hashArray[keysArray[i]%7] == 0)
        hashArray[keysArray[i]%7] = keysArray[i];
        else{
            cout << "Linked list concept APPLY" << endl;
        }
   }



//    you can initilize the pointer array with NULL keyword --> all elements value to be 0
    int *ptr[7];
   
    for(int i=0;i<7;i++)
    {
        ptr[i] = NULL;
    }


    for(int i=0;i<7;i++)
    {
        cout << hashArray[i]<< " ";
    }


}