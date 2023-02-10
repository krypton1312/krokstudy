print("H4. Парадигма ООП")
print("Бурлаченко Егор, ІПЗ-20к-2, 15.11.2022 ")

const_password = "Password123"
class Editor:
    def edit_document():
        print("Редактирование документа недоступно для бесплатной версии")
    def view_document():
        print("Выполняется процесс просмотра файла...")

class ProEditor:
    def edit_document():
        print("Выполняется редактирование документа...")
    def view_document():
        print("Выполняется процесс просмотра файла...")


name = input("Здравствуйте, введите ваше имя: ")
print(f'{name}, у вас имеется лицензионный ключ?')
a = input("Yes - имеется\nNo - не имеется\n")
if a == "Yes" or a == "yes":
    licence_check = input(f"Отлично, введите код вашего лицензионного ключа: ")
    if licence_check == const_password:
        print("Лицензионный ключ подтвержден.\nКакое действие вы хотите выполнить?")
        action = input("Edit - редактирование документа, View - просмотр документа.\n")
        if action == "Edit" or action == "edit":
            ProEditor.edit_document()
        elif action == "View" or action == "view":
            ProEditor.view_document()
        else:
            print("Ошибка при вводе действия.")
else:
    print("Лицензионный ключ не был подтвержден, открылась бесплатная версия программы.\Какое действие желаете выполнить?")
    action = input("Edit - редактирование документа, View - просмотр документа.\n")
    if action == "Edit" or action == "edit":
        Editor.edit_document()
    elif action == "View" or action == "view":
        Editor.view_document()
    else:
        print("Ошибка при вводе действия.")
        

