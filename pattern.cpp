// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=5;
//     int j;
//     for(int i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;

// }
//  return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=5;
//     int j;
//     for(int i=0;i<=n;i++){
//         for(j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;

// }
//  return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=5;
//     int j;
//     for(int i=0;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;

// }
//  return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=5;
//     int j;
//     for(int i=1;i<=n;i++){
//         for(j=1;j<=n+1-i;j++){
//             cout<<j;
//         }
//         cout<<endl;

// }
//  return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=5;
//     int j;
//     for(int i=1;i<=n;i++){
//         for(j=n;j>=i;j--){
//             cout<<n+1-j;
//         }
//         cout<<endl;

// }
//  return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         // for(int j=0;j<n-i-1;j++){
//         //     cout<<" ";
//         // }
//         cout<<endl;

// }
//  return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         // for(int j=0;j<n-i-1;j++){
//         //     cout<<" ";
//         // }
//         cout<<endl;

// }
//  return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=5;
//     for(int i=0;i<n;i++){


//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//    }
//    for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         // for(int j=0;j<n-i-1;j++){
//         //     cout<<" ";
//         // }
//         cout<<endl;
//    }

//  return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
    
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=4;i++){
//         for(int j=0;j<4-i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//  return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=35;
    int j;
    int i;
    i=n/10;
    j=n%10;

    cout<<i<<" "<<j;

 return 0;
}