#include<iostream.h>
#define M 2
class FAMILY
{
	private:
		char name[20];
		int year;
		double heigh;
		double weigh;
	public:
		void input()
		{
			cout<<"请输入此人的名字:"<<endl;
			cin>>name;
			cout<<"请输入此人的年龄:"<<endl;
			cin>>year;
			cout<<"请输入此人的身高:"<<endl;
			cin>>heigh;
			cout<<"请输入此人的体重:"<<endl;
			cin>>weigh;
		}
		void output()
		{
			cout<<name<<"的年龄为:"<<year<<'\t'<<"身高为:"<<heigh<<'\t'<<"体重为:"<<weigh<<endl;
		}

};
int main()
{
	FAMILY S1[M];
	for(int i=1;i<=M;i++)
	{
		S1[i].input();
		S1[i].output();
	}
	return 0;
}




