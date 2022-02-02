vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

long long int sum1=0;

   for(int i=0 ; i<n ; i++){

       sum1= sum1*10+a[i];

   }

   long long int sum2=0;

   for(int j=0 ; j<m ; j++){

       sum2 = sum2*10 + b[j];

   }

   

   long long int sum3 = sum1+sum2;

   vector<int> c;

   while(sum3!=0){

       int last = sum3%10;

       c.push_back(last);

       sum3/=10;

   }

   reverse(c.begin() , c.end());

   return c;

   

}
