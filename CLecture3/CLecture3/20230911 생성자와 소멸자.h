#pragma once
#include<iostream>
using namespace std;

#pragma region Ŭ����
//����� ���� ������ �������� �Ӽ��� �Լ��� ���ԵǾ� ������, 
//Ŭ������ ���� ��ü�� �����Ͽ� �����ϰ� ����� �� �ִ� ����ü

//struct ��� class�� ���
//���� �Ӽ� ���� ����, ����Լ� ���� ����( void Attack() ���� �� )
//�����ϰ� ���� �Ӽ��� ���

class GameObject {		//Ŭ���� ����,		�޸𸮿� ����Ȱ� �ƴ� �ܼ��� ���赵 ����

	//���� ������
	/*Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ��� ���� ������ �����ϴ� ������.

	���� ������ : public, protected, private

	public : Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ����
	�׸��� Ŭ���� �ܺο��� ������ ����ϴ� ������

	protected : Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���������� ������ ����ϴ� ������

	private : Ŭ���� ���ο����� ������ ����ϴ� ������

	*/



public:
	float x;
	//�⺻ ���� ������ (private)
	void SendMessage() {
		//cout << "x : " << x << ", y : " << y << ", z : " << z << endl;
		cout << "�޽���" << endl;
		z = 300; //private �� ���ο����� ���ٰ���
	}
protected:
	double y;		//8		24�� �Ǿ ����Ʈ �е��� ��
private:
	float z;		//4	+ 4(�е���)
	//�׷��� y��� z�� double�� ���� 16�� ��


};


#pragma endregion

#pragma region �����ڿ� �Ҹ���
//������
//Ŭ������ �ν��Ͻ��� �����ȴ� �������� �ڵ����� ȣ��Ǵ� Ư���� ���

class Monster {
private:
	int health;

	//�Ӽ����� �����Ǿ����� ���� �ʱ�ȭ����
	//�ڵ�ȣ�� ��
public:
	Monster() {
		cout << "Monster ����" << endl;
	}
	//�������� ��� ��ü�� ������ �� �� �ѹ��� ȣ��Ǹ�
	//�����ڴ� ��ȯ���� �������� �ʱ� ������ 
	//�����ڰ� ȣ��Ǳ� ������ ��ü�� ���� �޸𸮴� �Ҵ����� ����

	//�Ҹ���
	//��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ ��� �Լ�.
	~Monster() {
		cout << "Monster �Ҹ�" << endl;
	}

	//�Ҹ��ڴ� ��ü�� �޸𸮿��� ������ �� �� �ѹ��� ȣ��Ǹ�,
	//�Ҹ��ڿ��� �Ű������� �����Ͽ� ����� �� ����


};

#pragma endregion



int main() {
#pragma region Ŭ����
	GameObject gameobject1;		//Ŭ���� �ܺ�
	GameObject gameobject2;

	gameobject1.SendMessage();
	gameobject2.SendMessage();

	//gameObject. �ϴ� ���� �����ּҿ��� 4�� �Ѿ
	//�迭���� ����ϰ� �����

	cout << sizeof(GameObject) << endl;

	//		 [�޸�]
	//		�ڵ� ����		<- �ּ�
	//		������ ����		(.rodata / init data)
	//		BSS ����		
	//	------������ ������ �޸� �ö�-----
	//		�� ����			
	//		���� ����		-> gameobject1, gameobject2
	//	SendMessage�� �Լ� �ּҿ� gameobject1, gameobject2 Ŭ������ �Լ��� ȣ���ϰ� ����
	// �Ű������� ���� �� ó�� �������� this��� �Լ�(�ڵ�)�� �־ �ڱ��� �ּҷ� �Լ��� ȣ����
	// 
	//

	//gameobject1.x = 100;
	//gameobject2.x = 120;

	//cout << gameobject1.x << endl;
	//cout << gameobject2.x << endl;

	//gameobject.x     -> ����ü������ �׳� �Ǿ����� class������ public �� ������ �ȵ�.
	//���� �����ڰ� �ʿ���
#pragma endregion

#pragma region �����ڿ� �Ҹ���
	Monster monster;

	Monster* ptr = new Monster;		//int * ptr = �ּ� ���� ������		class * ptr = �޸� �ּ� ���� 8byte
	//������ Ÿ�� ��������� ��������� (new in) X

	cout << sizeof(ptr) << endl;
	delete ptr;			//�Ҹ��ڰ� ��������� �̷��� �ؾ���
#pragma endregion






	return 0;
}