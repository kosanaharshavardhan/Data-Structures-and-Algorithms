
class MyLinkedList {
    public:
        class Node{
           public:
                int val;
                Node* next;
                Node(int val){
                    this->val=val;
                    this->next=NULL;
                }
        };
        Node* head;
        int size;
        MyLinkedList() {
            head=NULL;
            size=0;
        }
        
        int get(int index) {
            if(index<0||index>=size) return -1;
            int i=0;
            Node* current=head;
            while(i!=index){
                current=current->next;
                i++;
            }
            return current->val;
        }
        
        void addAtHead(int val) {
            Node* newNode=new Node(val);
            if(head==NULL){
                head=newNode;
            }
            else{
                newNode->next=head;
                head=newNode;
            }
            size++;
        }
        
        void addAtTail(int val) {
            Node* newNode=new Node(val);
            if(head==NULL){
                head=newNode;
            }
            else{
                Node* temp=head;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=newNode;
            }
            size++;
        }
        
        void addAtIndex(int index, int val) {
            if(index<0||index>size) return;
            if(index==0){
                addAtHead(val);
                return;
            }
            if(index==size){
                addAtTail(val);
                return;
            }
            int i=0;
            Node* temp=head;
            while(i!=index-1){
                temp=temp->next;
                i++;
            }
            Node* newNode=new Node(val);
            newNode->next=temp->next;
            temp->next=newNode;
            size++;
        }
        
        void deleteAtIndex(int index) {
            if(index<0||index>=size)    return;
            if(head==NULL)  return;
            if(index==0){
                Node* temp=head;
                head=head->next;
                temp->next=NULL;
                delete temp;
                size--;
                return;
            }
            if(index==size-1){
                Node* tempFirst=head;
                Node* tempSecond=head;
                while(tempSecond->next!=NULL){
                    tempFirst=tempSecond;
                    tempSecond=tempSecond->next;
                }
                tempFirst->next=NULL;
                delete tempSecond;
                size--;
                
            }
            else{
                Node* tempFirst=head;
                Node* tempSecond=head;
                int i=0;
                while(i!=index){
                    tempFirst=tempSecond;
                    tempSecond=tempSecond->next;
                    i++;
                }
                tempFirst->next=tempSecond->next;
                tempSecond->next=NULL;
                delete tempSecond;
                size--;
            }
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