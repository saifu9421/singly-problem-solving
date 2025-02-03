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
     
    bool searching(Node *head,int val){
           if(head == NULL) return false;
            bool flag = false;
             Node *tmp = head;
              while (tmp != NULL)
              { 
                    if(tmp->val == val){
                         flag = true;
                         break;
                    };
                     tmp = tmp->next;
                /* code */
              };
              return flag;   
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
         
         bool  found = searching(head,4);
         if(found == true){
             cout<<"YES"<<endl;
         }else{
             cout<<"NO"<<endl;
         }
    
     return 0;
 }