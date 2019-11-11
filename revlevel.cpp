#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left,*right;
};

struct node *root;
struct node *insert()
{
	int x,c;
	printf("the value to be inserted");
	scanf("%d",&x);
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->left=newnode->right=NULL;
	if(root==NULL)
	root=newnode;
	else
	{   struct node *ptr;
	ptr=root;
	    label:{
		printf("do you want to enter in left(1) or right(2)?");
		scanf("%d",&c);
		if(c==1)
		{
			if(ptr->left==NULL)
			ptr->left=newnode;
			else
			{
			ptr=ptr->left;
			goto label;
		    }
		}
		else
			{
			if(ptr->right==NULL)
			ptr->right=newnode;
			else
			{
			ptr=ptr->right;
			goto label;
		    }
		}
	}
		
	}
}

int height(node* node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the height of each subtree */
        int lheight = height(node->left);  
        int rheight = height(node->right);  
  
        /* use the larger one */
        if (lheight > rheight)  
            return(lheight + 1);  
        else return(rheight + 1);  
    }  
}

void printGivenLevel(node* root, int level,int l)  
{  
    if (root == NULL)  
        return;  
    if (level == 1)  
      printf("%d-",root->data);  
    else if (level > 1)  
    {  if(l==1){
	
        printGivenLevel(root->left, level - 1,l);  
        printGivenLevel(root->right, level - 1,l);  
    }
    if(l==0){
	
        printGivenLevel(root->right, level - 1,l);  
        printGivenLevel(root->left, level - 1,l);  
    }
    }  
}


void revlevelord(struct node *root)
{
	int h = height(root);  
    int i,l=1;  
    for (i=h; i>=1; i--) //THE ONLY LINE DIFFERENT FROM NORMAL LEVEL ORDER  
       {
		 printGivenLevel(root, i,l);
		 if(h%2==0)l=0;
		 else l=1;
		 
	}
}

int main()
{
    root=NULL;
	insert();
	insert();
	insert();
	insert();
	insert();
	revlevelord(root);

	return 0;
}
