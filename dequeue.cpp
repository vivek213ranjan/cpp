Deque

Data structure -> Doubly ended queue

deque (usually pronounced like "deck"). 

Can be expanded or contracted on both ends (either its front or its back).

Eg: Carton with both sides open

Constraints:
1) Element can only be inserted / removed from top


Operation
1) front() -> to get the front element from the deque
2) back() -> to get the back element from the deque


3) push_front() -> insert the elment at the start of the deque
4) pop_front() -> remove element from the beginning of the deque

5) push_back() -> add element at the end of the deque
6) pop_back() -> delete last element from the queue

7) empty() -> check whether deque is empty
8) size() -> return the size of the deque


q = [ ]
	     ^
	     |
	 front,rear


Empty deque, front = not defined, back = not defined
------------
           
------------

push_back(q, 4) front = 4, back = 4

------------
         4  
------------

push_front(q, 3), front = 3, back = 4

-------------
        3   4  
-------------

push_back(q, 2), front = 3, back = 2

--------------
     3   4   2
--------------


pop_back(q), front = 3, back = 4

---------------
  		 3   4  
---------------


push_front(q, 6), front = 6, back = 4

---------------
     6   3   4
---------------

q = [ 6  3   4]
      ^      ^
      |      |
    front   back


