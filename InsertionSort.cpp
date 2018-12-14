//=======================================================================================
//　アルゴリズム
//　課題：単純挿入法
//　名前：柳瀬 拓臣
//=======================================================================================

#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 5> data{5, 3, 4, 1, 2};

	for (int i = 1; i < data.size(); i++)
	{
		int x = data[i], k = i;

		while (k > 0 && data[k - 1] > x)
		{
			data[k] = data[k - 1];
			k = k - 1;
		}
		data[k] = x;
	}

	// 表示
	for (int i = 0; i < data.size(); i++)
		cout << data[i] << endl;

	// 入力待ち
	cin.get();

	return 0;
}