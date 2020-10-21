#include "List.hh"

List::List()
{
}

List::~List()
{
}

void List::AddFront(Book*)
{

}
void List::AddBack(Book*)
{

}
void List::RemoveFront()
{

}
void List::RemoveBack()
{

}
Book* List::GetFront() const
{
    return head->book;
}
Book* List::GetBack() const
{
    return tail->book;
}
bool List::IsEmpty() const
{
    return !head;
}
void List::PrintFront()
{
    if(IsEmpty())
}
void List::PrintBack()
{

}