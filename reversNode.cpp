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
 
     
    


        void output(Node *head){
            Node *tmp  = head;
             while (tmp != NULL)
             {
               cout<<tmp->val<<" ";
                tmp = tmp->next;                /* code */
             };
              cout<<endl;            
       };
         
          Node* reva(Node *&head,Node *cur){
              if(head == NULL){
                 return head;
              };
              Node *tmp = cur;
              if(tmp->next == NULL){
                head = tmp;
                return head;
              } ;
            Node *newHead  = reva(head,tmp->next);
               tmp->next->next = tmp;
                tmp->next = NULL;
                return newHead;
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
            Node *newHead = reva(head,head);
         output(newHead);
     return 0;
 }