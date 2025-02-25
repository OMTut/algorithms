/**********************************************************************
 * A phrase is a palindrome if, after converting all uppercase letters into 
 * lowercase letters and removing all non-alphanumeric characters, it reads the
 *  same forward and backward. Alphanumeric characters include letters and 
 * numbers.
 * 
 * Given a string s, return true if it is a palindrome, or false otherwise.
 * Example 1:
 * Input: s = "A man, a plan, a canal: Panama"
 * Output: trueExplanation: "amanaplanacanalpanama" is a palindrome.
 * Example 2:
 * Input: s = "race a car"
 * Output: false
 * Explanation: "raceacar" is not a palindrome.
 * Example 3:
 * Input: s = " "
 * Output: true
 * Explanation: s is an empty string "" after removing non-alphanumeric 
 * characters.
 * Since an empty string reads the same forward and backward, it is a palindrome.
 */
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;
    while (left < right) {
        while (left < right && !isalnum(s[left])) {
            left += 1;
        }
        while (left < right && !isalnum(s[right])) {
            right -= 1;
        }
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left += 1;
        right -= 1;
    }
    return true;
}