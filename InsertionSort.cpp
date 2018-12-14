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

	// �\��
	for (int i = 0; i < data.size(); i++)
		cout << data[i] << endl;

	// ���͑҂�
	cin.get();

	return 0;
}