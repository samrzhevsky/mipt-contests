# E - Срединй вес исходящих рёбер
Задан ориентированый граф в виде списка рёбер. Каждому ребру приписан вес - натуральное число. Необходимо определить количество исходящих рёбер из каждой вершины и их суммарный вес. Рёбра перечислены в случайном порядке.

## Входные данные
На первой строке количество рёбер. Далее рёбра в формате <индекс начальной вершины> <индекс конечной вершины> <вес ребра>.

## Выходные данные
Информация о вершинах, из которых есть исходящие рёбра, в порядке возрастания индексов вершин. Каждая строка в формате <индекс вершины> <количество исходящих рёбер> <суммырный вес исходящих рёбер>

## Примеры
Вход|Выход
---|---
2<br>1 0 10<br>0 1 9|0 1 9<br>1 1 10
7<br>2 0 4<br>0 1 3<br>3 0 7<br>0 3 3<br>1 2 9<br>2 3 5<br>2 1 1|0 2 6<br>1 1 9<br>2 3 10<br>3 1 7

## [Решение](E.cpp)

---

# F-Нахождение минимального необходимого количества мостов

Одно разбросанное на островах Океании государство решило создать сеть автомобильных дорог (вернее, мостов). По каждому мосту можно перемещаться в обе стороны. Был разработан план очередности строительства мостов и известно, что после постройки всех мостов можно будет проехать по ним с каждого острова на каждый (возможно, через некоторые промежуточные острова). Переменные и функции с именем link запрещены.

Однако, этот момент может наступить до того, как будут построены все мосты. Ваша задача состоит в нахождении такого минимального количества мостов, после постройки которых ( в порядке строительства по плану ) можно будет попасть с любого острова на любой другой.

## Входные данные
На первой строке два числа: n (2 <= n <= 1000) - количество островов, m (1 <= m <= 20000) - количество мостов в плане. В следующих m строках задаются мосты, по два числа в каждой строке - номера соединяемых островов.

## Выходные данные
Требуется распечатать одно число — минимальное количество построенных мостов, после которых можно будет попасть с любого острова на любой.

## Примеры
Вход|Выход
---|---
2 1<br>1 0|1
4 4<br>0 3<br>0 2<br>1 2<br>1 0|3

## [Решение](F.cpp)

---

# G-Восстановление кратчайшего пути при помощи алгоритма Дейкстры

Дан взвешенный связный граф. Вершины пронумерованы от 0. Трeбуется с помощью алгоритма Дейкстры восстановить кратчайший путь от вершины s до f.

## Входные данные
На вход программе в первой строке подается четыре числа через пробел: n , m , s , f . Число n (2 <= n <= 1000) - число вершин в графе, m (1 <= m <= 20000) - число ребер. s и f - номера, соответственно, начальной и конечной вершин. В следующих m строках задаются ребра, по три числа в каждой строке - номера соединенных вершин и вес ребра.

## Выходные данные
Кратчайший путь между вершинами s и f.

## Примеры
Вход|Выход
---|---
2 1 0 1<br>1 0 5|0 1
4 5 0 3<br>0 1 10<br>0 2 40<br>1 2 15<br>0 3 20<br>3 1 5|0 1 3

## [Решение](G.cpp)

---

# H-Поиск расстояний от заданной вершины до всех остальных

Дан невзвешенный неориентированный связный граф. Вершины пронумерованы от 0. Трeбуется с помощью обхода в ширину найти расстояния от 0-й до всех остальных вершин.

## Входные данные
На вход программе в первой строке подаются через пробел два числа: n (2 <= n <= 1000) — число вершин в графе и m (1 <= m <= 20000) — число рёбер. В следующих m строках задаются ребра: по два числа в каждой строке — номера соединённых вершин.

## Выходные данные
Требуется распечатать n чисел, каждое на новой строке. В первой строке — расстояния от 0-й вершины до 0-й, во второй - от 0-й до 1-й, в третьей — от 0-й до 2-й и т.д.

## Примеры
Вход|Выход
---|---
2 1<br>1 0|0<br>1
6 7<br>2 3<br>2 0<br>5 2<br>1 0<br>1 2<br>5 1<br>4 1|0<br>1<br>1<br>2<br>2<br>2

## [Решение](H.cpp)

---

# I - Дерево - сбалансированность
Реализуйте бинарное дерево поиска для целых чисел. Программа получает на вход последовательность различных натуральных чисел и строит из них дерево. Элементы в деревья добавляются в соответствии с результатом поиска их места. Балансировка дерева не производится.

Дерево называется сбалансированным, если для любой его вершины высота левого и правого поддерева для этой вершины различаются не более чем на 1. Определите, является ли дерево сбалансированным.

## Входные данные
На вход программа получает последовательность натуральных чисел меньших 10000.

## Выходные данные
YES - если дерево является сбалансированным, NO - в противном случае.

## Примеры
Вход|Выход
---|---
5 15 18|NO
6 12|YES
6 30 17 4 14 22|NO

## [Решение](I.cpp)

---

# plane

## Планарность графа
Проверить планарен ли граф.

## Входные данные
Описание графа в следующем формате:

```
V E
s1 e1
s2 e2
...
sE eE
```
где V — число вершин (V < 3000), E — число рбер (E < 10000), (si, ei) — описание i-го ребра. Вершины обозначаются числами 0, 1, ..., (V-1).

## Выходные данные
Одна строчка со словом "YES", если граф планарен, и "NO" — иначе.

## Примеры
Вход|Выход
---|---
2 1<br>0 1|YES
6 9<br>0 3<br>0 4<br>0 5<br>1 3<br>1 4<br>1 5<br>2 3<br>2 4<br>2 5|NO

## [Решение](plane.cpp)

---