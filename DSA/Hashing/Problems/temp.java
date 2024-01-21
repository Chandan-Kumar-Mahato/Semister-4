package Problems;
class Node{
    Node head;
    Node(int x){
        this.head = x;
    }
}
// in this program i will apply chaining which is used to improved the hashing collision technique
public class temp {
    public static void main(String[] args) {
        int bucket = 7;
        int[] keysArray={70,71,9,56,72};
//    you cannot initilize the array itself to NULL keyword , it asks for pointer array value
        int[] hashArray = {0,0,0,0,0,0,0};  // this way you can initilizate the whole array to 0;


        for(int i = 0;i<5;i++)
        {

            if(hashArray[keysArray[i]%7] == 0)
                hashArray[keysArray[i]%7] = keysArray[i];
            else{
                System.out.println("Linked list concept APPLy");
            }
        }

        for(int i = 0;i<7;i++)
        {
            System.out.print(hashArray[i] + " ");
        }

    }
}
