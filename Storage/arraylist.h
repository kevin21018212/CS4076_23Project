//TEMPLATE CLASSES AND TEMPLATE FUNCTION
//interpritation of arraylist class


#ifndef ARRAYLIST_H
#define ARRAYLIST_H


#include <exception>
template<class T>
class ArrayList
{
private:
    //defaut info
   static const int DEFAULT_CAPACITY = 40;
   T items[DEFAULT_CAPACITY + 1];
   int itemCount=0;
   int maxSize;
public:
   ArrayList();
   bool isEmpty() const;
   int getLength() const;
   void insert(int newindex, const T& newItem);
   void remove(int index);
   void clear();
   T getEntry(int index);
   void setEntry(int index, const T& newItem);
   T replace(int index, const T& newItem);


};


//USER DEFINED ERRORS
//custom error in case item is tried to place out of bound not needed on return type void
class outOfBoundsException : public std::exception
{
public:
    const char * what () const throw ()
        {
            return "Tried to add item into out of bounds area of arraylist";
        }
};


template<class T>
ArrayList<T>::ArrayList() : itemCount(0), maxSize(DEFAULT_CAPACITY)
{
}

//checks if arraylist is empty
template<class T>
bool ArrayList<T>::isEmpty() const
{
  if(itemCount == 0){
      return true;
  }
  return false;
}

//get arraylist size
template<class T>
int ArrayList<T>::getLength() const
{
   return itemCount;
}


//gets enetry at a index
template<class T>
T ArrayList<T>::getEntry(int index)
{

   bool inBounds = (index >= 1) && (index <= itemCount);
   if (inBounds){
      return items[index];
   }

  throw outOfBoundsException();
}



//inserts new item at index
template<class T>
void ArrayList<T>::insert(int newindex, const T& newItem)
{

   bool inBounds = (newindex >= 1) && (newindex <= itemCount + 1)
                       && (itemCount < maxSize);
   if (inBounds)
   {
   //shifts enterys over
      for (int pos = itemCount; pos >= newindex; pos--)
         items[pos] = items[pos - 1];

     //insert
      items[newindex] = newItem;
      itemCount++;
   }

}


//removes item at index if there is a item to be removed
template<class T>
void ArrayList<T>::remove(int index)
{
   bool inBounds = (index >= 1) && (index <= itemCount);
   if (inBounds)
   {
    //shiftright
      for (int pos = index; pos < itemCount; pos++)
         items[pos] = items[pos + 1];
      itemCount--;
   }

 throw outOfBoundsException();
}

//Replaces item at the index throws error if out of bounds
template<class T>
T ArrayList<T>::replace(int index, const T& newItem)

{
//makes sure item is in arraylist bounds
   bool inBounds = (index >= 1) && (index <= itemCount);
   if (inBounds)
   {
       //swap
      T oldItem = items[index];
      items[index] = newItem;
      return oldItem;
   }
 throw outOfBoundsException();
}


//DESTRUCTORS
//works as a destructor for arraylist called in other classes
template<class T>
void ArrayList<T>::clear()
{
   itemCount = 0;
   delete items;
}



#endif // ARRAYLIST_H
