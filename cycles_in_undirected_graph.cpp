class Solution
{
public:
    int dfs(int node, vector<int> vis, vector<int> v[])
    {
        if (vis[node] == 2)
            return 0;
        vis[node] = 1;

        for (int i = 0; i < v[node].size(); i++)
        {

            if (vis[v[node][i]] == 1)
                vis[v[node][i]] = 2;
            else
            {
                int flag = dfs(v[node][i], vis, v);
                if (!flag)
                    return 0;
            }
        }

        return 1;
    }
    bool possibleBipartition(int n, vector<vector<int>> &dislikes)
    {
        if (dislikes.empty())
            return true;
        vector<int> v[n + 1];
        for (auto i : dislikes)
        {
            v[i[0]].push_back(i[1]);
            v[i[1]].push_back(i[0]);
        }

        vector<int> vis(n + 1);

        for (int i = 1; i < n + 1; i++)
        {
            vis[i] = 1;
            for (int j = 0; j < v[i].size(); j++)
            {
                int test = dfs(v[i][j], vis, v);
                if (!test)
                    return 0;
            }
            vis[i] = 0;
        }

        return 1;
    }
};