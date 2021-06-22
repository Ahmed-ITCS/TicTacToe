board = {"1":" ","2":" ","3":" ","4":" ","5":" ","6":" ","7":" ","8":" ","9":" "}
boardkey = []

for key in board:
    boardkey.append(key)

def printboard(board):
    print(board['1']+"|"+board['2']+"|"+board['3'])
    print("-+-+-")
    print(board['4']+"|"+board['5']+"|"+board['6'])
    print("-+-+-")
    print(board['7']+"|"+board['8']+"|"+board['9'])

def game ():
    turn = "x"
    count = 0

    for i in range(10):

        printboard(board)
        move = input(turn+" it's your turn do your move please")

        if board[move] == ' ':
            board[move] = turn
            count = count + int(1)
            print(count)
        else:
            print("That place is already filled.\nMove to which place?")
            continue

        if count >=5:
            if board['1'] == board['2'] == board['3'] != " ":
                printboard(board)
                print("game over")
                print(turn+" player won ")
                break
            elif board['4'] == board['5'] == board['6'] != " ":
                printboard(board)
                print("game over")
                print(turn+" player won ")
                break
            elif board['7'] == board['8'] == board['9'] != " ":
                printboard(board)
                print("game over")
                print(turn+" player won ")
                break
            elif board['1'] == board['4'] == board['7'] != " ":
                printboard(board)
                print("game over")
                print(turn+" player won ")
                break
            elif board['2'] == board['5'] == board['8'] != " ":
                printboard(board)
                print("game over")
                print(turn+" player won ")
                break
            elif board['3'] == board['6'] == board['9'] != " ":
                printboard(board)
                print("game over")
                print(turn+" player won ")
                break
            elif board['1'] == board['5'] == board['9'] != " ":
                printboard(board)
                print("game over")
                print(turn+" player won ")
                break
            elif board['3'] == board['5'] == board['7'] != " ":
                printboard(board)
                print("game over")
                print(turn+" player won ")
                break
        
        
        if count == 9 :
           print("It's a tie")
      
        if turn =='x':
            turn = 'o'
        else:
            turn = 'x'

game()
print(board['1'])
