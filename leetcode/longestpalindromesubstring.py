#link: https://leetcode.com/problems/longest-palindromic-substring/submissions/



class Solution(object):
    def longestPalindrome(self, s):
        if(s[::-1]==s):
            return s
        current_palindrome =""
        for index in range(len(s)+1):
            for next_index in range(index+1,len(s)+1):
                word = s[index:next_index]
                if(word==word[::-1]):

                    if(len(current_palindrome)<len(word)):
                        current_palindrome = s[index:next_index]
                        
                        
        return current_palindrome
            
        