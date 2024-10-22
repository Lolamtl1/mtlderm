#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int X,Y;
class Excel
{
   public:
   int arrary[100][100]={{0}};

   void input()
   {
     cout<<"please input X and Y as rows and colmns and then input the chart"<<endl;
     cin>>X>>Y;
     for(int i=0;i<=X-1;i++)
     {
        for(int j=0;j<=Y-1;j++)
      {
         cin>>arrary[i][j];
      }
     }

   }
   int emptycheck()
   {
      for(int i=0;i<=X-1;i++)
      {
         for(int j=0;j<=Y-1;j++)
         {
            if(arrary[i][j]!=0)
            {
               return 1;
            }
         }
      }
   }
   void display()
   {
      for(int i=0;i<=X-1;i++)
      {
         for(int j=0;j<=Y-1;j++)
         {
            cout<<arrary[i][j]<<'\t';
         }
            cout<<endl;
      }
   }
   void binarization()
   {
      for(int i=0;i<=X-1;i++)
      {
         for(int j=0;j<=Y-1;j++)
         {
            if(arrary[i][j]!=0)
            cout<<"0";
            else
            cout<<".";
         }
         cout<<endl;
      }
   }
   void dot()
   {
      int x,y,value;

      A:
      cout<<"please input x and y as row and colmn and input its value"<<endl;

      cin>>x>>y>>value;

      if((x>=0),(x<=X-1),(y>=0),(y<=Y-1))
      arrary[x][y]=value;
      else
      goto A;
      
      cout<<endl;
   }
   void frame()
   {
      int x,y,z,h,value;

      B:
      cout<<"please input x and y and z and h as row and colmn and the wide and the high and input its value"<<endl;

      cin>>x>>y>>z>>h>>value;

      if(1)
      {
         for(int i=y;i<=(y+z-1);i++)
            arrary[x][i]=value;

         for(int i=x;i<=x+h-1;i++)
            arrary[i][y]=value;

         for(int i=y;i<=y+z-1;i++)
            arrary[x+h-1][i]=value;

         for(int i=x;i<=x+h-1;i++)
          arrary[i][y+z-1]=value;
      }  
      else
      goto B ;
      cout<<endl;
   }
   void thresholding()
   {
      int t;      
      cout<<"please input a threshold"<<endl;
      cin>>t;
      
      for(int i=0;i<=X-1;i++)
      {
         for(int j=0;j<=Y-1;j++)
         {
             if(arrary[i][j]<=t)
             arrary[i][j]=0;
         }
         cout<<endl;
      }
      
   }
   void flip()
   {
      for(int i=0;i<=X-1;i++)
      {
         for(int j=0;j<=(Y-1)/2;j++)
         {
            swap(arrary[i][j],arrary[i][Y-j-1]);
         }
         cout<<endl;
      }
   }
   void output()
   {
      for(int i=0;i<=X-1;i++)
      {
         for(int j=0;j<=Y-1;j++)
            cout <<arrary[i][j]<<' ';
         cout << endl;
      }
   }
   void spin()
   {
      int a[Y][X];
      {
         for(int j=0;j<Y;j++)
         {
            for(int i=X-1,n=0;i>=0;i--,n++)
            {
               a[j][n]=arrary[i][j];
            }
            swap(X,Y);
            for(int i=0;i<=X-1;i++)
            {
               for(int j=0;j<=Y-1;j++)
               {
                  arrary[i][j]=a[i][j];
               }
            }
         }
         cout<<endl;
      }
   }
   private:

};
Excel rm;
int main()
{
 cout<<"show 3.1"<<endl;
 
 X=5,Y=7;

 for(int i=0;i<=X-1;i++)
 rm. arrary[i][0]=255;

 for(int i=0;i<=X-1;i++)
 rm.arrary[i][Y-1]=255;

 for(int j=0;j<=Y-1;j++)
 rm.arrary[0][j]=255;

 for(int j=0;j<=Y-1;j++)
 rm.arrary[X-1][j]=255;

 rm.arrary[0][0]=0;
 
 rm.display();


 cout<<"let's see 3.3"<<endl;
 cout<<"please input the chart"<<endl;

  do
  {
   rm.input();  /* code */
  } while (rm.emptycheck()==0);

 rm.thresholding();
 cout<<"after thresholding and binarizating"<<endl;
 rm.binarization();


 cout<<"let's see 3.4"<<endl;
 int output=1;

  while (output!=0/* condition */)
  {
    int a;
    cout<<"cin 1 to dot,2 to frame,3 to flip,4 to spin"<<endl;
    cin>>a;
    if(a==1)
    {
      rm.dot();
      rm.binarization();
      cout<<endl;
    } 
    else if(a==2)
    {
     rm.frame();
     rm.output();
    }
    else if(a==3)
    {
     rm.flip();
     rm.binarization();
     cout<<endl;
    }
    else if(a==4)
    {
     rm.spin();
     rm.binarization();
     cout<<endl;
    }

    else
      cout<<"cin 1 to dot,2 to frame,3 to flip,4 to spin"<<endl;

      cout<<"cin 0 to quit"<<endl;
    cin >> output;

   }
 return 0;
}