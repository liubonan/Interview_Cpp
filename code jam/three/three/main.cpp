#include<iostream>
#include<fstream>
#include<stdio.h>
#include<vector>

using namespace std;
vector<long> flag_big; 
long getO(long t)
{
	long result=1;
	while((t=long(t/10)) != 0)
		result *=10;

	return result;
}

long C(int base)
{
	if(base <2)
		return 0;
	else
	{
		switch(base)
		{
		case 2:
			return 1;
		case 3:
			return 3;
		case 4:
			return 6;
		}
	}
}

void setflag(long b)
{
	flag_big.push_back(b);
}

bool getflag(long b)
{
	for(long k=0;k<flag_big.size();k++)
	{
		if(flag_big[k] == b)
			return false;
	}
	return true;
}

int main()
{

	ofstream output("C-small-attempt0.out");

	int n;

	long a[100],b[100];

	//bool flag[10001];

	

	ifstream fin("C-small-attempt0.in");

	fin >> n;

	for(int i=0;i<n;i++)
	{
		long ar,br;
		fin>>ar;
		fin>>br;
		a[i]=ar;
		b[i]=br;
	}
	fin.close();

	//for(int i=0;i<5001;i++)
		//flag[i]=true;

	for(int i=0;i<n;i++)
	{
		long count=0;
		int count_num;

		for(int j=a[i];j<=b[i];j++)	{
			count_num=1;
			if(getflag(j)){
				setflag(j);		
				output<<j<<endl;
				long temp=(long)(j / 10);
				long remain = j % 10;
				long O=getO(j);
				long current = remain*O+temp;
			
				while(getflag(current))
				{
					if(current>=a[i] && current<=b[i]){
						count_num++;
					}
						setflag(current);
						temp=(long)(current / 10);
						remain = current % 10;
						current = remain*O+temp;					
				}
			}

			count+=C(count_num);

		}

		output << "Case #"<<i+1<<": "<<count<<endl;

		//for(int s=0;s<10001;s++)
			//flag[s]=true;
		flag_big.clear();

		
	}

	
	output.close();
	return 0;
}