#include <iostream>
#include <fstream>

using namespace std;

ifstream in ("data.in");
ofstream out ("data.out");

int v1[255],v2[255], i, j, aux,frq[256],v1t,v2t=0,n,m,ok,k=0,vmax;
int main()
{
    in>>n>>m;

    for(i=0;i<n*m;i++)
        {in>>v1[i];v1t++;
          frq[v1[i]]++;
          if(vmax<v1[i])vmax=v1[i];
          }

    for(i=0;i<n*m;i++)
    {ok=0;
        for(j=0;j<vmax*2;j=j+2)
            if(v1[i]==v2[j])
        {
            ok=1;
            j=m*n;
        }
        if(!ok)
        {
            v2[k]=v1[i];
            k++;
            v2[k]=frq[v1[i]]; k++;
            if(frq[v1[i]]!=0)v2t+=2;
        }

    }

out<<v1t-v2t<<endl;







    return 0;
}
