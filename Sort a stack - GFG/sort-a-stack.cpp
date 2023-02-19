//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void calc(stack<int>&s,vector<int>&v,int i)
{
    if(s.empty())
    {
        sort(v.begin(),v.end());
        return;
    }
    v.push_back(s.top());
    s.pop();
    calc(s,v,i+1);
    s.push(v[v.size()-i-1]);
}
void SortedStack :: sort()
{
   //Your code here
//   priority_queue<int,vector<int>,greater<int>>v;
//   while(!s.empty())
//   {
//       v.push(s.top());
//       s.pop();
//   }
   
//   while(!v.empty())
//   s.push(v.top()),v.pop();
vector<int>v;
   calc(s,v,0);
}