from random import randint
x=['rock','papers','scissors']

computer = x[randint(0,2)]
player=False

while player==False:
  
  

       player=input("Do you choose rock,paper or scissors?")

if player==computer:
        print("Its a tie!")
elif player=='rock':
        if computer=='paper':
            print("You loose")
            
        else:
            print("You  win")
          
elif player=='paper':
        if computer=='scissors':
            print("You loose")
            
        else:
           print("you win")
      
elif player=='scissors':
        if computer=='paper':
            print("You loose")
           
else:
            print("You win")
            
print("Invalid play,try again!")



        
    
     

