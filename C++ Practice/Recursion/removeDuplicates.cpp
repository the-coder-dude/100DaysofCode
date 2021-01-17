#include <iostream>
#include <string.h>
using namespace std;
 
char* removeAdjDup(char * s, int n)
{
    int i;
    int k = 0;
 
  
    for (i=1; i< n; i++)
    {
        
        if (s[i-1] != s[i])
            s[k++] = s[i-1];
 
        else
           
            while (s[i-1] == s[i])
                i++;
    }
 
 
    s[k++] = s[i-1];
    s[k] =  '\0';
 
   
    if (k != n)
        removeAdjDup(s, k);
 
   
    else return s;
}
 
int main()
{
    char str1[] = "abssbe";
    cout << removeAdjDup(str1, strlen(str1)) << endl;
 
    char str2[] = "adaaacad";
    cout << removeAdjDup(str2, strlen(str2)) << endl;
 
}