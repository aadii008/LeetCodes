class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        unordered_map<int, int> m;
        int maxlen = 0;
        int l = 0;
        int n = s.length();
        int maxfreq = 0;
        for (int i = 0; i < n; i++)
        {
            m[s[i] - 'a']++;
            maxfreq = max(maxfreq, m[s[i] - 'a']);
            if ((i - l + 1) - maxfreq > k)
            {
                m[s[l] - 'a']--;
                l++;
            }
            else
            {
                maxlen = max(maxlen, i - l + 1);
            }
        }

        return maxlen;
    }
};