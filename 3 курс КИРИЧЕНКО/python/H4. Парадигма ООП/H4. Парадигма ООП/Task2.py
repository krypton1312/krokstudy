print("H4. Парадигма ООП")
print("Бурлаченко Егор, ІПЗ-20к-2, 15.11.2022 ")

class English:
  def greeting(self):
    print ("Hello, how are you?")

class Spanish:
  def greeting(self):
    print ("Hola, como estas?")

def intro(language):
  language.greeting()

john = English()
jose = Spanish()
intro(john) 
intro(jose) 

