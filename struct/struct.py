def Mahasiswa(name, age, address):
    return {'name': name, 'age': age, 'address': address}

mhs = Mahasiswa(
    name = "Rafki Amirul",
    age = 20,
    address = "Kota Tangerang"
)

print('Name : ', mhs ['name'])
print('Age : ', mhs['age'])
print('Address : ', mhs['address'])