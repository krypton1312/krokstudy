import math
print("Программа для высчета в каком подъезде и на каком этаже находится квартира.")
print("Бурлачено Егор, 29.09.2022, ИПЗ-20к-2")

front_doors = int(input("Введите количество парадных в доме: "))
floors = int(input("Введите количество этажей в доме: "))
floor_flat = int(input("Введите количество квартир на каждом этаже: "))
flats = int(input("Введите количество квартир в доме: "))
goal = int(input("Введите номер квартиры, которую вам нужно найти: "))

needed_front_door = goal/(floor_flat*floors)+1
b = goal%(floor_flat*floors)

check = floors*front_doors

if (check >= flats and goal <= flats):
    print("Ошибка")
else:
    needed_floor = b/floor_flat
    print("Подъезд: {0}, этаж: {1}".format(math.floor(needed_front_door), math.ceil(needed_floor)))


# Входные данные: количество этажей, количество квартир на этаж в парадной, количество парадных, номер квартиры
