#include<iostream>
using namespace std;
void menue();
void menue1();
void bubble_sort(int arr[],int elements);
void swap(int *a,int *b);
void print(int arr[],int elements);
void sort(string s[], int n);
void bubble_sort(int arr[],int elements)
{
    for(int i=0; i<elements; i++)
    {
        for(int j=0; j<elements-1; j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(&arr[j+1],&arr[j]);
            }
        }
    }
}
void swap(int *a,int *b)
{
    int num=*a;
    *a=*b;
    *b=num;
}
void sort(string s[], int n)
{
    for (int i=1 ;i<n; i++)
    {
        string temp = s[i];
  
       
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length())
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}
string pro[24]={"Pasta    ","Soda   ","Fruits  ","Vegetables","Soap   ",
    "Meat     ","Milk     ","ice       ","Candy  ","Cream   ","Bread","Juice\t",
    "Rice    ","Chips  ","PopCorn","Water\t","Jam     ",
    "Cheese ","Gum  ","Coffee     ",
    "Cake    ","Tea    ","Pie     ","Nuts     "};
int pri[24]={3,2,3,5,2,4,4,5,2,3,1,1,3,2,2,1,3,2,1,6,3,2,3,4};

void menue()
{
    for(int i=0; i<24; i++)
    {
        cout<<"\t\t"<<i+1<<"-";
        cout<<pro[i]<<"\t";
        cout<<pri[i]<<"SR";
        switch(i) {

            case 3:
                cout<<endl;
                break;

            case 7:
               cout<<endl;
                break;

            case 11:
            cout<<endl;
                break;
                
            case 15:
                cout<<endl;
                break;
                
            case 19:
                cout<<endl;
                 break;
                
            case 23:
                cout<<endl;
                    break;
        }
    }
    
}
void menue1()
{
    for(int i=0; i<24; i++)
    {
        
                  if(i==0 || i==1)
                  {    cout<<"\t\t"<<i+1<<"-";
                       cout<<pro[i]<<"\t\t\t";
                       cout<<pri[i]<<"SR"<<endl;
                  }
                   else if (i>1 && i<=14)
                   {    cout<<"\t\t"<<i+1<<"-";
                       cout<<pro[i]<<"\t\t";
                       cout<<pri[i]<<"SR"<<endl;
                   }
                    else if (i>14 && i<=23)
                    {    cout<<"\t\t"<<i+1<<"-";
                        cout<<pro[i]<<"\t";
                        cout<<pri[i]<<"SR"<<endl;
                    }
                  
    }
}
void print(int arr[],int elements)
{
   
    for(int i=0; i<elements; i++)
    {
        cout<<pri[i]<<"SR\t\t";
    }
    
   
}

int main()
{
    int loop,product;
    string in ,True="yes",code,value="Husneara",name,adress;
    int phone,sum=0;;
    double tot;
    
    cout<<endl;
       cout<<"\t\t\t\t\t\t\t\t\t« Welcome to our GROCERY🎐 »"<<endl;
       cout<<"Please Enter your \nName:"<<endl;
       cin>>name;
       cout<<"Phone number:"<<endl;
       cin>>phone;
       cout<<"Adress:"<<endl;
       cin>>adress;
       cout<<"-----------------------------------------------------------------------------------------------"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t* THE LIST📜 *"<<endl;
     menue();
     cout<<"Do you want to orgnize the list in Ascending order?"<<endl;
      cout<<">>";
      cin>>in;
      
      if(in==True){
         int n = sizeof(pro)/sizeof(pro[0]);
             sort(pro, n);
             bubble_sort(pri,24);
             menue1();
          
      }
    cout<<"-----------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t* How many product do you want to buy from this list 🛒? *"<<endl;
    cout<<">>";
    cin>>loop;
   
    
    for(int a=1; a<=loop; a++)
    {
       
        cout<<endl;
        cout<<"The poduct number is:"<<endl;
        cout<<">>";
        cin>>product;
       
        
       cout<<"\t\t"<<a<<"-";
       cout<<pro[product-1]<<"\t";
       cout<<pri[product-1]<<"SR";
       cout<<endl;
        sum=sum+pri[product-1];

    }
        cout<<"\t\t\t\t\t\t\t\t* The total Cost of your order is: "<<sum<<"SR *"<<endl;
        cout<<"-----------------------------------------------------------------------------------------------"<<endl;
        cout<<"--If you have Discount Coupon please enter it:🏷 >>";
        cin>>code;
   
        if(code==value){
                tot=sum*0.3;
        }
        else{
                tot=sum;
        }
        cout<<"-----------------------------------------------------------------------------------------------"<<endl;
        cout<<"\t\t* Your order Information is 📦 *"<<endl;
        cout<<" -------------------------------------------"<<endl;
      
        for(int line=1; line <7; line++)
        {
            switch(line)
            {
              case 2:
              {
                  cout<<"|"<<"\t\tName: "<<name<<endl;
                  break;
              }
              case 3:
               {
                   cout<<"|"<<"\t\tPhone Number: "<<phone<<endl;
                 break;
              }
              case 4:
               {
                  cout<<"|"<<"\t\tAddress: "<<adress<<endl;
                  break;
               }
               case 5:
               {
                    cout<<"|"<<"\t\tThe total Cost of your order is:"
                    <<tot<<"SR"<<endl;
                     break;
                }
              default:
              {
                  cout<<"|\t\t\t\t\t\t\t\t\t\t\t"<<endl;
                  break;
                }
            }
        }
        cout<<" -------------------------------------------"<<endl;
    
    cout<<"\t\t\t\t\t\t* Thank You For Shopping From Our Store🧡...Have a nice day"<<endl;
        system ("pause");
    return 0 ;
}

