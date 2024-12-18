import requests
import tkinter as tk
from tkinter import Label
import time

# API bilgileri
API_KEY = "04740ed77ecc41d3b76134259241712"  # WeatherAPI'den aldığın anahtar
CITY = "Ankara"  # Şehir ismi
URL = f"http://api.weatherapi.com/v1/current.json?key={API_KEY}&q={CITY}&lang=tr"

# Hava durumu verisini alan fonksiyon
def get_weather():
    try:
        response = requests.get(URL)
        if response.status_code == 200:
            data = response.json()
            condition = data["current"]["condition"]["text"]
            temp = data["current"]["temp_c"]
            return f"{CITY} Hava Durumu: {condition}, Sıcaklık: {temp}°C"
        else:
            return f"Hata: {response.status_code}"
    except Exception as e:
        return f"Hata: {e}"

# Arayüzü güncelleyen fonksiyon
def update_weather():
    weather_info = get_weather()
    label.config(text=weather_info)
    root.after(60000, update_weather)  # 5 saniye sonra tekrar çalıştır

# Tkinter arayüzü
root = tk.Tk()
root.title("Hava Durumu")
root.geometry("300x100")  # Pencere boyutu
root.resizable(False, False)  # Boyut değişimini kapat

# Etiket oluştur
label = Label(root, text="Hava durumu yükleniyor...", font=("Helvetica", 12), wraplength=280)
label.pack(expand=True)

# İlk güncelleme
update_weather()

# Arayüzü çalıştır
root.mainloop()
