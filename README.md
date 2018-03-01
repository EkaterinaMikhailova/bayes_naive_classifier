# Bayes Naive Classifier
<a href="http://www.picshare.ru/view/8460334/" target="_blank"><img src="http://www.picshare.ru/uploads/180301/p4cC1p7vQg.png" border="0" width="930" height="456" title="Хостинг картинок PicShare.ru"></a>
## 1. Введение. Цель проекта.
####Введение
Классификация текста является распространенной задачей и может встретиться в разных сферах жизни.
Например:
- определить пол человека по его имени
- составление интернет - каталогов
- фильтрация спама
- подбор контекстной рекламы
- ограничение области поиска в поисковых системах
- классификация новостей / персональные новсти

####Кому же в первую очередь пригодится данное приложение и для каких целей?
Всем, кто хочет экономить время на поиске информации или её группировке для различных целей.
Если вы студент и имеете большой объем документов по различным предметам, тогда вы быстро сможете отыскать нужный документ, зная только название предмета. Или же у вас собственный интернет магазин, и тогда без особых временных затрат вы сможете добавить в каталог описание товаров из различных категорий.
####Особенности приложения
Алгоритм обработки информации основан на наивном Байесовском классификаторе.

## 2. Сравнение с аналогами
|Алгоритмы| Ссылка |Сложность реализации|Точность вычислений|Скорость выполнения|Требовательность к ресурсам|
|:--------|:------:|:------------------:|:-----------------:|:-----------------:|:-------------------------:|
|Naive Bayes Classifier| - |легкая|низкая|высокая|-
|SVM |<http://svmlight.joachims.org/>|средняя|средняя|высокая|+
|Multi-layer Perceptron |<http://scikit-learn.org/stable/modules/neural_networks_supervised.html>|высокая|высокая|средняя|++|

## 3. Требования к апаратуре
Приложение предназначено для работы на ПК.

## 4. Требования к программному обеспечению

## 5. Средства разработки программного продукта
###Средства реализации программного кода
#####Язык программирования
С++
#####Средства создания пользовательского интерфейса 
QT
#####Средства управления версиями программного кода
DVCS (Github)
#####Средства получения исполняемого кода 
MS Visual Studio
#####Отладчики 
MS Visual Studio
#####Средства тестирования программ
QTest
#####Средства построения документации
Автоматическое построение документации с помощью doxygen
#####Средства проверки стиля и синтксиса
Автоматическая проверка стиля и синтаксиса cppcheck

## 6. Характеристика продукта


## 7. Формат входных данных
На вход принимаются текстовые файлы в формате [txt](https://open-file.ru/types/txt)

## 8. Формат выходных данных

=======

## 4. Требования к программному обеспечению
|Пункты|Минимальные системные требования|Рекомендуемые системные требования|
|------|:------------------------------:|:--------------------------------:|
|Операционная система| Windows XP и аналогичные|Windows 10 64 Bit|
|Процессор|Intel Core 2 Duo|Intel Core i3|Intel Core i3-530 и аналогичные|
|RAM|512 Mb|1 GB|
|Место на жестком диске|10 Mb|30Mb| 
-----------------------------------
Требуется установленная Qt 4.7.4 и выше
## 5. Средства разработки программного продукта

## 6. Характеристика продукта
*Расход памяти*  
формула, потребление памяти в худшем случае
*Производительность* 
время построения модели к количеству входных данных
*Надежность*
число удачных запусков к числу неудачных
## 7. Формат входных данных


## 8. Формат выходных данных
На выходе: (на выбор пользователя)
1. Вероятности принадлежности введенного текста к некоторому набору классов выбранных пользователем
2. Наибольшая вероятность принадлежности текста к имеющимся классам текущей библиотеки

## 9. Установка
## 10. Запуск
## 11. Интерфейс
## 12. API библиотеки
## 13. Детали реализации
Приложение использует наивный байесовский классификатор . Он основан на теореме Байеса, которая позволяет рассчитать вероятность некоторого события на основании факта что произошло некоторое другое событие. Формула для решения задачи классификации формулируется следующим уравнением:
![](http://wojteklu.com/images/bayes_theorem@2x.png)
в которой C это класс, а D это сам документ. С помощью этой теоремы вычисляется вероятность присвоения класса C документу D, при условии, что мы знаем вероятность отношения документа D к классу С и независимые вероятности для C и для D. Вероятность для класса равна количеству документов в обучающем наборе, принадлежащих этому классу, разделенная на количество всех документов. Под словом "наивная" скрывается допущение что все слова в документе не зависят друг от друга, в таком случае, мы можем вычислить вероятность как сумму вероятностей для каждого отдельного слова.
![](http://wojteklu.com/images/bayes_theorem2@2x.png)
Мультиномиальная классификация учитывает еще и частоту вхождения. Вероятность присвоения класса для конкретного слова в мультиномиальном классификаторе можно выразить как:
![](http://wojteklu.com/images/conditional_probability@2x.png)

В качестве предобработки слов должна проводится лемматизация  или стемминг на основе алгоритма Портера.
## 14. Тестирование
## 15. Ссылки и литература
1.	DataReview.info [статья](http://datareview.info/article/6-prostyih-shagov-dlya-osvoeniya-naivnogo-bayesovskogo-algoritma-s-primerom-koda-na-python/)
2.	4gophers.ru [статья](https://4gophers.ru/articles/klassifikaciya-teksta/#.WpWumSXFLX6)
=======
## 14. Тестирование
## 15. Ссылки и литература
https://4gophers.ru/articles/klassifikaciya-teksta/#.Wpc3D-jFJPb

