Introduction:

Nothing but array of characters.
   
Ways to initialize

string s0;                                       // s0 = “”
string s1(“Hello”);                               // s1 = “Hello”
string s2 (s1);                                  // s2 = “Hello”
string s3 (s1, 1, 2);                            // s3 = “el” (str, index of start, no of characters to pick from str)
string s4 ("Hello World", 5);                     // s4 = “Hello” // first 5 characters from given string
string s5 (5, ‘*’);                              // s5 = “*****” //create a string of length n, with char "*"
string s6 (s1.begin(), s1.begin()+3);           // s6 = "Hel"

Here are some member functions:

append(): Inserts additional characters at the end of the string (can also be done using ‘+’ or ‘+=’ operator). Its time complexity is O(N) where N is the size of the new string.

begin(): Returns an iterator pointing to the first character. Its time complexity is O(1).
end(): Returns an iterator pointing to a position which is next to the last character. Its time complexity is O(1).

clear(): Erases all the contents of the string and assign an empty string (“”) of length zero. Its time complexity is O(1).

empty(): Returns a boolean value, true if the string is empty and false if the string is not empty. Its time complexity is O(1).

erase(): Deletes a substring of the string. Its time complexity is O(N) where N is the size of the new string.

find(str): Searches the string and returns the first occurrence of the parameter in the string. Its time complexity is O(N) where N is the size of the string.

insert(posn): Inserts additional characters into the string at a particular position. Its time complexity is O(N) where N is the size of the new string.

length(): Returns the length of the string. Its time complexity is O(1).

resize(): Resize the string to the new length which can be less than or greater than the current length. Its time complexity is O(N) where N is 
the size of the new string.

size(): Returns the length of the string. Its time complexity is O(1).

substr(): Returns a string which is the copy of the substring. Its time complexity is O(N) where N is the size of the substring.


Implementation:

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    string s, s1;
    s = "HELLO";
    s1 = "HELLO";
    
    s.append(" WORLD!");
    cout << s << endl;
    
    if(s.compare(s1) == 0)
        cout << s << " is equal to " << s1 << endl;
    else
        cout << s << " is not equal to " << s1 << endl;
    return 0;
}
Output:

HELLO is equal to HELLO
HELLO WORLD!
HELLO WORLD!
HELLO WORLD! is not equal to HELLO


https://www.hackerrank.com/challenges/strong-password/problem?isFullScreen=true


bool isPasswordStrong(String s) {
    bool isNumDigitPresent = false;
    bool isUpperDigitPresent = false;
    bool isLowerDigitPresent = false;
    bool isSpecialCharacterPresent = false;
    bool isLengthGreaterThanSix = false;

    int len = s.length();
    for(int i=0; i<length; i++) {
        isNumDigitPresent = isNumDigitPresent(s[i]);
        isUpperDigitPresent = isUpperDigitPresent(s[i]);
        isLowerDigitPresent = isLowerDigitPresent(s[i]);
        isSpecialCharacterPresent = isSpecialCharacterPresent(s[i]);
        isLengthGreaterThanSix = isLengthGreaterThanSix(s[i]);
    }

    if (isNumDigitPresent && isUpperDigitPresent && isLowerDigitPresent && isSpecialCharacterPresent && isLengthGreaterThanSix) {
        return true;
    }

    return false;
}
