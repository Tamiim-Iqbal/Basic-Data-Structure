// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         stack<char>s1;
//         stack<char>s2;

//         for (char c:s)
//         {
//             if (c == '#')
//             {
//                 if (s1.empty()) continue;
//                 else s1.pop();
//             }
//             else 
//             {
//                 s1.push(c);
//             }  
//         }
//         for (char c:t)
//         {
//             if (c == '#')
//             {
//                 if (s2.empty()) continue;
//                 else s2.pop();
//             }
//             else 
//             {
//                 s2.push(c);
//             }  
//         }
//         if (s1==s2) return true;
//         else return false;
//     }
// };