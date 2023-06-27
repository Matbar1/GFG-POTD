// solution:
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        set<int> myset;                 // this set will store all elements
        // elements appearing more than once get stored only once in set
        set<int>::iterator it;
        
        while(head1)
        {
            myset.insert(head1->data);  // inserting all elements in a set
            head1=head1->next;
        }
        
        while(head2)
        {
            myset.insert(head2->data);  // inserting all elements in a set
            head2 = head2->next;
        }
        
        it=myset.begin();               // it points to first element of set
        struct Node* union_head = new Node(*it);   // head of union list
        struct Node* union_tail = union_head;      // tail of union list
        
        for( ++it  ;  it!=myset.end()  ;  it++ )
        {
            union_tail->next = new Node(*it);      // adding all elements
            union_tail = union_tail->next;
        }
        
        return union_head;
    }
};