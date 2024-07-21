#include<iostream>
#include<vector>
using namespace std;
int countGreaterThan(const vector<int>& vec, int x){
    int count = 0;
    for (const auto& element : vec){
        if (element > x)
            count++;
    }
    return count;
}
int main(){
    vector<int> vec{1, 2, 3, 4, 5, 6};
    int x = 3;
    cout << countGreaterThan(vec, x) << endl; 
    return 0;
}

//                                    2 Solution

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int max1 = arr[0], max2 = arr[1], max3 = arr[2];
    for(int i = 3; i < 7; i++){
        if(max1 < arr[i]){
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }else if(max2 < arr[i] && arr[i] != max1){
            max3 = max2;
            max2 = arr[i];
        }else if(max3 < arr[i] && arr[i] != max1 && arr[i] != max2){
            max3 = arr[i];
        }
    }
    cout << max1 << " " << max2 << " " << max3 << endl;
    return 0;
}

//                                    3 Solution

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec{1, 2, 3, 4, 5, 6, 7};
    bool flag = true;
    for(int i = 0; i < vec.size() - 1; i++){
        if(vec[i] > vec[i + 1]){
            flag = false;
            break;
        }
    }
    cout << (flag ? "Sorted" : "Not Sorted");
    return 0;
}

//                                    4 Solution

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    int n, sumOdd = 0, sumEven = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            sumEven += vec[i];
        }else{
            sumOdd += vec[i];
        }
    }
    cout << "The difference between the sum of elements at even indices to the sum of elements at odd indices is: " << abs(sumEven - sumOdd) << endl;
    return 0;
}

//                                    5 Solution

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[10];
    int n = 10;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(i%2==0){
            arr[i]+=10;
        }else{
            arr[i]*=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//                                    6 Solution

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
            ans=arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}

//                                      7 Solution

#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> arr = {1, 2, 3, 2, 1}; // Example array
    cout << (isPalindrome(arr) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}

//                                  8 Solution

// avg = getAverage( balance[0], 5 ) ;      error in this line balance[0] which contain single element not entire array
                                         