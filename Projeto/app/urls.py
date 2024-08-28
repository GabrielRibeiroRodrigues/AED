from django.urls import path
from . import views

urlpatterns = [
    path('lista/', views.lista_animais, name='lista_animais'),
    path('animal/<int:id>/', views.detalhes_animal, name='detalhes_animal'),
]
