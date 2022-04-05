#include <iostream>


struct Node{
    int64_t data;
    Node* next;
};

Node* head=nullptr;

bool is_empty(){
    if(head==nullptr)
        return true;
    else
        return false;
}

void push(int64_t data){

    struct Node* node = (struct Node*)malloc(sizeof(struct Node));//declare a "node" pointer to a memory section the size of the Node
    node->data = data;

    node->next = head;
    head=node;
}

void pop(){

    if(head->next==nullptr || head==nullptr){
        std::cout<<"tried to pop empty stack (ERRcode:idk_do_i_want_to_spend_my_time_on_this?)"<<std::endl;
    }
    else
    {
        struct Node* temp_head;
        temp_head=head;

        head=head->next;

        free(temp_head);
    }
}

int64_t peek(){
    return head->data;
}

void print_stack(){

    if(is_empty())
    {
        std::cout<<"THE STACK IS EMPTY"<<std::endl;
    }
    else
    {
        Node* temp_head;
        temp_head=head;
        int64_t count=0;
        while(temp_head!=nullptr){
            count++;
            std::cout<<temp_head->data<<"\n";
            temp_head=temp_head->next;
        }
    std::cout<<"stack_size="<<count<<"\n"<<std::endl;
    }
}

int64_t stack_size_in_nodes(){
    int64_t count=0;
    Node* temp_head;
    temp_head=head;
    while(temp_head!=nullptr){
        count++;
        temp_head=temp_head->next;
    }
    return count;
}


int main()
{


    std::cout << "Hello world!" << std::endl;
    return 0;
}
