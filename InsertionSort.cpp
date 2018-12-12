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
	array<int, 5> array{5, 3, 4, 1, 2};

	for (int i = 1; i < 5; i++)
	{
		int x = array[i], k = i;

		while (k > 0 && array[k - 1] > x)
		{
			array[k] = array[k - 1];
			k = k - 1;
		}
		array[k] = x;
	}

	// 表示
	for (int i = 0; i < 5; i++)
		cout << array[i] << endl;

	// 入力待ち
	cin.get();

	return 0;
}