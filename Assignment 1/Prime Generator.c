	#include <stdio.h>
	#include <stdlib.h>
	struct node{
		 int data;
		 struct node* next ;
	}*head=NULL;


    void print(struct node* t)
    {
        if(t==NULL)
            return;
        print(t->next);
        printf("%d \n",t->data);
    }
	int check_prime(int a)
	{
		int i,count=1;
		if(a>3)
        {
          for(i=3;i*i<a;i=i+2)
	   	     {
                if(a%i==0)
	   	 	      count=0;
	   	      }
	   	}
	   	if(a%2==0)
	   		count=0;

	   	 return count;

	}
	int main()
	{
		int n,a,b,i,count=1,k=0;
		scanf("%d",&n);
		while(n)
		{
			head=NULL;
	        scanf("%d %d",&a,&b);

	        if(a==2||(++a)==2)
	          {
	          	struct node* temp = (struct node*)malloc(sizeof(struct node));
	          	temp->data=2;
	          	temp->next=NULL;
	          	head=temp;
	          }

	        for(i=a;i<=b;i=i+count)
	          {
	              if(i%2!=0)
	              	count=2;


	                if(check_prime(i))
	                 {
	                   	struct node* temp = (struct node*)(malloc(sizeof(struct node)));
	                	temp->data=i;
	                	if(head==NULL)
	          	        temp->next=NULL;
	          	        else
	          	        temp->next=head;
	                 	head=temp;
	                  }
	           }


	    	n--;
	    	print(head);
		}

		return 0;
	}
