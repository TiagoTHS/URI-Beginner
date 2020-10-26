c1 = input()
c2 = input()
c3 = input()

dic = {'vertebrado':{'ave':{'carnivoro':'aguia', 'onivoro':'pomba'},'mamifero':
{"onivoro":"homem","herbivoro":"vaca"}}, 'invertebrado':{'anelideo':
{'hematofogo':'sanguessuga','onivoro':'minhoca'}, 'inseto':{'hematofago':'pulga', 'herbivoro':'lagarta'}}}

print(dic[c1][c2][c3])
