//=======================================================================================
//�@�A���S���Y��
//�@�ۑ�F�P���}���@
//�@���O�F���� ��b
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

	// �\��
	for (int i = 0; i < 5; i++)
		cout << array[i] << endl;

	// ���͑҂�
	cin.get();

	return 0;
}