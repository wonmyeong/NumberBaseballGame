# Program Requirements

1. 3�ڸ� random ���� ����
2. 3�ڸ� ���� �Է� �ޱ�
3. Ball/Strike �Ǵ�
4.Message ���

#TDO list

1. 3�ڸ� random ���� ����
	-answerNumberString = generate3DigitRandomNumber()
		- Random�Լ� ����ؼ� 3�ڸ� ���� ����
		-���ڸ� ���ڿ��� ��ȯ
		-3�ڸ� ���ڿ� ���ڸ� return
2. 3�ڸ� ���� �Է� �ޱ�
	-userNumberString = input3DigitNuber()
		-���ڿ��� 3�ڸ� ���� �Է� �ޱ�
		-3�ڸ� ���ڿ� ���ڸ� return

3. Ball/Strike �Ǵ�
	-NumberOfStrike = countStrike()
		-������ ��ġ�� ���ڸ� ���ؼ� strike �Ǵ�
		-strike ������ ���ڷ� return

	-NumberOfBall = countBall()
		-���� �ٸ� ��ġ�� ���ڸ� ���ؼ� ball �Ǵ�
		-ball ������ ���ڷ� return
4.Message ���
	-output()
		-Strike(numOfStrike), Ball(numberOfBall)