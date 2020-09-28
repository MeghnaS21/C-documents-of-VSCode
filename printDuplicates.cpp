#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printDuplicates( vector<string> words)
{
    vector<string> duplicates;
    sort(words.begin(), words.end());
    for(int i=1;i<words.size();i++)
       if(words[i-1]==words[i])
          duplicates.push_back(words[i]);
    
    int i=0;
    for(i=0;i<duplicates.size();i++)
       cout<<duplicates[i]<<endl;

    if(i==0)
       cout<<"NO DUPLICATES"<<endl;
}
int main()
{
    vector<string> words;
    cout<<"Enter the words"<<endl;
    for(int i=0;i<10;i++)
    {
        string input;
        cin>>input;
        words.push_back(input);
        
    }
    printDuplicates(words);
    return 0;
}