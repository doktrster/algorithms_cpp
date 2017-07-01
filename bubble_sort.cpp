#include <iostream>
#include <vector>
using namespace std;

void swap(int &x, int &y);
void print_out(vector <int> v);

int main() {
	
	vector <int> v1;
	int flag;
	
	v1.push_back(9);
	v1.push_back(3);
	v1.push_back(7);
	v1.push_back(4);
	v1.push_back(1);
	v1.push_back(6);
	v1.push_back(2);
	v1.push_back(5);
	v1.push_back(8);
	
    print_out(v1);
    
    cout << endl;
    
	for(int n = 0; n < v1.size(); n++)
	{
	    flag = 0;
	    
    	for(int i = 0; i < v1.size() - 1; i++)
    	{
    	    if(v1[i] > v1[i+1])
    	    {
    	        swap(v1[i], v1[i+1]);
    	        flag = 1;
    	    }
    	}
    	
    	if(flag == 0) break;
    	
    	print_out(v1);
	}
	
	
	return 0;
}



void swap(int &x, int &y)
{
  int tmp = x;
  x = y;
  y = tmp;
}

void print_out(vector <int> v)
{
    for(int i = 0; i < v.size(); i++)
	{
	    cout << v[i] << ' ';
	}
	
	cout << endl;
}
