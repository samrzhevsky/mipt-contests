#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    int n;

    do
    {
        cin >> n;

        if (n != 0)
        {
            if (n > 0)
            {
                st.push(n);
            }
            else
            {
                if (!st.empty() && abs(n) < st.top())
                {
                    st.top() += n;
                }
                else if (!st.empty())
                {
                    st.pop();
                }
            }
        }
    } while (n != 0);

    cout << st.size() << " " << (st.empty() ? -1 : st.top()) << endl;
}