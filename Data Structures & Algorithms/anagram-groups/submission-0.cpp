class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<std::vector<char>, std::vector<int>> letters;
        vector<vector<string>> toReturn;
        for (int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            std::vector<char> chars(str.begin(), str.end());
            std::sort(chars.begin(), chars.end());
            std::vector<int> ints = letters[chars];
            ints.push_back(i);
            letters[chars] = ints;
        }

        for (auto indices : letters) {
            std::vector<string> toOutput;
            for (int indexes : indices.second) {
                toOutput.push_back(strs[indexes]);
            }
            toReturn.push_back(toOutput);
        }
        return toReturn;
    }
};


/* 

Map <vector<char>, vector<int>: letters, strs indicies

iterate through strs and turn to char array
sort array
find key, or create new

iterate through the map create new vectors<string>


*/