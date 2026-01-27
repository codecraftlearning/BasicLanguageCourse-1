s = "madame"


def ispalindrome(s):
    ispalindrome = True
    for i in range(len(s)//2):
        if s[i] != s[len(s) - 1 - i]:
            ispalindrome = False
            break

    if ispalindrome:
        print("Palindrome")
    else:
        print("Not Palindrome")


def checkPalindrome(s: str) -> bool:
    for i in range(len(s)//2):
        if s[i] != s[len(s) - 1 - i]:
            return False
    return True


ispalindrome("madame")

if checkPalindrome("madam"):
    print("Palindrome")
else:
    print("Not Palindrome")
