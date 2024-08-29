#4963

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>

int map[51][51];
int visited[51][51];
int dx[8] = { -1,-1,-1,0,0,1,1,1 };
int dy[8] = { 0,-1,1,-1,1,0,-1,1 };

int w, h;

void dfs(int y, int x)
{
	visited[y][x] = 1;

	for (int i = 0; i < 8; i++)
	{
		int next_x = x + dx[i];
		int next_y = y + dy[i];

		if (next_x < 0 || next_y < 0 || next_x >= w || next_y >= h)
		{
			continue;
		}
		if (map[next_y][next_x] == 1 && visited[next_y][next_x] == 0)
		{
			dfs(next_y, next_x);
		}
	}
}

int main(void)
{

	while (1)
	{
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				map[i][j] = 0;
				visited[i][j] = 0;
			}
		}

		scanf("%d %d", &w, &h);

		if (w == 0 && h == 0)
		{
			break;
		}

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				scanf("%d", &map[i][j]);
			}
		}

		int count = 0;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (map[i][j] == 1 && visited[i][j] == 0)
				{
					dfs(i, j);
					count++;
				}
			}
		}

		printf("%d\n", count);
	}

	return 0;
}
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

저작자표시