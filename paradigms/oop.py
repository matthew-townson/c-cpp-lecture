class Fruit:
    def __init__(self, name, weight):
        self.name = name
        self.weight = weight

    def getName(self):
        return self.name
    
    def getWeight(self):
        return self.weight

def main():
    fruitName = str(input('Input fruit name: '))
    fruitWeight = str(input('Input fruit weight: '))
    fruit = Fruit(fruitName, fruitWeight)
    print(fruit.getName())
    print(fruit.getWeight())

main()