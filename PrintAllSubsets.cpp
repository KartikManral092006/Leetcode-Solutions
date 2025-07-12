#include <iostream>
#include<string>

void recPermute(std::string soFar , std::string rest){
    if(rest == ""){
        std::cout << soFar << std::endl;
    }else{
        recPermute(soFar + rest[0] , rest.substr(1));
        recPermute(soFar , rest.substr(1));
    }
}
int main() {
   std::string s = "abcd";
   recPermute("" , s);
    return 0;
// this concludes that for a string of length n there are only 2^n -1 subsets without consedring the empty subsets if empty subset is included the no of subsets become 2^n .
}
// recPermute("", "abc")
// ├── recPermute("a", "bc")
// │   ├── recPermute("ab", "c")
// │   │   ├── recPermute("abc", "")  --> print: "abc"
// │   │   └── recPermute("ab", "")   --> print: "ab"
// │   └── recPermute("a", "c")
// │       ├── recPermute("ac", "")   --> print: "ac"
// │       └── recPermute("a", "")    --> print: "a"
// └── recPermute("", "bc")
//     ├── recPermute("b", "c")
//     │   ├── recPermute("bc", "")   --> print: "bc"
//     │   └── recPermute("b", "")    --> print: "b"
//     └── recPermute("", "c")
//         ├── recPermute("c", "")    --> print: "c"
//         └── recPermute("", "")     --> print: ""
