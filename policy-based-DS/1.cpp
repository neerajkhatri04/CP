#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, std::less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    pbds;

int main() {

    pbds st;
    st.insert(1);
    st.insert(3);
    st.insert(4);
    st.insert(10);
    st.insert(15);


    //Kth largest element O(logN)
    for(int i = 0; i < st.size(); i++) {
        std::cout<<i<<":"<<(*st.find_by_order(i))<<std::endl;
    }

    //Elements strictly smaller than N
    std::cout<<st.order_of_key(5);


    return 0;
}