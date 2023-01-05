
class Vaca:
    def __init__(self, puerto, años) -> None:
        self.puerto = puerto
        self.años = años

    def decirEdad(self):
        print(self.años)


a = Vaca(13, 8)
a.decirEdad()

b = Vaca(7, 10)
b.decirEdad()
/
