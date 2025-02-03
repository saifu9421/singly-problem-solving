#include<bits/stdc++.h>
using namespace std;
    class Node{
      public:
         int val;
          Node *next;
            Node(int val){
                this->val =  val;
                  this->next = NULL;
            }
    };
       void input(Node *&head,int val){
           Node *newNode = new Node(val);
            if(head == NULL){
                 head = newNode;
                  return;
            };
            Node *tmp = head;
             while (tmp->next != NULL)
             {
                 tmp = tmp->next;
                /* code */
             };
              tmp->next = newNode;
    };
     
     void count_odd_even(Node *head){
         if(head ==  NULL) return ;
          Node *tmp = head;
           int od = 0;
           int ev = 0;
            while (tmp != NULL)
            { 
                 if(tmp->val %2 == 0){
                     ev++;
                 }else od++;
                 tmp = tmp->next;
                /* code */
            };
          cout<<"even = "<<ev<<" "<<"odd = "<<od<<" ";         
    };
     
 int main(){
        Node *head = NULL;
        while (true)
        {
              int val; cin>>val;
               if(val == -1) break;
                input(head,val);
            /* code */
        };
        count_odd_even(head);

     return 0;
 }