
public class LL {
    node head;
    private int size;
    LL(){
        this.size=0;
    }
    class node{
        String data;
        node next;
        node(String data){
            this.data=data;
            this.next=null;
            size++;
        }
    }
    public void addFirst(String data){
        node newNode=new node(data);
        if(head==null){
            head=newNode;
            return;
    
        }
        newNode.next=head;
        head=newNode;
    }
    public void addLast(String data){
        node newNode=new node(data);
        if(head==null){
            head=newNode;
            return;
        }
        node currNode=head;//for traversing
        while(currNode.next!=null){
            currNode=currNode.next;//updating till get null
        }
        currNode.next=newNode;//above loop is finished thus we get lastnode and assignes new node value
    
    }
    public void printList(){
        if(head==null){
            System.out.println("list is empty");
            return;
        }
        node currNode=head;//for traversing
        while(currNode!=null){
            System.out.print(currNode.data+" ");
            currNode=currNode.next;//updating till get null
        }
        System.out.println();
    }
    public void deleteFirst(){
        if(head==null){
            System.out.println("list is empty");
            return;
        }
        size--;
        head=head.next;
    }
    public void deleteLast(){
        if(head==null){
            System.out.println("list is empty");
            return;
        }
        size--;
        if(head.next==null){//if there is only one elelment in a list
            head=null;
            return;
        }
        node secondLast=head;
        node lastNode=head.next;
        while(lastNode.next!=null){
            lastNode=lastNode.next;
            secondLast=secondLast.next;
        }
        secondLast.next=null;
    }
    public int getsize(){
        return size;
    }
    public static void main(String[] args) {
        LL list=new LL();
        list.addFirst("is");
        list.addFirst("This");
        list.addLast("a list");
        list.deleteFirst();
        //list.deleteLast();
        list.printList();
        
        System.out.println(list.getsize());

    }
}
