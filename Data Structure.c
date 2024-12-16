#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};
struct node*createnode(int data) {
	struct node*newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
void inst_atend(struct node**head,int data) {
	struct node*newnode=createnode(data);
	if(*head==NULL) {
		*head=newnode;
		return;
	}
	else {
		struct node *temp=*head;
		while(temp->next!=NULL) {
			temp=temp->next;
		}
		temp->next=newnode;
	}
};
void display(struct node *head){
    printf("Train Route:");
    struct node *temp=head;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
        //if(temp==NULL){
          //  printf("%d",temp->data);
        //}
    }
}
int main() {
	int n;
	int i=0;
	int data;
	printf("Enter the number of train cars:");
	scanf("%d",&n);//9
	struct node*head=NULL;
	 while(i<n){
		scanf("%d",&data);//100
		inst_atend(&head,data);
		i++;
	}
	display(head);
}
