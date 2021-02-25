#include<bits/stdc++.h>
#define s 101
using namespace std;
int row,colum;
int visit[s][s];
string grid[s];
void check(int i, int j)
{
    if(i>0 && visit[i-1][j]==0 && grid[i-1][j]=='@')
    {
       // printf("1 = i = %d j = %d\n",i,j);
        visit[i-1][j]=1;
        check(i-1,j);
    }

    if(i+1<row && visit[i+1][j]==0 && grid[i+1][j]=='@')
    {
      //  printf("2 = i = %d j = %d\n",i,j);
        visit[i+1][j]=1;
        check(i+1,j);
    }

    if(j-1>=0 && visit[i][j-1]==0 && grid[i][j-1]=='@')
    {
       // printf("3 = i = %d j = %d\n",i,j);
        visit[i][j-1]=1;
        check(i,j-1);
    }

    if(j+1<colum && visit[i][j+1]==0 && grid[i][j+1]=='@')
    {
       // printf("4 = i = %d j = %d\n",i,j);
        visit[i][j+1]=1;
        check(i,j+1);
    }

    if(i-1>=0 && j-1>=0 && visit[i-1][j-1]==0 && grid[i-1][j-1]=='@')
    {
       // printf("5 = i = %d j = %d\n",i,j);
        visit[i-1][j-1]=1;
        check(i-1,j-1);
    }

    if(i+1<row && j+1<colum && visit[i+1][j+1]==0 && grid[i+1][j+1]=='@')
    {
       // printf("6 = i = %d j = %d\n",i,j);
        visit[i+1][j+1]=1;
        check(i+1,j+1);
    }

    if(i+1<row && j-1>=0 && visit[i+1][j-1]==0 && grid[i+1][j-1]=='@')
    {
       // printf("7 = i = %d j = %d\n",i,j);
        visit[i+1][j-1]=1;
        check(i+1,j-1);
    }

    if(i-1>=0 && j+1<colum && visit[i-1][j+1]==0 && grid[i-1][j+1]=='@')
    {
       // printf("8 = i = %d j = %d\n",i,j);
        visit[i-1][j+1]=1;
        check(i-1,j+1);
    }
}


int main()
{

    while(scanf("%d %d", &row, &colum)==2)
    {
        if(!row)break;
        int count=0;
        for(int i=0; i<row; i++)
        {
            cin>>grid[i];
        }
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<colum; j++)
            {
                if(grid[i][j]=='@' && visit[i][j]==0)
                {
                    visit[i][j]=1;
                    check(i,j);
                    count++;
                }

            }
        }
        printf("%d\n",count);
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<colum; j++)
            {
                visit[i][j]=0;
            }
        }

    }

    return 0;


}
