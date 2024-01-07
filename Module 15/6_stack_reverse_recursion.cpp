// void reverseStack(stack<int> &s) {
//     // Write your code here
//     if(s.empty()) return;
//     int x = s.top();
//     s.pop();
//     reverseStack(s);

//     stack<int>ns;
//     while(!s.empty())
//     {
//         ns.push(s.top());
//         s.pop();
//     }
//     ns.push(x);
//     while(!ns.empty())
//     {
//         s.push(ns.top());
//         ns.pop();
//     }

// }