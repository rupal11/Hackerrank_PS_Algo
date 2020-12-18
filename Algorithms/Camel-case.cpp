#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int i=0;
    int word =0;
    for(i=0;s[i]!='\0';++i)
    {
        if(s[i]>=65 && s[i]<=90)
         word++;
    }
    return word+1;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
