#include "endinglist.h"
#include <QTextCodec>
QString russian(const char * text)
{
   // ��������� ������ ���������, ������ ������� UTF8
   return QTextCodec::codecForName("CP1251")->toUnicode(text);
}
EndingList::EndingList()
{

    perGerund_1.push_back(russian("���"));
    perGerund_1.push_back(russian("�����"));
    perGerund_1.push_back(russian("�"));

    perGerund_2.push_back(russian("��"));
    perGerund_2.push_back(russian("����"));
    perGerund_2.push_back(russian("������"));
    perGerund_2.push_back(russian("��"));
    perGerund_2.push_back(russian("����"));
    perGerund_2.push_back(russian("������"));

    participle_1.push_back(russian("��"));
    participle_1.push_back(russian("��"));
    participle_1.push_back(russian("��"));
    participle_1.push_back(russian("��"));
    participle_1.push_back(russian("�"));

    reflexive.push_back(russian("��"));
    reflexive.push_back(russian("��"));

    verb_1.push_back(russian("��"));
    verb_1.push_back(russian("��"));
    verb_1.push_back(russian("���"));
    verb_1.push_back(russian("��"));
    verb_1.push_back(russian("�"));
    verb_1.push_back(russian("�"));
    verb_1.push_back(russian("��"));
    verb_1.push_back(russian("�"));
    verb_1.push_back(russian("��"));
    verb_1.push_back(russian("��"));
    verb_1.push_back(russian("��"));
    verb_1.push_back(russian("��"));
    verb_1.push_back(russian("��"));
    verb_1.push_back(russian("��"));
    verb_1.push_back(russian("���"));
    verb_1.push_back(russian("���"));

    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("����"));
    verb_2.push_back(russian("����"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("��"));
    verb_2.push_back(russian("��"));
    verb_2.push_back(russian("��"));
    verb_2.push_back(russian("��"));
    verb_2.push_back(russian("��"));
    verb_2.push_back(russian("��"));
    verb_2.push_back(russian("��"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("��"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("��"));
    verb_2.push_back(russian("��"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("���"));
    verb_2.push_back(russian("��"));
    verb_2.push_back(russian("�"));

    participle_2.push_back(russian("���"));
    participle_2.push_back(russian("���"));
    participle_2.push_back(russian("���"));

    noun.push_back(russian("�"));
    noun.push_back(russian("��"));
    noun.push_back(russian("��"));
    noun.push_back(russian("��"));
    noun.push_back(russian("��"));
    noun.push_back(russian("�"));
    noun.push_back(russian("����"));
    noun.push_back(russian("���"));
    noun.push_back(russian("���"));
    noun.push_back(russian("��"));
    noun.push_back(russian("��"));
    noun.push_back(russian("�"));
    noun.push_back(russian("���"));
    noun.push_back(russian("��"));
    noun.push_back(russian("��"));
    noun.push_back(russian("�"));
    noun.push_back(russian("��"));
    noun.push_back(russian("���"));
    noun.push_back(russian("��"));
    noun.push_back(russian("��"));
    noun.push_back(russian("��"));
    noun.push_back(russian("�"));
    noun.push_back(russian("�"));
    noun.push_back(russian("��"));
    noun.push_back(russian("���"));
    noun.push_back(russian("��"));
    noun.push_back(russian("�"));
    noun.push_back(russian("�"));
    noun.push_back(russian("��"));
    noun.push_back(russian("��"));
    noun.push_back(russian("�"));
    noun.push_back(russian("��"));
    noun.push_back(russian("��"));
    noun.push_back(russian("�"));

    superlative.push_back(russian("���"));
    superlative.push_back(russian("����"));

    derivational.push_back(russian("���"));
    derivational.push_back(russian("����"));

    adjective.push_back(russian("ee"));
    adjective.push_back(russian("�e"));
    adjective.push_back(russian("�e"));
    adjective.push_back(russian("���"));
    adjective.push_back(russian("���"));
    adjective.push_back(russian("e�"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("e�"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("e��"));
    adjective.push_back(russian("���"));
    adjective.push_back(russian("e��"));
    adjective.push_back(russian("���"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("��"));
    adjective.push_back(russian("e�"));
}
endingList EndingList:: getEnding(ending end)
{
    switch(end)
    {
    case PERFECTIVE_GERUND_1:
        return perGerund_1;
    case PERFECTIVE_GERUND_2:
        return perGerund_2;
    case PARTICIPLE_1:
        return participle_1;

    case PARTICIPLE_2:
        return participle_2;
    case REFLEXIVE:
        return reflexive;
    case ADJECTIVE:
        return adjective;
    case NOUN:
        return noun;
    case VERB_1:
        return verb_1;
    case VERB_2:
        return verb_2;
    case SUPERLATIVE:
        return superlative;
    case DERIVATIONAL:
        return derivational;
    }
}
