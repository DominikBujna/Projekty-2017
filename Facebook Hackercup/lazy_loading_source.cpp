#include <iostream>
#include <vector>
//Dominik's code
using namespace std;
int getDays(){
}
int main() {
    int days;
    cin>>days;
    for(int i = 0; i < days; i++){
        int stuff;
        cin>>stuff;
        vector<int> items;
        for(int j = 0; j < stuff; j++){
            int nextitem;
            cin>>nextitem;
            items.push_back(nextitem);
        }
        sort(items.begin(),items.end());
        int trips=0;
        while(!items.empty()){
            int topItem = items.at(items.size()-1);
            items.pop_back();
            int multiplyer = 1;
            while( (topItem * multiplyer) < 50 && !items.empty()){
                items.erase(items.begin());
                multiplyer++;
            }
            if(topItem*multiplyer > 49){
               trips++;
            }
        }
        cout<<"Case #"<<i + 1<<": "<<trips<<endl;
    }
    return 0;
}