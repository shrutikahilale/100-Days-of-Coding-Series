// #include <iostream>
// using namespace std;

// int findBoringString(string s)
// {
//     string substr;
//     for (int i = 0; i < s.size(); i++)
//     {
//         char c = s[i];
//         int j = i+1;
//         string temp = "";

//         while(j<s.size() && s[j] == s[i]) {
//             temp += s[j];
//             j++;
//         }

//         if(j!=i) {
//             substr = temp;
//         }
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         findBoringString(s);
//     }
//     return 0;
// }