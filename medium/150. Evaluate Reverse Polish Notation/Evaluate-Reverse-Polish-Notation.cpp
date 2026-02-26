1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        int size=tokens.size();
5        vector<int>temp;
6        int a,b;
7        for (int i=0;i<size;i++){
8            if(tokens[i]!="/"&&tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*")
9            {
10                temp.push_back(stoi(tokens[i]));
11            }else{
12                b=*(temp.rbegin());
13                temp.pop_back();
14                a=*(temp.rbegin());
15                temp.pop_back();
16                    if(tokens[i]=="/"){
17                            if(b==0){
18                                break;
19                            }
20                            else{
21                            temp.push_back(a/b);
22                            }
23                        }
24                    else if(tokens[i]=="+"){
25                            temp.push_back(a+b);
26                        }
27                    else if(tokens[i]=="-"){
28                            temp.push_back(a-b);
29                        }
30                    else if(tokens[i]=="*"){
31                            temp.push_back(a*b);
32                        }
33            }
34        }
35        return temp.back();
36    }
37};