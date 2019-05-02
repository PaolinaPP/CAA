
#include<stdio.h> 
#include<stdlib.h> 
 
  
  typedef struct tree{
	int key;
	int data;
	struct tree *left;
	struct tree *right;
}treestr;

static treestr *root=NULL;

void insert(int key, int data, treestr ** tr){
	if((*tr)==NULL){
		(*tr)= malloc(sizeof(struct tree));
		(*tr)->key=key;
		(*tr)->data=data;
		(*tr)->left=NULL;
		(*tr)->right=NULL;
	}
	else if((*tr)->key<key){
		insert(key,data,&((*tr)->left));
	}
	else if((*tr)->key>key){
		insert(key,data,&((*tr)->right));
	}
	else{
		printf("tree");
	}
}
    
    
int maxDepth(treestr** node)  
{ 
   if ((*node)==NULL)  
       return 0; 
   else 
   { 
       /* compute the depth of each subtree */
       int lDepth = maxDepth(&(*node)->left); 
       int rDepth = maxDepth(&(*node)->right); 
  
       /* use the larger one */
       if (lDepth > rDepth)  
           return(lDepth+1); 
       else return(rDepth+1); 
   } 
}  
int main() { 
    int i,k=10;

	for(i=0;i<5;i++){
		insert(i,k,&root);
		k++;
	} 
    
    printf("Height of tree is %d\n", maxDepth(&root)); 
    return 0; 
} 

