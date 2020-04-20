#include <iostream>
#include <vector>
#include <string>


using namespace std;

vector<int> generatePiTabele(string s)
{
    vector<int> PiTable(s.size(),0);

    int i=1,j=0;

    while (i<s.size())  
    {
        if(s[j]==s[i])
        {
            PiTable[i]=j+1;
            j++;
            i++;
        }
        else
        {
           if(j>0)  j=PiTable[j-1];
           else i++;
        }
        
    }
    return PiTable;
    
}

int kmpSearch(string prase,string word)
{       
    vector<int> PiTable=generatePiTabele(word);

    int i=0,j=0;
    int count=0;

    while (i<prase.size())
    {
        if(prase[i]==word[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j>0) j=PiTable[j-1];
            else i++;
        }

        if(j==word.size())
        {
            count++;
            j=0;
        }
        
    }

    return count;
    

}


int main()
{
    string s1,s2;

    cin>>s1>>s2;

    cout<<kmpSearch(s1,s2);

    return 0;
}