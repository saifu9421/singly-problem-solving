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
            if(head == NULL) return;
             Node *tmp = head;
              while (tmp != NULL)
              { 
                 cout<<tmp->val<<" ";
                  tmp = tmp->next; 
                /* code */
              };
               cout<<endl;       
     };

       int min_value(Node *head){
            if(head == NULL) return 0;
             Node *tmp = head;
               int x = INT_MAX;
                while (tmp != NULL)
                { 
                     if(x >  tmp->val){
                         x = tmp->val;
                     };
                      tmp = tmp->next;
                    /* code */
                };
                 return x;        
       };
        
       int max_value(Node *head){
            if(head == NULL) return 0;
             Node *tmp = head;
               int x = INT_MIN;
                while (tmp != NULL)
                { 
                     if(x <  tmp->val){
                         x = tmp->val;
                     };
                      tmp = tmp->next;
                    /* code */
                };
                 return x;        
       };
   void min_max(Node *head){
          int mn = INT_MAX;
           int mx = INT_MIN;
            Node *tmp =  head;
             while (tmp != NULL)
             {
                 if(mn > tmp->val){
                     mn = tmp->val;
                 };
                  if(mx < tmp->val){
                     mx = tmp->val;
                  };
                  tmp = tmp->next;
                /* code */
             }
                cout<<mn<<" "<<mx<<endl;  
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
         
        //   output(head);
        //  int minValue = min_value(head);
        //   int maxValue = max_value(head);

        //    cout<<minValue<<" "<<maxValue<<endl;
        min_max(head);
     return 0;
 }