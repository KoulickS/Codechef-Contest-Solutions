/* Taken from https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/*/


#include <bits/stdc++.h> 
using namespace std; 
#define NO_OF_CHARS 256 
  
int min(int a, int b); 
  
int longestUniqueSubsttr(char* str) 
{ 
    int n = strlen(str); 
    int cur_len = 1; // lenght of current substring 
    int max_len = 1; // result 
    int prev_index; // previous index 
    int i; 
    int* visited = new int[sizeof(int) * NO_OF_CHARS]; 
  
    /* Initialize the visited array as -1, -1 is used to  
    indicate that character has not been visited yet. */
    for (i = 0; i < NO_OF_CHARS; i++) 
        visited[i] = -1; 
  
    /* Mark first character as visited by storing the index  
    of first character in visited array. */
    visited[str[0]] = 0; 
  
    /* Start from the second character. First character is  
    already processed (cur_len and max_len are initialized  
    as 1, and visited[str[0]] is set */
    for (i = 1; i < n; i++) { 
        prev_index = visited[str[i]]; 
  
        /* If the currentt character is not present in the  
        already processed substring or it is not part of  
        the current NRCS, then do cur_len++ */
        if (prev_index == -1 || i - cur_len > prev_index) 
            cur_len++; 
  
        /* If the current character is present in currently  
        considered NRCS, then update NRCS to start from  
        the next character of previous instance. */
        else { 
            /* Also, when we are changing the NRCS, we  
            should also check whether length of the  
            previous NRCS was greater than max_len or  
            not.*/
            if (cur_len > max_len) 
                max_len = cur_len; 
  
            cur_len = i - prev_index; 
        } 
  
        // update the index of current character 
        visited[str[i]] = i; 
    } 
  
    // Compare the length of last NRCS with max_len and 
    // update max_len if needed 
    if (cur_len > max_len) 
        max_len = cur_len; 
  
    free(visited); // free memory allocated for visited 
    return max_len; 
} 
  
/* A utility function to get the minimum of two integers */
int min(int a, int b) 
{ 
    return (a > b) ? b : a; 
} 

int longestUniqueSubsttr1(char* str1) 
{ 
    int n = strlen(str1); 
    int cur_len = 1; // lenght of current substring 
    int max_len = 1; // result 
    int prev_index; // previous index 
    int i; 
    int* visited = new int[sizeof(int) * NO_OF_CHARS]; 
  
    /* Initialize the visited array as -1, -1 is used to  
    indicate that character has not been visited yet. */
    for (i = 0; i < NO_OF_CHARS; i++) 
        visited[i] = -1; 
  
    /* Mark first character as visited by storing the index  
    of first character in visited array. */
    visited[str1[0]] = 0; 
  
    /* Start from the second character. First character is  
    already processed (cur_len and max_len are initialized  
    as 1, and visited[str[0]] is set */
    for (i = 1; i < n; i++) { 
        prev_index = visited[str1[i]]; 
  
        /* If the currentt character is not present in the  
        already processed substring or it is not part of  
        the current NRCS, then do cur_len++ */
        if (prev_index == -1 || i - cur_len > prev_index) 
            cur_len++; 
  
        /* If the current character is present in currently  
        considered NRCS, then update NRCS to start from  
        the next character of previous instance. */
        else { 
            /* Also, when we are changing the NRCS, we  
            should also check whether length of the  
            previous NRCS was greater than max_len or  
            not.*/
            if (cur_len > max_len) 
                max_len = cur_len; 
  
            cur_len = i - prev_index; 
        } 
  
        // update the index of current character 
        visited[str1[i]] = i; 
    } 
  
    // Compare the length of last NRCS with max_len and 
    // update max_len if needed 
    if (cur_len > max_len) 
        max_len = cur_len; 
  
    free(visited); // free memory allocated for visited 
    return max_len; 
} 
  
/* A utility function to get the minimum of two integers */
  
/* Driver code*/
int main() 
{ 
    int T;
    cin>>T;
    while(T--){
        int x;
        cin>>x;
    char str[100000], str1[100000]; 
    cin>>str>>str1;
    int len = longestUniqueSubsttr(str);
    int len1= longestUniqueSubsttr(str1);
    if(len>len1){
        cout<<"AG"<<endl;
    }
    else{
        cout<<"AB"<<endl;
      }
    }
    return 0; 

} 