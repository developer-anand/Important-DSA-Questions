#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long int n, npos = 0, nneg = 0, val; cin >> n;
        vector<long long int>pos, neg;


        for (int i = 0; i < n; i++)
        {
            cin >> val;
            if (val >= 0)
            {
                pos.push_back(val);
            }
            else
            {
                neg.push_back(val);
            }
        }

        nneg = neg.size();
        npos = pos.size();

        sort(neg.begin(), neg.end());

        sort(pos.begin(), pos.end());

        vector< long long int> ans;


        if ( npos >= 0 && nneg >= 5)
        {
            ans.push_back(neg[nneg - 1]*neg[nneg - 2]*neg[nneg - 3]*neg[nneg - 4]*neg[nneg - 5]);

        }

        if (npos >= 1 && nneg >= 4)
        {
            ans.push_back(neg[0]*neg[1]*neg[2]*neg[3]*pos[npos - 1]);

        }
        if (npos >= 2 && nneg >= 3)
        {
            ans.push_back(neg[nneg - 1]*neg[nneg - 2]*neg[nneg - 3]*pos[0]*pos[1]);

        }
        if (npos >= 3 && nneg >= 2)
        {
            ans.push_back(neg[0]*neg[1]*pos[npos - 3]*pos[npos - 2]*pos[npos - 1]);

        }
        if (npos >= 4 && nneg >= 1)
        {
            ans.push_back(neg[nneg - 1]*pos[0]*pos[1]*pos[2]*pos[3]);

        }
        if (npos >= 5 && nneg >= 0)
        {
            ans.push_back(pos[npos - 5]*pos[npos - 4]*pos[npos - 3]*pos[npos - 2]*pos[npos - 1]);

        }





        sort(ans.begin(), ans.end());

        cout << ans[ans.size() - 1] << endl;

    }

    return 0;
}
