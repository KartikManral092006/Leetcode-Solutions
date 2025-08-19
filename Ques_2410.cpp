class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i = 0 ,j =0 ;

        int match_Count = 0 ;
           while(i < trainers.size() && j < players.size()){
                if(players[j] <= trainers[i]){
                    match_Count++;
                    j++;
                    i++;
                }else{
                 i++;
                }
             }

        return match_Count;
    }
};
