 #include<iostream>
 using namespace std;

 int main(){

    int num=5;

    cout<<num<<endl;

    //address of operator -&

      cout<<"address of num is-----> "<<&num<<endl;


      int *ptr=&num;
      cout<<"the value in *ptr is -------> "<<*ptr<<endl;
      cout<<"the value in ptr is -------> "<<ptr<<endl;

      double d=4.3;
      double *p2=&d;
      cout<<"address of d is "<<&d<<endl;
      cout<<"address of p2 is "<<p2<<endl;
      cout<<"value at p2 is "<<*p2<<endl;


      cout<<"size of num is "<<sizeof(num)<<endl;
      cout<<"size of num pointer is "<<sizeof(ptr)<<endl;
      cout<<"size of d is "<<sizeof(d)<<endl;
      cout<<"size of p2 pointer is "<<sizeof(p2)<<endl;


    return 0;
 }