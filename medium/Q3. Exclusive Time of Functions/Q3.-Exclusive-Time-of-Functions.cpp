1class Solution {
2public:
3    vector<int> exclusiveTime(int n, vector<string>& logs) {
4        int size=logs.size();
5        vector<int>ans(n,0);
6        stack<int>st;
7        int prv_time=0;
8        for(int i=0;i<size;i++){
9            string tmp=logs[i];
10// reading log
11            stringstream ss(tmp);
12            string id_str, type, time_str;
13
14            getline(ss,id_str,':');
15            getline(ss,type,':');
16            getline(ss,time_str,':');
17            int id=stoi(id_str);
18            int s_time=stoi(time_str);
19
20        if(type=="start"){
21
22            if(!st.empty()){
23                ans[st.top()]+=s_time-prv_time;
24            }
25// always push even if stack is empty or not
26                st.push(id);
27                prv_time=s_time;
28        }
29        else{
30// +1 cause the end time is inclsive
31                ans[st.top()]+=s_time-prv_time+1;
32                st.pop();
33                prv_time=s_time+1;
34            }
35
36        }
37
38
39    return ans;
40        
41    }
42};

// another method to read log
        // for(auto log : logs){
        //     int f_col=log.find(":");
        //     int s_col=log.find(":",f_col+1);
        //     int id=stoi(log.substr(0,f_col));
        //     string type=stoi(f_col+1,s_col-f_col-1);
        //     int time = stoi(log.substr(s_col+1,));
        // }
