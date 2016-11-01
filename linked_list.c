# include<stdio.h>

struct node{
	char data;
	struct node* link;
};

int traverseList(struct node* head){
	int i=0;
	struct node*temp=head;
	while(temp){
		i+=1;
		printf("%c, ",temp->data);
		temp=temp->link;
	}
	return i;
}

int insertBegin(struct node*head, char val){
	
	struct node* n=(struct node*)malloc(sizeof(struct node));
	
	n->data = val;
	n->link = head;
	head=n;
	
	return head;	
}

int insertEnd(struct node*head, char val){
	struct node* temp = head;
	struct node* n=(struct node*)malloc(sizeof(struct node));
	n->data=val;
	
	if(head==0){
		n->link=0;
		head=n;
	}
	else{
		while(temp->link){
			temp=temp->link;
		}
		temp->link=n;
		n->link=0;	
	}
	
	return head;
	
}

int * deleteElement(struct node* head , char val){
	int output[]={0,0};
	struct node*temp=head;
	int i=0;
	
	if(temp->data==val){
		struct node*temp1=head;
		head=temp->link;
		free(temp1);
		output[0]=0;
		output[1]=head;
		return output;
	}
	
	else{
		while(head->link){
			i++;
			if(head->link->data==val){
				struct node* temp1=head->link;
				if(head->link->link){
					head->link=head->link->link;
					output[0]=i;
					output[1]=temp;
					free(temp1);
					return output;
				}
				else{
					head->link=0;
					output[0]=i;
					output[1]=temp;
					free(temp1);
					return output;
				}
				
			}
			head=head->link;
		}
		output[0]=-1;
		output[1]=temp;
	}
	
	return output;
}

int insertMiddle(struct node*head, char val, char insertAfter){
	
	int i=0;
	struct node* temp = head;
	struct node* n = (struct node*)malloc(sizeof(struct node));
	n->data=val;
	
	while(temp->data != insertAfter){
		i++;
		temp = temp->link;
	}
	if(temp->link==0){
		temp->link=n;
		n->link=0;
	}
	else{
		n->link=temp->link;
		temp->link=n;
	}
	
	  
	return i;
}

void main(){
	struct node* head=0;
	
	head=insertEnd(head,'a');
	insertMiddle(head,'b','a');
	insertMiddle(head,'c','b');
	insertMiddle(head,'d','c');
	insertMiddle(head,'e','d');
	insertMiddle(head,'f','e');
	insertMiddle(head,'g','f');
	insertMiddle(head,'h','g');
	insertMiddle(head,'i','h');
	insertMiddle(head,'j','i');
	insertMiddle(head,'k','j');
	insertMiddle(head,'l','k');
	insertMiddle(head,'m','l');
	insertMiddle(head,'n','m');
	insertMiddle(head,'o','n');
	insertMiddle(head,'p','o');
	insertMiddle(head,'q','p');
	insertMiddle(head,'r','q');
	insertMiddle(head,'s','r');
	insertMiddle(head,'t','s');
	insertMiddle(head,'u','t');
	insertMiddle(head,'v','u');
	insertMiddle(head,'w','v');
	insertMiddle(head,'x','w');
	insertMiddle(head,'y','x');
	insertEnd(head,'z');
	//printf("i = %d ", i);
	
	/*
	head = deleteElement(head,'b')[1];
	head = deleteElement(head,'c')[1];
	head = deleteElement(head,'d')[1];
	head = deleteElement(head,'e')[1];
	head = deleteElement(head,'f')[1];
	head = deleteElement(head,'g')[1];
	head = deleteElement(head,'h')[1];
	head = deleteElement(head,'i')[1];
	*/
	//printf("position: %d\n",deleteElement(head,'b')[0]);
	
	int size = traverseList(head);
	
}
