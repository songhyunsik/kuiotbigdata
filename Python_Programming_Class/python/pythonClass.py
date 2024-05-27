class SoccerPlayer:
    def __init__(self, name, position, age):
        self.name = name
        # player1.name = '정현우'
        # player2.name = '정현우'
        self.position = position
        self.age = age
        # in age
        
    def change_age(self, age = 10):
        self.age = age
        # age = age

    def __str__(self):
        return f"Hello my name is {self.name}. My Position is {self.position}. And I'm {self.age} years old"

def main():
    player1 = SoccerPlayer('정현우', "좌측 수비수", 20)
    player2 = SoccerPlayer('송현식', "우측 수비수", 20)
    print(player1.name)
    print(player2.name)
    print(player1.position)
    print(player1.age)
    player1.change_age()
    print(player1.age)
    player1.change_age(41)
    print(player1.age)
    print(player1.__str__())
    print(player1)


if __name__ == "__main__":
    main()