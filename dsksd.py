import cv2

# Haarcascade sınıflandırıcısını yükleyin
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Kamerayı başlat
cap = cv2.VideoCapture(0)

while True:
    # Kameradan görüntü al
    ret, frame = cap.read()
    
    if not ret:
        print("Kameradan görüntü alınamadı.")
        break

    # Görüntüyü yatay eksende çevirerek ayna yansıması oluştur
    mirrored_frame = cv2.flip(frame, 1)

    # Görüntüyü gri tonlamaya çevir
    gray = cv2.cvtColor(mirrored_frame, cv2.COLOR_BGR2GRAY)

    # Yüzleri tespit et
    faces = face_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=5, minSize=(30, 30))

    # Tespit edilen yüzleri çerçeve içine al
    for (x, y, w, h) in faces:
        cv2.rectangle(mirrored_frame, (x, y), (x + w, y + h), (255, 0, 0), 2)

    # Görüntüyü göster
    cv2.imshow("Ayna Yansımalı Yüz Takibi", mirrored_frame)

    # 'q' tuşuna basıldığında döngüyü sonlandır
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Kaynakları serbest bırak
cap.release()
cv2.destroyAllWindows()
