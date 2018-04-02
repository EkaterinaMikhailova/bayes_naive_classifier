#include <QtTest/QtTest>
#include <string>
//#include"stopwords.h"

using namespace std;
Q_DECLARE_METATYPE(wstring)
class TestDeleteStopWord : public QObject
{
	Q_OBJECT
		private slots:
	void test__deleteStopWords_data();
	void test__deleteStopWords();
};
void TestDeleteStopWord::test__deleteStopWords()
{
	QTest::addColumn<wstring>("String_input");
	QTest::addColumn<wstring>("String_without_stop_words");

	// ���� ����� � ������ ������
	wstring inputStr6(L"� ���������� ��������� ��������");
	wstring withoutStop6(L"���������� ��������� ��������");

	//���� ����� � ������ � �������� ������
	wstring inputStr1(L"�� ������� �� ����� ������� ������� �������");
	wstring withoutStop1(L"������� ����� ������� ������� �������");

	//4 ���� ����� ������ 
	wstring inputStr2(L"��� ���� �� �������������� ��������");
	wstring withoutStop2(L"��������");

	//���� ����� � �����
	wstring inputStr3(L"������� ������� ���� ������� ��");
	wstring withoutStop3(L"������� ������� ���� �������");

	// ��� ���� ����
	wstring inputStr4(L"������ �������� ����� ������� ��������� �������");
	wstring withoutStop4(L"������ �������� ����� ������� ��������� �������");

	//������ �� ���� ����
	wstring inputStr5(L"�� ������� ������� ����� ��� ������");
	wstring withoutStop5(L"");
	// ���� ����� � �������� ������
	wstring inputStr6(L"��������� � ��������� ��� ��������");
	wstring withoutStop6(L"��������� ��������� ��������");

	QTest::newRow("string_1") << inputStr1 << withoutStop1;
	QTest::newRow("string_2") << inputStr2 << withoutStop2;
	QTest::newRow("string_3") << inputStr3 << withoutStop3;
	QTest::newRow("string_4") << inputStr4 << withoutStop4;
	QTest::newRow("string_5") << inputStr5 << withoutStop5;
	QTest::newRow("string_6") << inputStr6 << withoutStop6;
	
}
void TestDeleteStopWord::test__deleteStopWords()
{
	QFETCH(wstring, String_input);
	QFETCH(wstring, String_without_stop_words);
	StopWord::StopWord stopWords;
	stopWords.deleteStopWord(String_input);
	QCOMPARE(String_input, String_without_stop_words);
}
QTEST_MAIN(TestDeleteStopWord)
#include "stopWordTest.moc"
