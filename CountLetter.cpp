#include<iostream>
#include<string>
#include<map>

using namespace std;



int main()
{
    string s;
    cin >> s;

    map<char, int> freq;
    
    for (char c : s)
    {
        freq[c]++;
    }

    for (auto it : freq)
    {
        cout << it.first << " : " << it.second << endl;
    }
    
<<<<<<< HEAD
=======
    

>>>>>>> 1b6bcbe (first commit)
    return 0;
}