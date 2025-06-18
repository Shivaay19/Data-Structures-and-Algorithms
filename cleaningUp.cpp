#include "headers.h"

// https://www.codechef.com/practice/course/heaps/HEAPF/problems/CLEANUP

int main() {
	int testCases;
	cin>>testCases;
	while(testCases--){
	    int n,m;
	    cin>>n>>m;
	    
	    int* tasks = new int[n+1];
	    for(int i=0; i<m; ++i){
	        int x;
	        cin>>x;
	        tasks[x] = -1;
	    }
	    vector<int> chef_Jobs,assistant_Jobs;
	    int turn = 1;  // 1 for chef and 0 for assistant
	    for(int i=1; i<=n; ++i){
	        if(tasks[i]==0){
	            if(turn==1){
	                chef_Jobs.push_back(i);
	                turn = 0;
	            }
	            else{
	                assistant_Jobs.push_back(i);
	                turn = 1;
	            }
	        }
	    }
	    if(!chef_Jobs.size()) chef_Jobs.push_back(-1);
	    if(!assistant_Jobs.size()) assistant_Jobs.push_back(-1);

	    for(auto &i:chef_Jobs) cout<<i<<" ";
	    cout<<"\n";
        
	    for(auto &i:assistant_Jobs) cout<<i<<" ";
	    cout<<"\n";
	}
	return 0;
}
