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
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    // vector<int> vec(4) ;
    // // cout << vec[0] <<"\n";
    // // cout << vec[1];
    // // cout << vec[2];
    // // cout << vec[3];
    // for (int i : vec){
    //     cout << i << endl;
    // }
    // vector<char> vec = {'a', 's', 'd'};

    // cout << "Size : " << vec.size() << endl;
    
    // for (char val : vec)
    // {
    //     cout << val << endl;
    // }

    vector<int> vec ;
    cout << "Size = "<<vec.size()<< endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "Size after pushback() = "<<vec.size()<< endl;

    cout << "Capacity : " << vec.capacity()<<endl ;//Capacity doubles ,, size stays the same...

    vec.pop_back(); //45 by default pop hoga;

    cout << "Size after popback() = "<<vec.size()<< endl;
    
    // for (int val : vec){
    //     cout << val <<endl;
    // }
    cout<<vec.front() << endl;

    cout<<vec.back() << endl;

    cout << vec.at(1)<<endl;

    return 0;
}
