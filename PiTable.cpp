#include <iostream>
#include <vector>
#include <string>


using namespace std;

void generatePiTabele(string s)
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
    for(int i:PiTable)
        cout<<i<<" ";
    
}

int main()
{
    string s;
    cin>>s;

    generatePiTabele(s);

    return 0;
}