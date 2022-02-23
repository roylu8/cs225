/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

#include <iostream>
template <class T>
List<T>::List()
{
  // @TODO: graded in MP3.1
  head_ = NULL;
  tail_ = NULL;
  length_ = 0;
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const
{
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const
{
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(NULL);
}

/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy()
{
  /// @todo Graded in MP3.1
  ListNode *temp;
  ListNode *curr = head_;

  while (curr != NULL)
  {
    temp = curr->next;
    delete curr;
    curr = temp;
  }

  head_ = NULL;
  tail_ = NULL;
  length_ = 0;
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const &ndata)
{
  /// @todo Graded in MP3.1
  ListNode *newNode = new ListNode(ndata);
  newNode->next = head_;
  newNode->prev = NULL;

  if (tail_ == NULL)
  {
    tail_ = newNode;
  }
  if (head_ != NULL)
  {
    head_->prev = newNode;
  }

  head_ = newNode;

  length_++;
}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T &ndata)
{
  /// @todo Graded in MP3.1
  ListNode *newNode = new ListNode(ndata);
  if (head_ == NULL && tail_ == NULL)
  {
    head_ = newNode;
  }
  if (tail_ != NULL)
  {
    tail_->next = newNode;
    newNode->next = NULL;
    newNode->prev = tail_;
  }

  tail_ = newNode;
  length_++;
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode *List<T>::split(ListNode *start, int splitPoint)
{
  /// @todo Graded in MP3.1

  if (start == NULL || start->next == NULL)
  {
    return start;
  }
  if (splitPoint == 0 || splitPoint >= length_)
  {
    return start;
  }
  ListNode *curr = start;

  for (int i = 0; curr != NULL && i < splitPoint; i++)
  {
    curr = curr->next;
    if (curr == NULL)
    {
      return curr;
    }
  }

  curr->prev->next = NULL;
  tail_ = curr->prev;
  curr->prev = NULL;

  return curr;
}

/**
 * Modifies List using the rules for a TripleRotate.
 *
 * This function will to a wrapped rotation to the left on every three
 * elements in the list starting for the first three elements. If the
 * end of the list has a set of 1 or 2 elements, no rotation all be done
 * on the last 1 or 2 elements.
 *
 * You may NOT allocate ANY new ListNodes!
 */
template <typename T>
void List<T>::tripleRotate()
{
  // @todo Graded in MP3.1
  int sets = length_ / 3;
  ListNode *curr = head_;
  if (sets > 0)
  {
    head_ = head_->next;
    head_->prev = NULL;
  }
  for (int i = 0; i < sets; i++)
  {
    if (curr->prev != NULL)
    {
      curr->prev->next = curr->next;
      curr->next->prev = curr->prev;
    }
    else
    {
      curr->next->prev = NULL;
    }
    ListNode *temp = curr->next->next->next;
    curr->prev = curr->next->next;
    curr->prev->next = curr;
    if (temp == NULL)
    {
      curr->next = NULL;
      tail_ = curr;
    }
    else
    {
      curr->next = temp;
      curr->next->prev = curr;
    }
    curr = curr->next;
  }
}

/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse()
{
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *&startPoint, ListNode *&endPoint)
{
  /// @todo Graded in MP3.2
  if (startPoint == endPoint || startPoint == NULL || endPoint == NULL)
  {
    return;
  }
  ListNode *curr = startPoint;
  ListNode *endd = endPoint->next;
  ListNode *prevNode = startPoint->prev;
  ListNode *temp;
  while (curr != endd)
  {
    temp = curr->prev;
    curr->prev = curr->next;
    curr->next = temp;
    curr = curr->prev;
  }

  if (prevNode != NULL)
  {
    prevNode->next = endPoint;
    endPoint->prev = prevNode;
  }
  else
  {
    endPoint->prev = NULL;
  }
  if (endd != NULL)
  {
    endd->prev = startPoint;
    startPoint->next = endd;
  }
  else
  {
    startPoint->next = NULL;
  }

  temp = startPoint;
  startPoint = endPoint;
  endPoint = temp;

  if (head_ == endPoint)
  {
    head_ = startPoint;
  }
  if (tail_ == startPoint)
  {
    tail_ = endPoint;
  }
}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n)
{
  /// @todo Graded in MP3.2
  if (n <= 1)
  {
    return;
  }
  if (n >= length_)
  {
    reverse();
    return;
  }

  ListNode *curr = head_;
  ListNode *endd = head_;
  bool brokeBoi = false;

  while (curr != NULL)
  {
    endd = curr;
    for (int i = 0; i < n - 1; i++)
    {
      if (curr->next == NULL)
      {
        reverse(endd, curr);
        brokeBoi = true;
        break;
      }
      curr = curr->next;
    }
    if (brokeBoi)
    {
      break;
    }
    reverse(endd, curr);
    curr = curr->next;
  }
}

/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> &otherList)
{
  // set up the current list
  head_ = merge(head_, otherList.head_);
  tail_ = head_;

  // make sure there is a node in the new list
  if (tail_ != NULL)
  {
    while (tail_->next != NULL)
      tail_ = tail_->next;
  }
  length_ = length_ + otherList.length_;

  // empty out the parameter list
  otherList.head_ = NULL;
  otherList.tail_ = NULL;
  otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode *List<T>::merge(ListNode *first, ListNode *second)
{
  /// @todo Graded in MP3.2
  if (first == NULL)
  {
    if (second == NULL)
    {
      return NULL;
    }
    return second;
  }
  if (second == NULL)
  {
    return first;
  }

  ListNode *curr, *start;

  if (first->data < second->data)
  {
    curr = first;
    first = first->next;
  }
  else
  {
    curr = second;
    second = second->next;
  }
  start = curr;
  while (1)
  {
    if (first == NULL)
    {
      curr->next = second;
      second->prev = curr;
      second = second->next;
      curr = curr->next;
      break;
    }
    else if (second == NULL)
    {
      curr->next = first;
      first->prev = curr;
      first = first->next;
      curr = curr->next;
      break;
    }
    else if (first->data < second->data)
    {
      curr->next = first;
      first->prev = first;
      first = first->next;
    }
    else
    {
      curr->next = second;
      second->prev = curr;
      second = second->next;
    }
    curr = curr->next;
  }
  return start;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode *List<T>::mergesort(ListNode *start, int chainLength)
{
  /// @todo Graded in MP3.2
  ListNode *finalChain, *temp;
  if (chainLength == 1)
  {
    return start;
  }
  else
  {
    temp = start;
    for (int i = 0; i < chainLength / 2; i++)
    {
      temp = temp->next;
    }
    if (temp->prev != NULL)
    {
      temp->prev->next = NULL;
      temp->prev = NULL;
    }
    start = mergesort(start, chainLength / 2);
    temp = mergesort(temp, chainLength - chainLength / 2);
    finalChain = merge(start, temp);
  }
  return finalChain;
}
