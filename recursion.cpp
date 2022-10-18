#include<iostream>
using namespace std;
int reverse(int n,int temp)
{
	if(n==0)return temp;
	temp=temp*10+(n%10);
	reverse(n/10,temp);
}
void func_one_to_ten(int i)
{
	if(i>10) return ;
	cout<<i<<" ";
	func_one_to_ten(i+1);
}
void func_ten_to_one(int i)
{
	if(i<=0) return;
	cout<<i<<" ";
	func_ten_to_one(i-1);
}
void backtracing_one_to_ten(int i)
{
	if(i>10) return;
	func_one_to_ten(i+1);
	cout<<i<<" ";
}
void backtracing_ten_to_one(int i)
{
	if(i<=0) return;
	cout<<i<<" ";
	func_ten_to_one(i-1);
}
int fact(int num)
{
	if(num==1)return 1;
	return num*fact(num-1);
}
int main()
{
	int num;
	cin>>num;
	backtracing_ten_to_one(10);
	backtracing_one_to_ten(1);
	cout<<reverse(num,0);
	func_one_to_ten(1);
	func_ten_to_one(10);
	cout<<fact(num);
}
