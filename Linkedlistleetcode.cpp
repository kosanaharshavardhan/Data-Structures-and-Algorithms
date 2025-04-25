class MyLinkedList {
    private:
        MyLinkedList() {
            struct Node {
                int val;
                Node* next;
                Node(int value):val(value),next(nullptr){}
            };
            Node* head;
            int size;
            MyLinkedList(){
                head=NULL;
                size=0;
            }
        }
        
        int get(int index) {
            Node *p=head;
            if(index<0||index>size)
                return -1;
            else{
                int i=0;
                while(i!=index)
                    p=p->next;
                return p->val;
            }
        }
        
        void addAtHead(int val) {
            Node* newnode=new Node(val);
            if(head==NULL)
                head=newnode;
            else{
                newnode->next=head;
                head=newnode;
                size++;
            }
        }
        
        void addAtTail(int val) {
            Node* newnode=new Node(val);
            Node* p=head;
            while(p->next!=NULL){
                p=p->next;
            }
            p->next=newnode;
            size++;
        }
        
        void addAtIndex(int index, int val) {
            if(index<0||index>size)
                return;
            if(index==0){
                addAtHead(val);
            }
            if(index==size-1){
                addAtTail(val);
            }
            int i=0;
            Node*p =head;
            while(i!=index-1)
                p=p->next;
            Node* newnode=new Node(val);
            newnode->next=p->next;
            p->next=newnode;
            size++;
        }
        
        void deleteAtIndex(int index) {
            if(index<0||index>size)
                return;
            Node* p=head;
            Node* q=head;
            int i=0;
            while(i!=index){
                q=q->next;
                p=q;
            }
            p->next=q->next;
        }
    };
    
    /**
     * Your MyLinkedList object will be instantiated and called as such:
     * MyLinkedList* obj = new MyLinkedList();
     * int param_1 = obj->get(index);
     * obj->addAtHead(val);
     * obj->addAtTail(val);
     * obj->addAtIndex(index,val);
     * obj->deleteAtIndex(index);
     */