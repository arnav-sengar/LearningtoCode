#i have created this file
from django.http import HttpResponse
def index(request):
    return HttpResponse('''<h1>Arnav Github</h1> <a href ="https://github.com/arnav-sengar">Arnav Github</a>''')
def about(request):
    return HttpResponse("My name is Arnav")
def idx(request):
    with open("MYSITE/one.txt") as f:
        a = f.read()
        return HttpResponse(a)
