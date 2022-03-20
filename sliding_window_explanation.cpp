Sliding Window

target = 102

ar = [5 1 2 100 8 7]

window_start = 0
i = 0
window_end = 0

sum_of_window = 5

i = 1
window_start = 0, 
window_end=1
ar = [5 1]
curSum = 5 + 1 = 6
6 < 102 -> fine

i = 2
window_start=0
window_end=2
ar=[5 1 2]
curSum = 6 + 2 = 8
8 < 102 -> fine


i=3
window_start = 0
window_end = 3
ar = [5 1 2 100]
curSum 8 + 100 = 108 - CurrentSum
target = 102
108 > 102 - Not fine
 - Remove element from beginning
 		- window_start =1
 		- window_end = 3
 		- ar [ 1 2 100]
 		- curSum = 108 - 5 (as we have removed 0th element) = 103
 		103 > 102 -- Not fine

 		- window_start=2
 		-window_end=3
 		- ar [2 100]
 		- cursum = 103 -1 (we have removed 1st index element) = 102
 		102  == 102
 		- This is good.


Code (Successfully Ran) ----- 
 
 
 vector<int> subarraySum(int arr[], int n, long long s)
    {
    	//Base case to handle for single element - return 1 , 1 as we need to return with 1 based indexing
        if (n ==1 && arr[0] == s) {
            vector<int> result2;
            result2.push_back(1);
            result2.push_back(1);
            return result2;
        }


        int window_start = 0;
    	int window_end = 0;
    	int curSum = arr[0];

    	int resultWindowStart = 0;
    	int resultWindowEnd = 0;
        
        for(int i = 1; i < n; ++i){
            
        	window_end = i;

        	//include current value in currentsum
        	curSum = curSum + arr[i];
            // cout<<curSum<<endl;
        	if(curSum > s) {
        		while(curSum > s) {
        			curSum -= arr[window_start];
        			window_start++;
        		}
        	}

        	if (curSum == s) {
        		resultWindowStart = window_start;
        		resultWindowEnd = window_end;
        		vector<int> result;
        	    result.push_back(resultWindowStart+1); //return with +1 as we need to return 1 based indexing
        	    result.push_back(resultWindowEnd+1); //return with +1 as we need to return 1 based indexing
        		return result;
        	}
        }

        //If we don't find any window with given sum, return [-1]
        vector<int> test(1, -1);
        return test;
    }
