import pickle
import os.path

my_dict = {}
   
def saveData():
       with open('loginData.p', 'wb') as f:
        pickle.dump(my_dict, f, protocol=pickle.HIGHEST_PROTOCOL)

username = None
password = None
print("Welcome to login system 1.0")
print("by @ATGDroid (github.com/Kysela)")
print("Do you want to login or sign up?")
print("1. Login")
print("2. Sign up")
while 1:
 selectedOption = raw_input()
 if selectedOption.isdigit():
    selectedOption = int(selectedOption)
    if selectedOption == 1:
          if os.path.exists("loginData.p"):
              with open('loginData.p', 'rb') as f:
                my_dict = pickle.load(f)
              print(my_dict)
          while 1:
            username = raw_input("Enter your username")
            if username not in my_dict.keys():
               print("Unknown username, try again...")
               continue
            password = raw_input("Enter your password")
            if my_dict[username] != password:
               print("Wrong password, try again...")
               continue
            print("Successful login, congrats!")
            exit()
    elif selectedOption == 2:
         if os.path.exists("loginData.p"):
            with open('loginData.p', 'rb') as f:
              my_dict = pickle.load(f)
         while 1:
           username = raw_input("Enter your username")
           if username in my_dict.keys():
              print("This username already exists, try something else.")
              continue
           password = raw_input("Enter your password")
           my_dict[username] = password
           saveData()
           print("Successfuly registered, congrats!")
           exit()



         
