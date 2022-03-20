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
