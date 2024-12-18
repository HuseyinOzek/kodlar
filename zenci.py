import cv2
import face_recognition
import numpy as np

# Kamerayı aç
video_capture = cv2.VideoCapture(0)

while True:
    # Kameradan kareyi al
    ret, frame = video_capture.read()
    
    # Görüntüyü RGB formatına çevir
    rgb_frame = frame[:, :, ::-1]
    
    # Yüzlerin konumlarını bul
    face_locations = face_recognition.face_locations(rgb_frame)
    
    for face_location in face_locations:
        # Yüzün konumlarını al
        top, right, bottom, left = face_location
        
        # Yüz bölgesini kes
        face_image = rgb_frame[top:bottom, left:right]
        
        # Yüzdeki ten rengini analiz et
        average_color = np.mean(face_image, axis=(0, 1))  # Ortalama renk (RGB)
        
        # Siyahi bir yüz tespiti için basit bir kural (örnek değerler)
        # Bu kısmı daha doğru sonuçlar için geliştirebilirsiniz
        if average_color[0] < 80 and average_color[1] < 80 and average_color[2] < 80:
            label = "Siyahi Yüz"
            color = (0, 255, 0)  # Yeşil çerçeve
        else:
            label = "Bilinmiyor"
            color = (0, 0, 255)  # Kırmızı çerçeve
        
        # Sonuçları görüntüye ekle
        cv2.rectangle(frame, (left, top), (right, bottom), color, 2)
        cv2.putText(frame, label, (left, top - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.9, color, 2)
    
    # Sonuçları göster
    cv2.imshow('Video', frame)
    
    # 'q' tuşuna basarak çık
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Kamerayı kapat
video_capture.release()
cv2.destroyAllWindows()
