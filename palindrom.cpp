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
     
     bool palindrom(Node *head){
           vector<int> v;
            Node *tmp2 = head;
           bool flag = true;
                if(head == NULL) return false;
                 Node *tmp = head;
                  while (tmp != NULL)
                  { 
                     v.push_back(tmp->val);
                     tmp = tmp->next;
                    /* code */
                  };
                  reverse(v.begin(),v.end());
               vector<int> :: iterator it;
                  for(it = v.begin() ; it != v.end();it++){
                       if(*it != tmp2->val){
                         flag = false;
                         break;
                       } ;
                        tmp2 = tmp2->next;
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
          if(palindrom(head) == true){
               cout<<"YES"<<endl;
          }else cout<<"NO"<<endl;
     return 0;
 }