class Solution {
public:

    string encode(vector<string>& strs) {

        string res;
        for (const auto& str : strs)
        {
            string length = to_string(str.size()) + '#';
            res.append(length);
            res.append(str);
        }

        return res;
    }

    vector<string> decode(string s) {

        vector<string> res;
        string len;

        for (int i=0; i<s.size(); i++)
        {
            if (s[i] != '#')
            {
                len.append({s[i]});
            }
            else
            {
                int length = stoi(len);
                string str = s.substr(i+1, length);
                res.push_back(str);
                len = "";
                i +=length;
            }
        }
        return res;
    }
};
