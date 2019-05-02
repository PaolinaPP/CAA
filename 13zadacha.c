#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node{
	int number;
	struct node * previous;
	struct node * next;
};

struct node * head=NULL;
struct node * tail=NULL;
struct node * prev=NULL;

void addNode(int num){
struct node * element=(struct node *) malloc(sizeof(struct node));
if(head==NULL){
	prev=head;
	head=element;
}
else{
	tail->next=element;
}
element->number=num;
element->next=NULL;
element->previous=prev;
tail=element;
prev=element;
}

void printList(){
	struct node * p=head;
	while(p!=NULL){
		printf("%d ", p->number);
		p=p->next;
	}
	printf("\n");
}

void anotherPrintList(){
	struct node *p=tail;
	while(p!=NULL){
		printf("%d ",p->number);
		p=p->previous;
	}
		printf("\n");
}

void addNodeAfter(int after, int num){
	struct node * el=(struct node *) malloc(sizeof(struct node));
	struct node * p=head;
	struct node * pp=NULL;
	while(p!=NULL){
	    if(p->number==after){
	    	pp=p->next;
	    	p->next=el;
	    	el->number=num;
	    	el->previous=p;
	    	el->next=pp;
	    	pp->previous=el;
	    	break;
		}
		p=p->next;
	}
}

void addNodeBefore(int before, int num){
	struct node * el=(struct node *) malloc(sizeof(struct node));
	struct node * p=tail;
	struct node * pp=NULL;
	while(p!=NULL){
		if(p->number==before){
			pp=p->previous;
			p->previous=el;
			el->number=num;
			el->next=p;
			el->previous=pp;
			pp->next=el;
			break;
		}
		p=p->previous;
	}
}

void deleteAll(){
	struct node * p=head;
	struct node * pp=NULL;
	while(p!=NULL){
		pp=p->next;
		free(p);
		p=pp;
	}
	head=NULL;
	tail=NULL;
}

void deleteNode(int node){
	struct node * p=head;
	struct node * pp=NULL;
	struct node * ppp=NULL;
	while(p!=NULL){
		if(p->number==node){
			if(p==head){
			     pp=p->next;
				 head=pp;	
				 break;
			}
			else if(p==tail){
				pp=p->previous;
				tail=pp;
				pp->next=NULL;
				break;
			}
			else{
		        pp=p->previous;
	        	ppp=p->next;
	        	pp->next=ppp;
        		ppp->previous=pp;
        		break;
	}
	}
	p=p->next;
	
	}
	free(p);
}

int main(int argc, char *argv[]) {
	int i;
	for(i=0;i<10;i++){
		addNode(i);
	}
	printList();
	anotherPrintList();
	addNodeAfter(5,11);
	printList();
	addNodeBefore(5,12);
	printList();
	deleteNode(0);
	printList();
	deleteNode(9);
	printList();
	deleteNode(6);
	printList();
	deleteAll();
	printList();
	
	return 0;
}
