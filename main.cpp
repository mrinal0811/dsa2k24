#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr;
    vector<pair<int,string>> arr;
    arr.push_back(make_pair(1,"apple"));//101
    arr.push_back(make_pair(3,"orange"));//102
    arr.push_back(make_pair(2,"banana"));//103
   
    arr.reserve(1000);
    /*cout<<arr[0].first<<" "<<arr[0].second<<endl;
    cout<<arr[1].first<<" "<<arr[1].second<<endl;
    cout<<arr[2].first<<" "<<arr[2].second<<endl;*/
    for(int i=0; i<3; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    pair<int, string> target = make_pair(2, "banana");
    auto result = find(arr.begin(), arr.end(), target);
    if(result!=arr.end()){
        cout<<"found "<<result->first <<":"<<result->second <<endl;
    }
    int targetid=2;
    auto result2 = find_if(arr.begin(),arr.end(),[targetid](const auto& target){return target.first==targetid;});
    if(result2!=arr.end()){
        cout<<"found "<<result2->first <<":"<<result2->second <<endl;
    }
    sort(arr.begin(),arr.end());
    for(const auto& target: arr){
        cout<<"found "<<target.first <<":"<<target.second <<endl;
    }
    
    return 0;
}
