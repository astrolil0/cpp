Contact Sınıfının Tanımlanması:

bir kişi için temel bilgileri (ad, soyadı, takma ad, telefon numarası ve gizli bilgi) içerecektir.
Bu sınıf içerisinde her bir bilgiyi saklamak için uygun veri tiplerini kullanmayı unutmayın.


PhoneBook Sınıfının Tanımlanması:

kişiler dizisini yönetecek ve temel komutları gerçekleştirecek metodları içerecektir.
aynı anda maksimum 8 kişiyi depolayacak tasarlanmalıdır 9. kişi eklenmeye çalışılırsa eskisinin yerine eklemelisiniz.


Main 
Ana fonksiyonda, kullanıcıdan komut girmesini isteyin.
ADD komutunu girdiğinde, yeni bir kişinin bilgilerini girmesini isteyin ve bu bilgileri PhoneBook sınıfına ekleyin.
SEARCH kayıtlı kişileri bir listeleme formatında görüntüleyin.
EXIT komutunu girdiğinde, programı sonlandırın.


Cin 
kullanıcı tarafından girilen verileri almak için kullanılır. 
konsola yazılan metin girişlerini yakalamak için kullanılır.
Bilgi Almak: Yeni kişinin bilgilerini kullanıcıdan almak için std::cin veya benzeri bir giriş yöntemi kullanabilirsiniz.


getline
okunan karakterleri alır ve satır sonuna kadar (yeni satır karakterine kadar) okuma yapar.