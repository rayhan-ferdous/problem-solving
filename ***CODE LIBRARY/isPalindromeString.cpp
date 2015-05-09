bool isPalindrome(string test)
{
    if (test == string(test.rbegin(), test.rend()))
        return true;
    else
        return false;

}
