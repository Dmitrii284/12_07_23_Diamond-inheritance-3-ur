﻿/*
Компановка класса и какие проблемы у ромбовидного наследования

## Компановка класса

Компановка класса
- поля
-методы
-Функции родительского класса 

Способы компановки:
-Агрегация - ( Вхоят те поля которые не несут ответственность за работу класса)
	- Поля отсутсвие которых не влечет последствия для существования класса(Это Контейнеры, )
	Пример : Создадим для игры пульт управления  У него есть компонент Модуль питания(. Сам пульт управления может существовать хотя мы вытощили из него батарейки)
	Пример: Печатная плата и корпус Печатной машинки( Потеря платы - это потеря самой печатой машинки)
	Пример: Квартира (Есть пол и потолок + стены) Но если чего то не будет то Квартира не будет существовать)
-Композиция
	- Методы класса(всегда часть композиции)
	-Поля класса (взависимости от того как работает класс)
	Пример : Если поле класса содержит Ссылку -- Это композиция (т.к без нее (ссылки) то класс существовать не сможет)

-Наследование - Объект наследника получает в себя Композицию Родителя И в нутри Этой композиции Поля будут для наследника Агрегацией
(Без объекта родителя Наследник существовать не может(Наследство полей получает по тем - же правам что и Родитель)
(То что было Агрегацией у Родителя у Наследника будет Агрегацией А Обект у родителей будет неотемлемая композиционная часть)
                  -------------\
				  Родительнский класс
				  ------------------ 2 поля на правах Агрегации
				  ------------------2 поля на правах Композиции
				  -----------------

				  Мы создаем Объект наследник
				  ---------------- (он имеет свое Агрегационное поле)
				  ----------------- (он имеет свое Компохционное оле поле)


	Все что было у Родителя Перетекает в наследника в таком же статусе Просто Поля будут Композиционными.) - Без них онработать не сможет значит.

	Тоесть В Наследника Перейдет Обект Родителя Как Композиция(Без него не сможет существовать) 
	А в нутри этого поля родителя (свойства Полей ) будут ля наследника как Агрегационные.
	Если поля Родителя стали Композицией в полях класса Наследника то это надо делать в ручную.

## Ромбовидное наследование  - Это наследники 3-его, 4-огоб 5- ого порядка.
	Тут есть проблемы (Может не компилироваться код(Надо переопределяьт методы 3- его наследника)



*/
//## Ромбовидное наследование Пример кода и как с этим работать!!!

