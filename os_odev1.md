---- GRUP ----

>> Grup üyelerinizin adlarını ve e-posta adreslerini doldurun.

Adı Soyadı <email@ogr.deu.edu.tr>  
Adı Soyadı <email@ogr.deu.edu.tr>  
Adı Soyadı <email@ogr.deu.edu.tr>

---- ÖN HAZIRLIKLAR ----

>> Teslimatınızla ilgili herhangi bir ön hazırlık yorumunuz varsa lütfen burada belirtin.

>> Pintos dokümantasyonu, ders kitabı, ders notları dışında, teslimatınızı hazırlarken başvurduğunuz çevrimdışı veya çevrimiçi kaynakları belirtiniz.

                 ALARM SAATİ
                 ===========

---- VERİ YAPILARI ----

>> A1: Her yeni veya değiştirilen `struct` veya `struct` üyesi, global veya statik değişken, `typedef` veya enumerasyonun beyanını buraya kopyalayın. Her birinin amacını 25 kelime veya daha az bir şekilde tanımlayın.

---- ALGORİTMALAR ----

>> A2: timer_sleep() fonksiyonuna yapılan bir çağrıda neler olduğunu, zamanlayıcı kesme işleyicisinin etkilerini kısaca açıklayın.

>> A3: Zamanlayıcı kesme işleyicisi içinde harcanan süreyi minimize etmek için hangi adımlar atılmaktadır?

---- SENKRONİZASYON ----

>> A4: Birden fazla iş parçacığı aynı anda timer_sleep() fonksiyonunu çağırdığında yarış koşulları nasıl engellenir?

>> A5: timer_sleep() fonksiyonu çağrıldığında bir zamanlayıcı kesmesi meydana gelirse yarış koşulları nasıl engellenir?

---- GEREKÇE ----

>> A6: Bu tasarımı neden seçtiniz? Diğer düşündüğünüz tasarımlara kıyasla hangi açılardan daha üstün olduğunu düşünüyorsunuz?

             ÖNCELİKLE PLANLAMA
             ===================

---- VERİ YAPILARI ----

>> B1: Her yeni veya değiştirilen `struct` veya `struct` üyesi, global veya statik değişken, `typedef` veya enumerasyonun beyanını buraya kopyalayın. Her birinin amacını 25 kelime veya daha az bir şekilde tanımlayın.

>> B2: Öncelik bağışını izlemek için kullanılan veri yapısını açıklayın. Bir iç içe bağışı ASCII sanatı ile diyagramlayın. (Alternatif olarak, bir .png dosyası gönderin.)

---- ALGORİTMALAR ----

>> B3: Bir kilit, semafor veya koşul değişkeni için bekleyen en yüksek öncelikli iş parçacığının ilk önce uyanmasını nasıl sağlarsınız?

>> B4: lock_acquire() fonksiyonu bir öncelik bağışı oluşturduğunda olaylar sırasını açıklayın. İç içe bağış nasıl işlenir?

>> B5: lock_release() fonksiyonu, yüksek öncelikli bir iş parçacığının beklediği bir kilit üzerinde çağrıldığında olaylar sırasını açıklayın.

---- SENKRONİZASYON ----

>> B6: thread_set_priority() fonksiyonunda potansiyel bir yarış koşulunu açıklayın ve uygulamanızın bunu nasıl engellediğini açıklayın. Bu yarış koşulunu engellemek için bir kilit kullanabilir misiniz?

---- GEREKÇE ----

>> B7: Bu tasarımı neden seçtiniz? Diğer düşündüğünüz tasarımlara kıyasla hangi açılardan daha üstün olduğunu düşünüyorsunuz?

              GELİŞMİŞ PLANLAMA
              ==================

---- VERİ YAPILARI ----

>> C1: Her yeni veya değiştirilen `struct` veya `struct` üyesi, global veya statik değişken, `typedef` veya enumerasyonun beyanını buraya kopyalayın. Her birinin amacını 25 kelime veya daha az bir şekilde tanımlayın.

---- ALGORİTMALAR ----

>> C2: A, B ve C iş parçacıklarının nice değerleri sırasıyla 0, 1 ve 2. Her birinin recent_cpu değeri 0. Aşağıdaki tabloyu doldurun ve her bir iş parçacığı için her bir zamanlayıcı tikinden sonra yapılan planlama kararını, öncelik ve recent_cpu değerlerini gösterin:

timer  recent_cpu    priority   thread  
ticks   A   B   C   A   B   C   to run  
-----  --  --  --  --  --  --   ------  
 0  
 4  
 8  
12  
16  
20  
24  
28  
32  
36

>> C3: Planlayıcı spesifikasyonundaki herhangi bir belirsizlik tablodaki değerleri belirsiz hale getirdi mi? Eğer öyleyse, bunları çözmek için hangi kuralı kullandınız? Bu, planlayıcınızın davranışıyla uyumlu mu?

>> C4: Planlamayı kod içinde ve kesme bağlamı dışında yapılan işlerin maliyeti arasında nasıl böldüğünüz, performansı nasıl etkiler?

---- GEREKÇE ----

>> C5: Tasarımınızı kısaca eleştirin, tasarım seçimlerinizdeki avantajları ve dezavantajları belirtin. Bu kısmı üzerinde daha fazla zaman harcayabilseydiniz, tasarımınızı nasıl geliştirmek veya iyileştirmek isterdiniz?

>> C6: Görev, sabit nokta matematiği için ayrıntılı aritmetiği açıklasa da, bunu nasıl uygulayacağınız konusunda size açık bir yön bırakmaktadır. Bunu yaptığınız şekilde uygulamaya karar vermenizin nedeni nedir? Sabit nokta matematiği için bir soyutlama katmanı, yani soyut veri tipi ve/veya sabit nokta sayıları manipüle etmek için bir dizi fonksiyon veya makro oluşturduysanız, bunu neden yaptınız? Yapmadıysanız, neden yapmadınız?



