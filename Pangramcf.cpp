#include<iostream>
#include<string>
int main(){
    int n ;
    std::cin >> n ;
    std::string s ;
    std::cin >> s ;
    int arr[26] = {0};
    for(int i = 0 ; i < s.size() ;i++){
        arr[s[i] - 'a']++;
    }
    for(int i = 0 ; i < 26 ;i++){
        if(arr[i] == 0 ){
            std::cout << "NO" << std::endl;
            break ;
        }else{
            if(i == 25){
                std::cout << "YES" << std::endl;
            }
        }
    }
    return 0 ;
}
