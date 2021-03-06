# Bayes Naive Classifier
<a href="http://www.picshare.ru/view/8460334/" target="_blank"><img src="http://www.picshare.ru/uploads/180301/p4cC1p7vQg.png" border="0" width="930" height="456" title="Хостинг картинок PicShare.ru"></a>
## Введение. Цель проекта.
#### Введение
Классификация текста является распространенной задачей и может встретиться в разных сферах жизни.
Например:
- определить пол человека по его имени
- составление интернет - каталогов
- фильтрация спама
- подбор контекстной рекламы
- ограничение области поиска в поисковых системах
- классификация новостей / персональные новсти

#### Кому же в первую очередь пригодится данное приложение и для каких целей?
Всем, кто хочет экономить время на поиске информации или её группировке для различных целей.
Если вы студент и имеете большой объем документов по различным предметам, тогда вы быстро сможете отыскать нужный документ, зная только название предмета. Или же у вас собственный интернет магазин, и тогда без особых временных затрат вы сможете добавить в каталог описание товаров из различных категорий. А может, вас интересует к какому классу новостей относится информация, которая лежит в документе. 
#### Особенности приложения
Алгоритм обработки информации основан на наивном Байесовском классификаторе.

## Сравнение с аналогами
|Алгоритмы| Ссылка |Сложность реализации|Точность вычислений|Скорость выполнения|Требовательность к ресурсам|
|:--------|:------:|:------------------:|:-----------------:|:-----------------:|:-------------------------:|
|Naive Bayes Classifier| - |легкая|низкая|высокая|-
|SVM |<http://svmlight.joachims.org/>|средняя|средняя|высокая|+
|Multi-layer Perceptron |<http://scikit-learn.org/stable/modules/neural_networks_supervised.html>|высокая|высокая|средняя|++|

## Требования к апаратуре
Приложение предназначено для работы на ПК.

## Требования к программному обеспечению
|Пункты|Минимальные системные требования|Рекомендуемые системные требования|
|------|:------------------------------:|:--------------------------------:|
|Операционная система| Windows XP и аналогичные|Windows 10 64 Bit|
|Процессор|Intel Core 2 Duo|Intel Core i3|Intel Core i3-530 и аналогичные|
|RAM|512 Mb|1 GB|
|Место на жестком диске|20 Mb|60 Mb| 
-----------------------------------
## Средства разработки программного продукта
### Средства реализации программного кода
##### Язык программирования
С++
##### Средства создания пользовательского интерфейса 
QT
##### Средства управления версиями программного кода
DVCS (Github)
##### Средства получения исполняемого кода 
MS Visual Studio
##### Отладчики 
MS Visual Studio
##### Средства тестирования программ
QTest
##### Средства построения документации
Автоматическое построение документации с помощью doxygen
##### Средства проверки стиля и синтксиса
Автоматическая проверка стиля и синтаксиса cppcheck

## Характеристика продукта
*Расход памяти*  
формула, потребление памяти в худшем случае
*Производительность* 
время построения модели к количеству входных данных
*Надежность*
число удачных запусков к числу неудачных

## Формат входных данных
В качестве входных данных приложение принимает  документы (текстовые файлы), для которых будет расчитываться вероятность. Все текстовые файлы должны быть на английском языке. Формат текстового файла [txt](https://open-file.ru/types/txt)

## Формат выходных данных
На выходе: (на выбор пользователя)
1.	Вероятности принадлежности введенного текста к некоторому набору классов выбранных пользователем
2.	Наибольшая вероятность принадлежности текста к имеющимся классам текущей библиотеки

## Установка
Распаковать содержимое архива на диск
(или распаковать содержимое архива в папку на диске и запустить 
приложение uninstall.exe, которое установит приложение на ваш компьютер)
## Запуск
Для запуска приложения необходимо открыть  файл .exe →
в главном окне нажать на кнопку "Добавить файл"  → выбрать необходимые варианты  → "Выполнить"
## Интерфейс
Приложение будет иметь следующий вид:
<a href="https://ibb.co/dcMSnc"><img src="https://preview.ibb.co/h0hBDH/mail.png" alt="mail" border="0"></a><br /><a target='_blank' href='https://ru.imgbb.com/'></a><br />
Если пользователь выберет пункт: "Вероятности для каждого класса", то в новом окошке  будет отображаться следующая таблица:
<a href="https://ibb.co/iYy1DH"><img src="https://preview.ibb.co/d9tZYH/table.png" alt="table" border="0"></a><br /><a target='_blank' href='https://ru.imgbb.com/'></a><br />

## API библиотеки
### 1. Класс Байесов Классификатор (реализация наивного байесова классификатора)
### 2. Класс Обучение (на тестовой выборке)
### 3. Класс Считывание из файла (работа с потоками ввода, сохранение результатов)
### 4. Графический интерфейс реализованный встроенным графическим редактором Qt (GUI)
## Детали реализации
Приложение использует наивный байесовский классификатор . Он основан на теореме Байеса, которая позволяет рассчитать вероятность некоторого события на основании факта что произошло некоторое другое событие. Формула для решения задачи классификации формулируется следующим уравнением:
![](http://wojteklu.com/images/bayes_theorem@2x.png)
в которой C это класс, а D это сам документ. С помощью этой теоремы вычисляется вероятность присвоения класса C документу D, при условии, что мы знаем вероятность отношения документа D к классу С и независимые вероятности для C и для D. Вероятность для класса равна количеству документов в обучающем наборе, принадлежащих этому классу, разделенная на количество всех документов. Под словом "наивная" скрывается допущение что все слова в документе не зависят друг от друга, в таком случае, мы можем вычислить вероятность как сумму вероятностей для каждого отдельного слова.
![](http://wojteklu.com/images/bayes_theorem2@2x.png)
Мультиномиальная классификация учитывает еще и частоту вхождения. Вероятность присвоения класса для конкретного слова в мультиномиальном классификаторе можно выразить как:
![](http://wojteklu.com/images/conditional_probability@2x.png)

В качестве предобработки слов должна проводится лемматизация  или стемминг на основе алгоритма Портера.
На начальном моменте обучение будет происходить на основе 500 различных текстов. Количество текстов для обучения будет увеличиваться по мере необходимости.
## Тестирование
В качестве тестирования, были использованы утилита cppcheck по проверке C++ кода, а также были написаны UNIT тесты (набор классов для тестирования каждого модуля программного продукта и всего приложения в целом. (Примеры, блок схемы-алгоритмы)
## Ссылки и литература
1.	DataReview.info [Байесовский классификатор.Алгоритм](http://datareview.info/article/6-prostyih-shagov-dlya-osvoeniya-naivnogo-bayesovskogo-algoritma-s-primerom-koda-na-python/)
2.	4gophers.ru [Байесовский классификатор](https://4gophers.ru/articles/klassifikaciya-teksta/#.WpWumSXFLX6)
3.	habrahabr.ru [Байесовский классификатор](https://habrahabr.ru/post/146449/)
4.	crypto.pp.ua [Байесовский классификатор](http://crypto.pp.ua/2011/04/bajesovskij-klassifikator/)
5.	tartarus.org [Стеммер Портера](https://tartarus.org/martin/PorterStemmer/)

