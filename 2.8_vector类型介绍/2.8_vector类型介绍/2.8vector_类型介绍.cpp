//vector�������õĵ������Ļ���ʹ�÷�����
#include<iostream>
#include<vector>
using namespace std;

int main()
{
//��:vector ������ʧ�ܾ���˵��
vector<int> vector_value_1 = {6,5,4,3,2,1};
auto beg = vector_value_1.begin();
auto end = vector_value_1.end();
for (auto x : vector_value_1)
{
	vector_value_1.insert(end,888);//��Ϊ�������޷����¶�λbegin��end�����޷������������ݡ�
	
	break;					//�����ڴ˴�break��
}
for (auto beg = vector_value_1.begin(),end=vector_value_1.end(); beg!=end; beg++ )//Ȼ����´���������ӡ��
{
	cout << *beg;
	cout << "-";
}




//��:vector �� struct һ��ʹ�÷�������ʵ��
//struct familien
//{
//	string papa;
//	string mama;
//	int honora;
//};
//int main()
//{
//	vector<familien> familienChina;//����һ��������
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

	//һ:����ʶvector����
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