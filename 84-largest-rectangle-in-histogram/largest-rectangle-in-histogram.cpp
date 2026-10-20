class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();

        vector<int> nsi(n);
        stack<int> st;
        for(int i = n-1; i >= 0; i--) {
            while(st.size() != 0 && arr[st.top()] >= arr[i]) st.pop();
            if(st.size() != 0) nsi[i] = st.top();
            else nsi[i] = n;
            st.push(i);
        }

        while(st.size() != 0) st.pop();

        vector<int> psi(n);
        for(int i = 0; i < n; i++) {
            while(st.size() != 0 && arr[st.top()] >= arr[i]) st.pop();
            if(st.size() != 0) psi[i] = st.top();
            else psi[i] = -1;
            st.push(i);
        }

        int max_area = INT_MIN;
        for(int i = 0; i < n; i++) {
            int width = nsi[i] - psi[i] - 1;
            int height = arr[i];
            int area = width * height;

            max_area = max(area, max_area);
        }

        return max_area;
    }
};