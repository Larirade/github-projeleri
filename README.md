# C++ Öğrenme Serüvenim

Bu depo, C++ dilinde temelden başlayarak geliştirdiğim mantık uygulamalarını ve algoritmaları içermektedir. Her proje, yeni bir programlama kavramını pekiştirmek amacıyla yazılmıştır.

### 📌 Projeler

* **Hesap Makinesi (`01-hesapmakinesi.cpp`)**  
  **Özet:** Kullanıcıdan alınan sayılarla temel dört işlem yapar.  
  **Kazanım:** Değişkenler, kullanıcıdan girdi alma (`cin`) ve aritmetik operatörler.

* **Temel Giriş Sistemi (`02-login_sistemi.cpp`)**  
  **Özet:** Sabit bir kullanıcı adı ve şifre ile basit bir doğrulama yapar.  
  **Kazanım:** Karar yapıları (`if-else`) ve string karşılaştırmaları.

* **Gelişmiş Giriş Sistemi: Hak Sınırı (`03-loginsistemi2.cpp`)**  
  **Özet:** Kullanıcıya belirli bir giriş hakkı tanır; haklar tükendiğinde sistemi kilitler.  
  **Kazanım:** Sayaç mantığı, döngü içerisinde hata kontrolü ve kullanıcı deneyimi.

* **Dinamik Stok Takip Sistemi (`04-InventorySystem.cpp`)**  
  **Özet:** Market/Depo yönetimi simülasyonu. Stok görüntüleme, ekleme ve negatif stok engelleme yapar.  
  **Kazanım:** `switch-case` menü yapısı, `while` döngüsü ile süreklilik ve mantıksal sınır kontrolleri.

* **Restoran Sipariş & Hesap Sistemi (`05-RestoranHesapSistemi.cpp`)**  
  **Özet:** Kullanıcının menüden seçim yaparak sipariş verdiği ve anlık olarak toplam hesabını takip edebildiği bir sistemdir.  
  **Kazanım:** Kümülatif toplama (`+=`) mantığı, döngü içerisinde matematiksel işlem yönetimi.

* **Sıcaklık Takibi & Buzlanma Uyarısı (`06-SicaklikTakibi.cpp`)**  
  **Özet:** 5 günlük sıcaklık verilerini bir diziye alıp, donma noktası ve altındaki (`<=0`) değerleri tespit ederek anlık uyarı veren bir sistemdir.  
  **Kazanım:** Diziler (Arrays), indis yönetimi ve döngü içinde dizi verisi işleme.

* **Dizi Tersten Yazdırma & Eleman Arama (`07-dizi_tersten_yazdirma_ve_arama.cpp`)**  
  **Özet:** Kullanıcıdan alınan 5 sayıyı diziye kaydeder, tersten ekrana basar ve girilen bir sayının dizide olup olmadığını doğrular.  
  **Kazanım:** Dizileri tersten döngüye sokma (`for (int i=4; i>=0; i--)`), Linear Search (Doğrusal Arama) algoritması ve bayrak (`bool`) kullanımı.

* **Dizi Elemanlarını Dönüştürme & Güncelleme (`08-dizi_eleman_guncelleme.cpp`)**  
  **Özet:** Dizi içindeki çift sayıları 2 ile çarpar, tek sayıları ise 1 artırarak hafızadaki yerinde günceller ve yeni diziyi ekrana basar.  
  **Kazanım:** Dizi elemanlarını doğrudan bellekte güncelleme (Array Mutation) ve modül (`%`) operatörü ile çift/tek sayı tespiti.

---

### 🛠️ Geliştirme Araçları
* **Dil:** C++
* **Editör:** Visual Studio Code
* **Versiyon Kontrol:** Git & GitHub