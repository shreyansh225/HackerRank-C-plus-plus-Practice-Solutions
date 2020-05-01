#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main()
 {
    int q, type,mark; 
    cin >> q; 
    map<string,int> m; 
    string name;
    for (int i=0; i<q; i++)
    {
        cin >> type >> name;
        if (type == 1)
        {
            cin >> mark;
            m[name] += mark;
        }
        else if (type == 2)
            m.erase(name);
        else if (type == 3 )
            //map<string,int>::iterator itr=m.find("Maps");
            cout << (m.find(name) == m.end()? 0 :m[name]) << "\n";
    }
    return 0;
}

/*


Sample Input

7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess

Sample Output

30
20
0
*/
