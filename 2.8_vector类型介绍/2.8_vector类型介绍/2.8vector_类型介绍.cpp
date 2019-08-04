//vector和相配用的迭代器的基本使用方法。
#include<iostream>
#include<vector>
#include <string>
using namespace std;

//vector容器常用操作与内存释放
//实践程序:
//ServerName = 1区  //表示服务器名称
//ServerID = 100000 //表示服务器ID

struct conf
{
	string itemname;
	string itemcontent;
};
//char* getinfo(vector<conf*> &conflist, const char *item_name)
//{
//	for (auto pos = conflist.begin(); pos != conflist.end(); ++pos)//
//	{
//		if (strcmp((*pos)->itemname, item_name) == 0)
//		{
//			return (*pos)->itemcontent;
//		}
//	}
//	return nullptr;
//}
void getinfo(vector<conf> &conflist, string item_name)
{
	for (auto pos = conflist.begin(); pos != conflist.end(); ++pos)
	{
		if ((*pos).itemname == item_name)
			cout << (*pos).itemcontent;
	}
	cout << "server name nicht gefunden.";
	
}
int main()
{
	vector<conf> conflist;
	conf configer1;
	configer1.itemname = "server1";
	configer1.itemcontent = "100000";

	conf configer2;
	configer2.itemname = "server2";
	configer2.itemcontent = "111111";

	conflist.push_back(configer1);
	conflist.push_back(configer2);

	getinfo(conflist, "server");
	

	

	/*conf* pconf1 = new conf;
	strcpy_s(pconf1->itemname, sizeof(pconf1->itemname), "ServerName");
	strcpy_s(pconf1->itemcontent, sizeof(pconf1->itemcontent), "Zone 1");

	conf* pconf2 = new conf;
	strcpy_s(pconf2->itemname, sizeof(pconf2->itemname), "ServerID");
	strcpy_s(pconf2->itemcontent, sizeof(pconf2->itemcontent), "100000");

	vector<conf*> conflist;
	conflist.push_back(pconf1);
	conflist.push_back(pconf2);*/

	/*char* get_server_name = getinfo(conflist, "ServerName");
	if (get_server_name != nullptr)
	{
		cout << get_server_name << endl;
	}*/

	//释放内存，有new就一定要有delete
	//vector<conf*>::iterator pos;
	//pos = conflist.begin();
	//for (pos; pos != conflist.end(); ++pos)
	//{
	//	delete (*pos);//这个是我们在conflist内自己增加的内容一定要自己释放。
	//}
	//conflist.clear();//conflist是迭代器，这个释放可有可无，系统执行完会自动释放。

	//实验是否可以打印。
	//auto begin = conflist.begin(); auto end = conflist.end();
	//for (auto pos =conflist.begin(); pos!= conflist.end(); ++pos)
	//{
	//	cout << (*pos)->itemcontent;
	//	cout << (*pos)->itemname;
	//}
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
//	
//	while (iter != familienChina.end())
//	{
//		cout << iter->mama << endl;
//		cout << iter->papa << endl;
//		cout << (*iter).honora << endl;
//		iter++;
//	}
//}

//代送器便利string类型举例。
//int main()
//{
//	string str = { "in der nach bin ich aleine und gluecklich." };
//	auto begin = str.begin();
//	auto end = str.end();
//	
//	for (auto itr = begin; itr!=end; ++itr)
//	{
//		*itr = toupper(*itr);
//		cout << *itr;
//	}

	/*for (auto &x : str)
	{
		x = toupper(x);
		cout << x;
	}*/
	
//}

//int main()
//{
	//int icount = 0;
	//vector<int> vector_value_1 = { 1,2,3,4,5};
	//vector<int> vector_value_2 = {6,7,8};
	//auto beg_value2 = vector_value_2.begin();
	//auto end_value2 = vector_value_2.end();

	//auto beg = vector_value_1.begin();
	//auto end = vector_value_1.end();

	//vector_value_1.insert(end, beg_value2, end_value2);
	///*while (beg != vector_value_1.end())
	//{
	//	beg = vector_value_1.insert(beg, icount + 80);
	//	icount++;
	//	if (icount > 10)
	//	{
	//		break;
	//	}
	//	beg++;
	//}*/
	//
	// beg = vector_value_1.begin();
	// end = vector_value_1.end();
	//while (beg != end)
	//{
	//	cout << *beg << "->";
	//	beg++;
	//}

//三:vector 迭代器失败举例说明
//int main()
//{
//	vector<int> vector_value_1 = {6,5,4,3,2,1};
//	auto beg = vector_value_1.begin();
//	auto end = vector_value_1.end();
//	for (auto x : vector_value_1)
//	{
//		vector_value_1.insert(end,888);//因为迭代器无法从新定位begin和end所以无法这样加入内容。
//		
//		break;					//除非在此处break。
//	}
//	for (auto beg = vector_value_1.begin(),end=vector_value_1.end(); beg!=end; beg++ )//然后从新创迭代器打印。
//	{
//		cout << *beg;
//		cout << "-";
//	}
//}


	//一:初认识vector容器
//int main()
//{
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
//}