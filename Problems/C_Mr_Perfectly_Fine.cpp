#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        for (int i = 0; i < n; i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        int one = 0;
        int ten = 0;
        int doubleone = 0;
        int p_time_one = 200000+1;
        int p_time_ten = 200000+1;
        int p_time_doubleone = 200000+1;
        for (int i = 0; i < n; i++)
        {
            if(v[i].second==1){
                one = 1;
                if(v[i].first<=p_time_one){    
                    p_time_one = v[i].first;
                }
            }
            if(v[i].second==10){
                ten = 1;
                if(v[i].first<=p_time_ten){
                    p_time_ten = v[i].first;
                }
            }
            if(v[i].second==11){
                doubleone = 1;
                if(v[i].first<=p_time_doubleone){
                    p_time_doubleone = v[i].first;
                }
            }
        }


        int time_take_one = -1;
        if(one==1 && ten==1){
            time_take_one = p_time_one+p_time_ten;
        }
        
        if(doubleone && (one==1 && ten==1)){
            if(p_time_doubleone<=time_take_one){
                cout<<p_time_doubleone<<endl;
            }else{
                cout<<time_take_one<<endl;
            }
        }else if(doubleone){
                cout<<p_time_doubleone<<endl;
        }else if(one==1 && ten==1){
            cout<<time_take_one<<endl;
        }else {
            cout<<-1<<endl;
        }

    }
    
    return 0;
}