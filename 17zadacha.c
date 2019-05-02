#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
	int key;
	struct tree *left;
	struct tree *right;
}treestr;

static treestr *root=NULL;

int flag=0;

void insert(int key, treestr ** tr){
	if((*tr)==NULL){
		(*tr)= malloc(sizeof(struct tree));
		(*tr)->key=key;
		(*tr)->left=NULL;
		(*tr)->right=NULL;
	}
	else if((*tr)->key<key){
		insert(key,&((*tr)->left));
	}
	else if((*tr)->key>key){
		insert(key,&((*tr)->right));
	}
	else{
		printf("tree");
	}
}


int search(int key, struct tree *tr){
	if(tr==NULL) return -1;
	printf("%d=key %d=flag\n", tr->key, flag);
	if(flag==2){
		// printf("in if flag ==2 %d=flag\n", flag);
		 return 0;
	}
    if(tr->key==key){
    	flag++;
    	//printf("%d=key %d=flag\n", tr->key, flag);
	}
	else if(tr->key<key){
		return search(key,tr->left);
	}
	else if(tr->key>key){
		return search(key,tr->right);
	}

}

void checkTree(struct tree *trr){
		if(trr==NULL) return;
		//printf("%d \n",trr->key);
		flag=0;
	//	printf("%d=ret val \n",search(trr->key, &(*trr)));
		int res=search(trr->key, &(*trr)));
		if(res==0){
			 printf("There are 2 equal elements.\n");
			 return;
		}
		checkTree(trr->left);
		checkTree(trr->right);
}

int main(int argc, char *argv[]) {
	insert(1,&root); 
    insert(2,&(root->left)); 
    insert(3,&(root->right)); 
  
    insert(4,&(root->left->left)); 
    insert(5,&(root->left->right)); 
    insert(6,&(root->right->left)); 
    insert(7,&(root->right->right)); 
  
    insert(8,&(root->left->left->left)); 
    insert(9,&(root->left->left->right)); 
    insert(10,&(root->left->right->left)); 
    insert(11,&(root->left->right->right)); 
    insert(12,&(root->right->left->left)); 
    insert(13,&(root->right->left->right)); 
    insert(14,&(root->right->right->left)); 
    insert(5,&(root->right->right->right));  
	checkTree(root);
	return 0;
}


