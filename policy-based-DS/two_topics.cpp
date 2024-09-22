#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<std::pair<int, int>, null_type, std::less<std::pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    pbds;

int main() {

    pbds st;

    int n;
    std::cin>>n;

    int a[n];
    int b[n];
    int c[n];

    for(int i = 0; i < n; i++) {
        std::cin>>a[i];
    }
    for(int i = 0; i < n; i++) {
        std::cin>>b[i];
    }

    for(int i = 0; i < n; i++) {
        c[i] = a[i] - b[i];
    }

    long long int res = 0;

    for(int i = 0; i < n; i++) {
        res += st.size() - st.order_of_key({-c[i], 2e5});
        st.insert(std::make_pair(c[i], i));
    }

    std::cout<<res<<std::endl;
    return 0;
}