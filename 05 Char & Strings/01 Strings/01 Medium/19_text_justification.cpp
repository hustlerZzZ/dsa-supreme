#include <bits/stdc++.h>
using namespace std;

// L.C : 68. Text Justification
// T.C : O(n^2)
// S.C : O(1)
vector<string> fullJustify(vector<string> &words, int maxWidth)
{
    // 1. Spaces added b/w words atleast one space or more spaces but cannot we more than max width
    // 2. last line or single word in line -> keep it left justified
    // 3. Other than that full justified
    // 4. No leading or trainling spaces

    vector<string> ans;
    vector<string> currLine;
    int currLineChars = 0;

    for (int i = 0; i < words.size(); i++)
    {
        string &currWord = words[i];
        int currLineNeededSpace = currLine.size(); // single space after word

        if (currLineChars + currLineNeededSpace + currWord.size() > maxWidth)
        {
            // exceeding ? means, curr line withoout taking currword is complete
            int extraSpace = maxWidth - currLineChars;
            int spacesGoInBetweenWords = extraSpace / max(1, (int)(currLine.size() - 1));
            int remainder = extraSpace % max(1, (int)(currLine.size() - 1));

            // We dont need spaces after last word
            for (int j = 0; j < currLine.size() - 1; j++)
            {
                // add even spaces
                for (int k = 0; k < spacesGoInBetweenWords; k++)
                    currLine[j] += " ";

                if (remainder > 0)
                {
                    currLine[j] += " ";
                    remainder--;
                }
            }

            if (currLine.size() == 1)
                while (extraSpace--)
                    currLine[0] += " ";

            string finalLine = "";
            for (string wordWithSpaces : currLine)
                finalLine += wordWithSpaces;

            ans.push_back(finalLine);
            currLine.clear();
            currLineChars = 0;
        }

        currLine.push_back(currWord);     // pushing Curr Word
        currLineChars += currWord.size(); // not including spaces
    }

    // lets take care of last line
    // add 1 space b/w words
    string finalLine = "";
    for (auto word : currLine)
        finalLine += word + " ";

    finalLine.pop_back();

    // if still maxWidth is not acheived
    int leftSpaces = maxWidth - finalLine.size();

    while (leftSpaces--)
        finalLine += " ";

    ans.push_back(finalLine);

    return ans;
}

int main()
{
    vector<string> arr = {"This", "is", "an", "example", "of", "text", "justification."};
    int width = 16;

    vector<string> ans = fullJustify(arr, width);

    return 0;
}