#include <QtTest/QtTest>
#include <string>
#include"stemmer.h"

using namespace std;
Q_DECLARE_METATYPE(wstring)
class TestTokenization : public QObject 
{
	Q_OBJECT
		private slots:
	void test_stemmer_data();
	void test_stemmer();
};
void TestTokenization::test_stemmer_data()
{
	QTest::addColumn<wstring>("Word");
	QTest::addColumn<wstring>("Stem");
	//�������� � ����� �����
	wstring word1(L"������������");
	wstring stem1(L"����������");

	wstring word2(L"��������");
	wstring stem2(L"�������"); 

	wstring word3(L"���������");
	wstring stem3(L"�������"); 
	
	wstring word4(L"��������������");
	wstring stem4(L"������������"); 

	wstring word5(L"�����������");
	wstring stem5(L"����������"); 

	wstring word6(L"�����������");
	wstring stem6(L"���������"); 

	QTest::newRow("word_1") << word1 << stem1;
	QTest::newRow("word_2") << word2 << stem2;
	QTest::newRow("word_3") << word3 << stem3;
	QTest::newRow("word_4") << word4 << stem4;
	QTest::newRow("word_5") << word5 << stem5;
	QTest::newRow("word_6") << word6 << stem6;

	//��������� � ����� �����
	wstring word7(L"���������");
	wstring stem7(L"��������"); 

	wstring word8(L"��������������");
	wstring stem8(L"�����������");

	wstring word9(L"�������������");
	wstring stem9(L"�����������");

	wstring word10(L"��������������");
	wstring stem10(L"�����������");

	wstring word11(L"���������");
	wstring stem11(L"���������"); 

	wstring word12(L"���������");
	wstring stem12(L"�������"); 

	wstring word13(L"��������������");
	wstring stem13(L"�������������"); 

	wstring word14(L"�������������");
	wstring stem14(L"�����������");

	QTest::newRow("word_7") << word7 << stem7;
	QTest::newRow("word_8") << word8 << stem8;
	QTest::newRow("word_9") << word9 << stem9;
	QTest::newRow("word_10") << word10 << stem10;
	QTest::newRow("word_11") << word11 << stem11;
	QTest::newRow("word_12") << word12 << stem12;
	QTest::newRow("word_13") << word13 << stem13;
	QTest::newRow("word_14") << word14 << stem14;
	//������ �����
	wstring word15(L"���������������");
	wstring stem15(L"�������������"); 

	wstring word16(L"����������");
	wstring stem16(L"��������");

	wstring word17(L"���������");
	wstring stem17(L"�������");

	wstring word18(L"��������������");
	wstring stem18(L"�����������");

	wstring word19(L"������������");
	wstring stem19(L"����������");

	wstring word20(L"�������������");
	wstring stem20(L"�������");

	QTest::newRow("word_15") << word15 << stem15;
	QTest::newRow("word_16") << word16 << stem16;
	QTest::newRow("word_17") << word17 << stem17;
	QTest::newRow("word_18") << word18 << stem18;
	QTest::newRow("word_19") << word19 << stem19;
	QTest::newRow("word_20") << word20 << stem20;

	wstring word21(L"������������");
	wstring stem21(L"�����");

	wstring word22(L"����������");
	wstring stem22(L"������");

	wstring word23(L"����������");
	wstring stem23(L"�����");

	wstring word24(L"�����������");
	wstring stem24(L"������");

	wstring word25(L"���������");
	wstring stem25(L"�����");

	QTest::newRow("word_21") << word21 << stem21;
	QTest::newRow("word_22") << word22 << stem22; 
	QTest::newRow("word_23") << word23 << stem23; 
	QTest::newRow("word_24") << word24 << stem24;
	QTest::newRow("word_25") << word25 << stem25;
}
void TestTokenization::test_stemmer()
{
	QFETCH(wstring, Word);
	QFETCH(wstring, Stem);
	stemming::russian_stem <wstring> stem;
	stem(Word);
	QCOMPARE(Word, Stem);
}
QTEST_MAIN(TestTokenization)
#include "stemmerTest.moc"
