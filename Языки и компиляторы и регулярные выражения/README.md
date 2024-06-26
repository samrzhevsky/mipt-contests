# E - hh_mm

## Сложить часы и минуты
Поезд отправляется в h1:m1, время в пути h2:m2. Во сколько прибывает поезд?

## Входные данные
Через : с лидирующими нулями по одной на каждой строке:<br>
h1:m1 - время отправления поезда<br>
h2:m2 - время в пути

## Выходные данные
Через : с лидирующими нулями<br>
hh:mm - время прибытия поезда

## Примеры
Вход | Выход
--- | ---
12:01<br>17:56 | 05:57

## [Решение](E.java)

---

# O - Скобочки

Некоторые скобочные структуры правильные, другие — неправильные. Ваша задача — определить правильная ли скобочная структура.

## Входные данные
Слово в алфавите из двух круглых скобочек ( и ). Длина слова меньше 4001

## Выходные данные
Либо NO, либо YES

## Примеры
Вход | Выход
--- | ---
()|YES
)(|NO
()(())()|YES

## [Решение](O.java)

---

# brackets - [к()б()чки

## Сложные скобочки
Пусть скобочные структуры состоят из четырех различных пар скобок: () [] {} <>. Открывающая и закрывающая скобки должны быть одного типа. Ваша задача - определить правильная ли скобочная структура.

## Входные данные
Последовательность указанных скобок. Размер входных данных не превосходит 100Кб.

## Выходные данные
YES в случае если структура правильная и NO, если неправильная.

## [Решение](brackets.java)

---

# broadcast

## Широковещательный адрес
В IPv4 адрес компьютера состоит из 32 бит, которые для удобства могут быть записаны как 4 десятичные числа от 0 до 255, разделённые точками. С другой стороны, если IP адрес компьютера представить в двоичном виде, то N старших бит определяют адрес подсети, а остальные биты - адрес компьютера внутри этой подсети. Сетевой маской такой подсети является тоже набор из 32 бит, в котором те N старших бит, соответствующих адресу подсети, установлены в 1, а соответствующие адресу компьютера - в 0.

По введённым IP адресу и сетевой маске определите широковещательный адрес, в котором N старших бит - адрес подсети, а остальные биты установлены в 1.

## Примеры
Вход | Выход
--- | ---
192.168.254.4<br>255.255.252.0|192.168.255.255

## [Решение](broadcast.java)

---

# ip - Log ransomware
При анализе лога работы ransomware обнаружились IP-адреса, куда он отправлял ключи шифрования. Помогите Шерлоку Жеглову, работающему в Роскомнадзоре, достать эти адреса. IPv4-адреса могут быть записаны как 4 десятичные числа от 0 до 255, разделённые точками.

## Примеры
Вход | Выход
--- | ---
http<span>://</span>1.2.3.4/cgi-bin/serve-control<br>smb:\\\\3.4.6.8\data|1.2.3.4<br>3.4.6.8

## [Решение](ip.java)

---

# mac - Log ransomware
Теперь Шерлок Жеглов собирает mac-адреса (шестёрки байт, разделённых двоеточием, байт записан как шестнадцатеричные цифры)

## Примеры
Вход | Выход
--- | ---
Logged in from 3b:42:3F:01:Dc:43<br>connected to 3b:45:3a:01:ac:42<br>failed attempt from 3e:43:38:01:AC:32|3b:42:3F:01:Dc:43<br>3b:45:3a:01:ac:42<br>3e:43:38:01:AC:32

## [Решение](mac.java)

---

# I - Identify contigs

## Контиг
Для кодирования нуклеотидов используются 4 буквы A(аденин), T(тимин), G(гуанин), C(цитозин) Cколько раз данный контиг (короткая цепочка нуклеотидов) встречатся в ДНК?

## Входные данные
Первая строка: контиг длины не больше 50 нуклеотидов, вторая строка: ДНК, содержащая количество нуклеотидов не превосходящее 10^8

## Выходные данные
Число, равное количеству вхождений контига в ДНК.

0 - тоже целое число // Ваш Капитан Очевидность.

## Примеры
Вход | Выход
--- | ---
A<br>AAAA|4
T<br>ACGACG|0
AG<br>TAGCAG|2
AA<br>AAAA|3

## [Решение](I.java)

---

# qsort_time

## Сортировка экспериментов
Для каждого эксперимента записаны показания часов когда он начался и сколько минут длился. Отсортируйте времена окончания экспериментов (как оно показано на часах) в порядке возрастания. Ни один эксперимент не длился более 24 часов.

## Входные данные
N - количество экспериментов, 0 < N ≤ 100. Далее по одному эксперименту на строку в формате hh:mm min - время начала экспримента и сколько длился эксперимент в минутах.

## Выходные данные
Время окончания экспериментов в формате hh:mm (то есть с лидирующими нулями) по возрастанию.

## Примеры
Вход | Выход
--- | ---
3<br>07:22 16<br>23:00 120<br>12:08 54|01:00<br>07:38<br>13:02

## [Решение](qsort_time.java)

---
