// #include<iostream>
// #include<vector>
// using namespace std ;

// int main(){

//     vector <int> vec = {1,2,3} ;
//     cout << vec[0];
//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {

//     vector<char> vec = {'a', 'b', 'c'};
//     cout << vec[0] << endl;
//     for (char val : vec)
//     {
//         cout << val << endl;
//     }

//     return 0;
// }
// functionsforvector
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<char> vec = {'x','y','z'};

//     cout <<"Size = "<< vec.size()<<endl;

//     for(char val : vec){
//         cout << val <<endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // vector<int> vec(4) ;
//     // // cout << vec[0] <<"\n";
//     // // cout << vec[1];
//     // // cout << vec[2];
//     // // cout << vec[3];
//     // for (int i : vec){
//     //     cout << i << endl;
//     // }
//     // vector<char> vec = {'a', 's', 'd'};

//     // cout << "Size : " << vec.size() << endl;

//     // for (char val : vec)
//     // {
//     //     cout << val << endl;
//     // }
//     return 0;
// }
////Subarray print:

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     for (int st = 0; st < vec.size(); st++)
//     {
//         for (int end = st; end < vec.size(); end++)
//         {
//             for (int i = st; i <= end; i++)
//             {
//                 cout << vec[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
////Max subarray sum bruteforce:
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {3, -4, 5, 4, -1, 7, -8};

//     int maxsum = INT16_MIN;
//     for (int st = 0; st < vec.size(); st++)
//     {
//         int currsum = 0;
//         for (int end = st; end < vec.size(); end++)
//         {
//             currsum += vec[end];
//             maxsum = max(currsum, maxsum);
//         }
//     }
//     cout << "The maximum subarray sum is: " << maxsum;
//     return 0;
// }
////By kadane's algo:
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int currsum=0,maxSum=INT16_MIN;
    vector<int>vec = {3,-4,5,4,-1,7,-8};
    for(int val: vec){
        currsum+=val;
        maxSum=max(currsum,maxSum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<< "The max subarray sum is: "<<maxSum ;
    return 0;

}

