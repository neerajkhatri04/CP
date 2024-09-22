#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, std::less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    pbds;

int main() {

    int arr[7] = {1,5,2,3,6,4,10};

    pbds st;
    int inv = 0;

    for(int i = 0; i < 7; i++) {
        st.insert(arr[i]);
        inv = inv + st.size() - st.order_of_key(arr[i])-1;
        std::cout<<"number greater than "<<arr[i]<<" on left : "<<st.size()-st.order_of_key(arr[i]) - 1<<std::endl;
    }

    std::cout<<inv<<std::endl;
    return 0;
}