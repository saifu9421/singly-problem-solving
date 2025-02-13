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
 
       int size(Node *head){
        int n = 0;
          Node *tmp = head;
           while(tmp != NULL){
             n++;
              tmp = tmp->next;
           };
            return n;        
    };
      
     Node *duplicate(Node *&head){
         Node *tmp = head;
          for(int i = 1;i<=size(head);i++){
             Node *tmp2 = tmp;
              for(int j = i+1;j<=size(head); j++){
                   if(tmp2->next->val == tmp->val){
                     Node *deleteNode = tmp2->next;
                         tmp2->next = tmp2->next->next;
                      delete deleteNode;
                   }else{ 
                    tmp2 = tmp2->next;
                   }
              };
               tmp = tmp->next;
          };
          return head;      
     };

          Node *sortremove(Node*&head){
            Node *tmp = head;
            for(int i = 1;i<=size(head);i++){
               Node *tmp2 = tmp;
                for(int j = i+1;j<=size(head); j++){
                     if( tmp->val == tmp2->val){
                       Node *deleteNode = tmp2;
                           tmp2  = tmp2->next;
                        delete deleteNode;
                     }else{ 
                      tmp2 = tmp2->next;
                     }
                };
                 tmp = tmp->next;
            };
            return head;      
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
           Node *newHe =  duplicate(head);
         output(newHe);
     return 0;
 }