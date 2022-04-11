Binary Search

"Search target in a search space"

target      search space

word         dictionary (F) / newspaper
contact      phonebook(F) / diary

input sorted/arranged

In a dictionary, we are at a page displaying bharat in the page

remove irrelevant search space

to find aditi -> discard right array
to find madhur -> discard left array


Ascending order

 ----------------  8 -------------------


 if 14, 14 > 8 --- search in right subarray (discard left)

 Q) which element is best to start comparing with?
 first/last/mid/random?
 mid -> why? (Discarding the half of the array which is the max we can discard)

 in case we pick 1/3 rd element
 first(1/3rd size)  +  (2/3rd size)
 worst  -> we will discard array of less size -> result in more number of iterations


 AR = 1 3 5 7 9 10  11  13  15   17  19  30  35  40
 i  = 0 1 2 3 4  5  6   7    8   9   10  11  12  13

 target = 17

 First approach = linear search TC - O(n) SC - O(1)

 BInary search => use property that the array is sorted.. 

 search space = L=0 R=13
 M = L+R / 2;
 Mid = 6
 a[6] = 11 < 17(taqrget) => go right
 
 L = mid + 1 = 7
 L = 7 R = 13, mid = 10 (7+13)/2
 a[10] = 19 > 17 => go left
 
 R = mid-1 = 9
 L = 7 mid = (7+9)/2 = 16/2 = 8
 a[8] = 15 < 17 => go right
 
 L = mid+1 = 9, R=9, mid = 9
 a[9] = 17 == 17 ==> found
 
 In 4 iteration we have found 17 !!!

TC ->

N -> N/2 -> N/4 -> N/8 ------------- -> ksteps N/2^K

search space of kth step is 1 element = N/2^k = 1

N = 2^K
 taking log on both sides

 K = log2(N)

 TC = log2 (N)
 SC = O(1)


 Code: (Iterative)

class Solution {
	public:
    int search(vector<int>& ar, int target) {
         int L = 0;
         int R = ar.size() - 1;
         while (L <= R) {
            int mid = (L+R) / 2 ;
            if (ar[mid] == target) {
                return mid;
            }
            if (ar [mid] < target) {
                L = mid +1;
            }
            else {
                R = mid -1;
            }
         }
         return -1;
    }
};

Code (Recursive)

class Solution {
public:
    int binarySearch(vector<int>& a, int L, int R, int numberToFind){
         if(L > R) return -1;
         int mid = (L + R) / 2;
         if(a[mid] == numberToFind){
            return mid;
         }
         if(a[mid] > numberToFind){
            return binarySearch(a, L, mid - 1, numberToFind);
         }
         else{
            return binarySearch(a, mid + 1, R, numberToFind);
         }
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums , 0, nums.size() - 1, target);
    }
};



Mid = (L + R) /2 => overflow
Mid = L + (R-L)/2


a= []
When wedeal with arrays -> we are bound to have indexes till 10^6
L = 10^6 R = 10^6 
L + R = 2*10^6 (which is under integer range)

but it is not mandatory that we will apply binary search in arrays only. 
Our search space can also be range of numbers till 10^9

L <= 2*10^9
R <= 2*10^9

L+R <= 4*10^9 - Which is not in Integer range (hence it will overflow)

Integer = 2^31 - 1 ~2.x*10^9

mid = L + (R-L)/2 -> Refer screenshot/image





Rotated array - Search

Array -  60  70  120  10  15  20   25  30  35
Index -  0   1    2    3   4   5   6   7    8


target = 15( index 4 )

Approach
1) Linear search O(n)
2) sorting O(nlogn) + Bsearch O(logn) => O(nlogn) => worst than linear search
3) exponential binary search - more number of iterations 

4) Find the pivot and search accordingly => O(logn) -> why calculate pivot?? it will increase extra iteration

5) Without pivot approach below:

left = 0
right = n-1
mid = (L+R)/2

if (ar[mid] == target) { return mid; }

Q1) Where is mid (in P1 or P2)

if (ar[0] > ar[mid]) // mid is in second part (P2)
	
	Q2) check if target lies in 0-mid-1 or mid+1 to right

		0 - mid-1 => (P1 + P2start to mid-1)
			
		if (ar[0] <= target || target < ar[mid]) // Condition 1: element is in P1      Condition 2: element is in P2 start to mid-1

			right = mid -1
		else 
			left = mid + 1


else // mid is in first part (P1)
	// mid, target, 0th
	if (target >= ar[mid] || target < ar[0]) // Condition1: P1 right to mid Condition 2 - P2
		left = mid + 1
	else 
		right mid - 1



return -1




Q) find the index from where array is started // find the minimum element in the array


int findMin(int arr[], int n)
    {
        //complete the function here
        int start = 0;
        int end = arr.length - 1;
        
        //already sorted
        if (arr[start] < arr[end]) { return arr[start]; }
        
        while(start < end) {
            int mid = start + (end-start)/2;
            
            if (arr[mid] <  arr[mid-1]) {
                return arr[mid];
            } else if (arr[mid] > arr[0]) {
                start = mid + 1;
            } else {
                end = mid-1;
            }
        }
        return arr[start];
    }
mid = L + (R-L)/2 -> Refer this
	
	L ............. R 
	...........................L + R

........L....(R-L)/2....R

