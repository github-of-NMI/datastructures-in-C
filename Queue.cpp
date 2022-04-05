#include <iostream>


struct Node{
    int64_t data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

bool is_empty(){
    if(tail==nullptr)
        return true;
    else
        return false;
}

void enqueue(int64_t data){

    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = nullptr;


    if(is_empty())
        head = node;
    else
        tail->next = node;

    tail = node;


}

void dequeue(){
    if(is_empty())
    {
        std::cout<<"THE QUEUE IS EMPTY"<<std::endl;
    }else{
        Node* temp_head = head->next;
        free(head);
        head = temp_head;
    }
}

int64_t peek(){
    if(is_empty()){
        std::cout<<"THE QUEUE IS EMPTY";
        return 0;
    }
    else
        return head->data;
}

void print_entire_queue(){

    if(is_empty())
    {
        std::cout<<"THE QUEUE IS EMPTY"<<std::endl;
    }
    else
    {
        Node* temp_head = head;
        uint64_t count=0;
        while(temp_head != nullptr){
            std::cout<<"id:"<<count<<" value:"<<temp_head->data<<"\n";
            temp_head=temp_head->next;
            count++;
        }
    }
}

int64_t queue_length(){
    int64_t count=0;
    Node* temp_head = head;
    while(temp_head!=nullptr){
        count++;
        temp_head = temp_head->next;
    }
    return count;
}


int main()
{
    std::cout<<"is_empty = "<<is_empty()<<"\n";
    enqueue(0);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    std::cout<<peek()<<"\n";
    dequeue();
    std::cout<<peek()<<"\n";
    print_entire_queue();
    std::cout<<"number of nodes:"<<queue_length()<<"\n";



    std::cout << "Hello world!" << std::endl;
    return 0;
}
