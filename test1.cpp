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
			cout<<"��������˵�����:"<<endl;
			cin>>name;
			cout<<"��������˵�����:"<<endl;
			cin>>year;
			cout<<"��������˵����:"<<endl;
			cin>>heigh;
			cout<<"��������˵�����:"<<endl;
			cin>>weigh;
		}
		void output()
		{
			cout<<name<<"������Ϊ:"<<year<<'\t'<<"���Ϊ:"<<heigh<<'\t'<<"����Ϊ:"<<weigh<<endl;
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




