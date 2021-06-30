


int find_median(vector<int> v)
{
priority_queue<int> pq;

for (auto i = v.begin(); i != v.end(); i++)
{
pq.push(*i);
}
if (pq.size() % 2 != 0)
{
int mid = pq.size() / 2;
int k = 0;
while (k < mid)
{
k++;
pq.pop();
}
return pq.top();
}

else
{
int m2 = pq.size()/2;
int m1 = m2-1;
int k=0;
while(k<m1)
{ 
    k++; 
    pq.pop();
    
}
int n1= pq.top(); 
pq.pop(); 
int n2=pq.top();
return (n1+n2)/ 2;
} 

}