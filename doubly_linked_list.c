#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=0, *newnode, *temp, *temp2, *nextnode, *trav;
void create_node()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=0;
    newnode->next=0;
}

void insert_start()
{
    create_node();
    if(head==0)
    {
        head=newnode;
        head->prev=0;
        head->next=0;
        printf("Enter Your Node\n");
        scanf("%d",&head->data);
    }
    else{
        temp=head;
        head=newnode;
        temp->prev=head;
        head->next=temp;
        head->prev=0;
        printf("Enter Your node\n");
        scanf("%d",&head->data);
    }
    printf("Node Insrted\n");
    count++;
}

void insert_pos()
{
    create_node();
    int pos,i=1;
    printf("Enter the position you want to insert the node\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        insert_start();
        printf("Node Inserted\n");
        count++;
    }
    else if(pos<=count)
    {
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=nextnode;
    nextnode->prev=newnode;
    printf("Enter Your node\n");
    scanf("%d",&newnode->data);
    printf("Node Inserted\n");
    count++;
    }
    else{
        printf("You are printing invalid position\n");
    }
    
}

void insert_end()
{
    create_node();
    if(head==0)
    {
        insert_start();
    }
    else{
        temp=head;
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=0;
        printf("Enter Your Node\n");
        scanf("%d",&newnode->data);
    }
    printf("Node Inserted\n");
    count++;
}

void delete_start()
{
    if(head==0)
    {
        printf("Node doesn't Exit....\n");
    }
    else{
        temp2=head;
        head=head->next;
        head->prev=0;
        temp2->next=0;
        free(temp2);
        count--;
    }
}

void delete_pos()
{
    int pos,i=1;
    printf("Enter the position you want to delete\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        delete_start();
        count--;
    }
    else if(pos<=count)
    {
        temp2=head;
        while(i<pos-1)
        {
            temp2=temp2->next;
            i++;
        }
        nextnode=temp2->next;
        temp2->next=nextnode->next;
        nextnode->next->prev=temp2;
        nextnode->prev=0;
        nextnode->next=0;
        free(nextnode);
        count--;
    }
    else{
        printf("Position doesn't Exist....\n");
    }
}

void delete_end()
{
    if(head==0)
    {
        printf("Node Doesn't Exists\n");
    }
    else{
        temp2=head;
        while(temp2->next!=0)
        {
            temp2=temp2->next;
        }
        temp2->prev->next=0;
        temp2->prev=0;
        free(temp2);
        count--;
    }
}

void search()
{
    int grab=0,num,gret=0;
    printf("Enter the value you want to search\n");
    scanf("%d",&num);
    trav=head;
    while(trav!=0)
    {
        grab++;
        if(trav->data==num)
        {
            printf("Number Found at %d position\n",grab);
            gret=1;
        }
        trav=trav->next;
    }
    if(gret==0)
    {
        printf("Number not Found\n");
    }
}

void display()
{
    if(head==0)
    {
        printf("List is Empty\n");
    }
    else{
        trav=head;
        while(trav!=0)
        {
            printf("%d\n",trav->data);
            trav=trav->next;
        }
    }
}
int main()
{
    int choice, flag=1;
    do{
    printf("Enter Your Choice\n");
    printf("1.Insert from Starting\n");
    printf("2.Insert from Specified Position\n");
    printf("3.Insert from end\n");
    printf("4.Delete From Starting\n");
    printf("5.Delete From Specified Position\n");
    printf("6.Delete From End\n");
    printf("7.Search by value\n");
    printf("8.Display\n");
    printf("9.Exit from Program\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            insert_start();
            break;
        case 2:
            insert_pos();
            break;
        case 3:
            insert_end();
            break;
        case 4:
            delete_start();
            break;
        case 5:
            delete_pos();
            break;
        case 6:
            delete_end();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            flag=0;
            break;
        default:
            printf("Invalid Input\n");
    }
    }while(flag==1);
    return 0;
}
