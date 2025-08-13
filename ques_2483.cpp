class Solution {
public:
    int bestClosingTime(string customers){
        int panelty = 0 ;
        int min_hours = 0 ;
        int min_panelty = 0 ;
        for(int i = 0; i < customers.length();i++){
            if(customers[i] == 'Y'){
                panelty--;
            }else{
                panelty++;
            }

            if(panelty < min_panelty){
                min_hours = i+1 ;
                min_panelty = panelty;
            }
        }
        return min_hours;
    }
};
