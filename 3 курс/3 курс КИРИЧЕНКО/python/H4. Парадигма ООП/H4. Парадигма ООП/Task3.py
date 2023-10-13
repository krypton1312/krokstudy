print("H4. Парадигма ООП")
print("Бурлаченко Егор, ІПЗ-20к-2, 15.11.2022 ")

class Car:
    def __init__(name):
        name._color = 'red'
    def get_color(name):
        print("red")
        return name._color
    def set_color(name, newcolor):
        print("color changed")
        name._color = newcolor
    def del_color(name):
        del name._color
    color = property(get_color, set_color, del_color)
    engine = "3.5"


Camry = Car()

Camry.color = "green"

print(Camry.color)


  
    


