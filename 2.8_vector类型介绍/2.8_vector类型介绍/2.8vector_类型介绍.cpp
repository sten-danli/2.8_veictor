//vector�������õĵ������Ļ���ʹ�÷�����
#include<iostream>
#include<vector>
using namespace std;
struct familien
{
	string papa;
	string mama;
};
int main()
{
	vector<familien> familienChina;
	familien fam1;
	fam1.mama = "Feng Shiyun";
	fam1.papa = "Li Dan ";
	familienChina.push_back(fam1);

	vector<familien>::iterator iter;
	iter = familienChina.begin();
	while (iter != familienChina.end())
	{
		cout << iter->mama << endl;
		cout << iter->papa << endl;
		iter++;
	}


	//vector<int> iv = { 22,33,44,55,66 };//����ͳ�ʼ��vector����
	//vector<int> ::iterator iter_first;
	//iter_first= iv.begin();	//���������begin()��
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
	//iter_first = iv.end();//���������end()
	//cout << *(iv.end()-1);//end()����ָ�����һ�����֣��������ֵ�ĺ�һλ������Ҫ��ȡ���һλֵ��Ҫ-1��

}