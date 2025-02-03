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
     
    void delete_specific_value(Node *&head,int val){
          if(head == NULL) return;
           if(head->val == val){
               Node *deleteNode = head;
                 head = head->next;
                  delete deleteNode;
                  return;
           };        
           Node *tmp = head;
             while (tmp != NULL)
             { 
                 if(tmp->next->val == val){
                      Node *deleteNode = tmp->next;
                       tmp->next = tmp->next->next;
                       delete deleteNode;
                       break;
                 };
                   tmp = tmp->next;
                /* code */
             };
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
        
 int main(){
        Node *head = NULL;
        while (true)
        {
              int val; cin>>val;
               if(val == -1) break;
                input(head,val);
            /* code */
        };
          int val;
           cin>>val;
       delete_specific_value(head,val);
         output(head);
     return 0;
 }