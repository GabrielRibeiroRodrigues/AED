from django.shortcuts import render, get_object_or_404
from .models import Animal

def lista_animais(request):
    animais = Animal.objects.all()
    return render(request, 'lista_animais.html', {'animais': animais})

def detalhes_animal(request, id):
    animal = get_object_or_404(Animal, id=id)
    return render(request, 'detalhes_animal.html', {'animal': animal})
