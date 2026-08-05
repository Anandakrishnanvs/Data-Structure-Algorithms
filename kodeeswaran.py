questions = ["which is the national animal?","Which is the national flower?","Who is prime minister of india?"]
options = [["A:Lion","B:Tiger","C:Rabbit"],["A:Lotus","B:Rose","C:Sun flower"],["A:Pinarayi","B:Modi","C:Trumph"]]
answers = ["Tiger","Lotus","Modi"]
print("-----------------------------------------------")
print("NINGALKUM AKAM KOODISWARAN")
print("-----------------------------------------------")
score = 0
for i in range(0,3):
    print(questions[i])
    print(options[i])
    c = input()
    if c == answers[i]:
        score = score + 1
        #print(answers[i])
print("Score:",score)
