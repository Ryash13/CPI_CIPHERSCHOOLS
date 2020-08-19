class Solution {
public:
    int numTilePossibilities(string tiles) {
        unordered_set <string> combinations; 
                
        std::function <void (string, string)> search = [&] (string curr, string remaining) 
        { 
            for (int i = 0; i < remaining.length(); i++)
            {
                string next = curr + remaining[i];
                if (combinations.find(next) == combinations.end())
                {
                    combinations.insert(next);
                }
                
                string cpy = ""+ remaining;
                cpy.erase(cpy.begin() + i);
                
                search(next, cpy);  
            }
        };
        
        search("", tiles);
        return combinations.size(); 
    }
};
