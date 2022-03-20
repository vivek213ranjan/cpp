Array Basics

Storage 
 -> Array are stored in continous memory locations
 a = [10,  20,  30,  40]
 add [100, 102, 104, 106] -> why different of 2 bytes in location array?

 We have considered Integer size as 2 bytes, hence the difference of 2.

 Question: Say we have 10 bytes of memory free but like this [free, free, free, used, used, used, free, free, free free, free, free, free free]
 Can we have array of size 10 stored? No - because it needs continuous space

Indexing

Array is 0-based indexing data structure.
a = 	[10,  20,  30,  40]
index = [ 0,   1,   2,   3]

we count as 0th element of array a is 10
we count as 1st element of array a is 20
we count as 2nd element of array a is 30
we count as 3rd element of array a is 40

Important:
first element is at index 0
Say array is of length 7

Q -> What will be the index of 7th element in array ar?
Q -> What will be the index of 5th element in array ar?

Declaration

How to declare array

int(data type) a(variablename)[](size); -> int a[];
Its mandatory for compiler to know the size of array at time of declaration; -> As it allocate space

int a[10]; //10 sized array 0-9
int a[]; //Invalid


Initialization
Declaration + Inserting values at same time.

int a[4] = {0, 3, 5, 7}; //Valid a[0] = 0, a[1] = 3, a[2] = 5, a[3] = 7
int a[] = {1,2,4}; //Valid as compiler can find the array by checking values length; length = 3 (0-2)

Say we need to create array of size 100 with all values as 0. How to create it?
int a[100] = {0}; // all 0-99 values as 0.


Getter

Indexes are always integer; (a['a'] //Invalid     a['a' - 'a'] -> Valid (ASCII values) 'a' -> 96, 'A' -> 65)
How to access value at particular index?

arrayname[index];
getting 3rd value -> a[2];
getting nth value -> a[n-1];
getting first value -> a[0];

Question: Say array is declared as:

int a[100] = {1};

cout<<a[100]; //output?

Setter

How to set value at particular index in array
Let say we have array as:

int ar[100] = {0};
say we need to set value of 2nd index as 75;

ar[2] = 75;

Just be sure that the index that you are accessing should be in range - (0 - array.length-1)


Q) Max Consecutive Ones
Q) Find numbers with even number of digits


Operation on Arrays:

Length

Say we have array as:
int ar[100]= {1};

We have sizeOf() function which will return the size of variable/data structure passed as parameter

int a = 2;

sizeOf(a); // Will return 2 or 4 depending on the compileer type/implementation

total size of array = length of array * size of data structure

length of array = total size of array / size of data structure

length of array = sizeOf(ar)/sizeOf(ar[0]);


Traversing  -> (Going through/visiting all elements in the array)

for(int i=0; i<length; ++i) {
	// operations on the element - ar[i]
}

Printing

int a[] = {1, 4, 7, 8, 10}; length  = 5
//print all the elements of the array

for(int i=0; i<length; ++i) { //Traversing
	cout<<ar[i]; //printing
}


Searching 

Given array ar[] of size n and element k, We need to check if k is present in the array:

int a[] = {1, 4, 7, 8, 10}; length  = 5

for(int i=0; i<length; ++i) { //Traversing the array
	if (a[i] == k) { //searching for element
		cout<<"k is found";
		break;
	}
}

Q) write a code to check how many times k appears in the list - Easy
Q) write a code to find the maximum/minimum value from the list - Easy-Medium
Q) Write a code to check if the list is sorted in ascending order - Medium
Q) Check whether given array is of mountain type - Medium-Hard
Q) Write a code to find the maximum length of increasing sequence - Hard
[1,2,3,4,3,1,6,8,0,1];
[i,i,i,i,d,d,i,i,d,i]; //4

As of now we were dealing with elements that are already present in the array, we were traversing the array and doing operations on elements;


Inplace array operation - Operations on same elements of the array - Changing elements in same array

convert an array to squared array (each element is squared)
for(int i=0; i<length; i++) {
	ar[i] = ar[i]*ar[i];
}

2D array

int ar[rowSize][colSize];

int a[10][20];

int ar[5][5];
ar = [
	0 -> [1,2,3,4,5],
	1 -> [5,6,2,1,7],
	2 -> [1,2,3,4,5],
	3 -> [1,2,3,4,5],
	4 -> [1,2,3,4,5]
]


---- YO 
