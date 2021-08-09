static void printLinkedList(SinglyLinkedListNode head) {
        while(head!=null){
            System.out.println(head.data);
            head=head.next;
        }
    }
    
    //try with java 7 language
