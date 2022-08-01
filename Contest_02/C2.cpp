#include<stdio.h>
#include<string.h>

using namespace std;

int a[1000];

int main() {

    int n,pos;
    while(~scanf("%d%d",&n,&pos)) {
        pos--;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }


        int output=0;
        for(int len=0;len<n;len++)
        {
            int j=pos-len;
            int j2=pos+len;

            if(j<0||j2>=n)
            {
                if(j>=0)
                {
                    if(a[j]==1)
                        output++;
                }
                if(j2<=n)
                {
                    if(a[j2]==1)
                        output++;
                }
            }

            else{
                if(a[j]==1&&a[j2]==1)
                {
                    if(len>0)output+=2;
                    else output++;
                }
            }
        }
        printf("%d\n",output);
    }
}