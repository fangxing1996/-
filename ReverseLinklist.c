#include<stdio.h>
#include<malloc.h>
typedef struct node{
	int data;
	struct node* next;
}node;
typedef struct node* list;
list reverse(list l){
	list front, rear, tag;
	front = l;
	rear = l->next;
	l->next = NULL;
	while(rear){
		tag = rear->next;
		rear->next = front;
		front = rear;
		rear = tag;
	}
	l = front;
	return l;
} 
node* create()
{
    node *head, *p, *s;
    int x, cycle = 1;
    head = (node*)malloc(sizeof(node)); //����ͷ�ڵ�
	  head->data = 0;
    p = head;  
	  while(cycle){        
		  scanf("%d", &x);        
		  if(x != 0){
        s = (node*)malloc(sizeof(node));//ÿ���½�һ���ڵ�
        s->data = x;            
			  p->next = s;
        p = s;
      }        
		  else
      {
            cycle = 0;
       }
    }
    p->next = NULL;
	  p = head;   
	  while(p != NULL){
		  printf(" %d", p->data);
		  p = p->next;
	  }    
	  return head;
}
int print(list s){
	node *p;
	p = s;
	while(p != NULL){
	  printf("%d ", p->data);
		p = p->next;
	} 
	return 0;   
}
int main(){
	node *d;
	d = create();
	putchar('\n');
	print(reverse(d));
	return 0;
}
