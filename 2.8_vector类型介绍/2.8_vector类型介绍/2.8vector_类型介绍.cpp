//vector和相配用的迭代器的基本使用方法。
#include<iostream>
#include<vector>
using namespace std;

int main()
{
//三:vector 迭代器失败举例说明
vector<int> vector_value_1 = {6,5,4,3,2,1};
auto beg = vector_value_1.begin();
auto end = vector_value_1.end();
for (auto x : vector_value_1)
{
	vector_value_1.insert(end,888);//因为迭代器无法从新定位begin和end所以无法这样加入内容。
	
	break;					//除非在此处break。
}
for (auto beg = vector_value_1.begin(),end=vector_value_1.end(); beg!=end; beg++ )//然后从新创迭代器打印。
{
	cout << *beg;
	cout << "-";
}




//二:vector 和 struct 一起使用方法举例实现
//struct familien
//{
//	string papa;
//	string mama;
//	int honora;
//};
//int main()
//{
//	vector<familien> familienChina;//创建一个容器。
//	familien fam1;
//	fam1.mama = "Feng Shiyun";
//	fam1.papa = "Li Dan ";
//	fam1.honora = 12000000;
//	familienChina.push_back(fam1);
//
//	vector<familien>::iterator iter;
//	iter = familienChina.begin();
//	while (iter != familienChina.end())
//	{
//		cout << iter->mama << endl;
//		cout << iter->papa << endl;
//		cout << (*iter).honora << endl;
//		iter++;
//	}

	//一:初认识vector容器
	//vector<int> iv = { 22,33,44,55,66 };//定义和初始化vector对象。
	//vector<int> ::iterator iter_first;
	//iter_first= iv.begin();	//定义代送器begin()。
	//while (iter_first !=iv.end())
	//{
	//	cout << *iter_first;
	//	cout << "->" ;
	//	
	//	++iter_first;
	//}
	//cout << "end";
	//cout << endl;
	//for (vector<int>::iterator iter = iv.begin(); iter != iv.end(); iter++)
	//{
	//	cout << *iter ;
	//	cout << "->";
	//}
	//iter_first = iv.end();//定义代送器end()
	//cout << *(iv.end()-1);//end()不是指向最后一个数字，而是最后值的后一位，所以要想取最后一位值得要-1。

}