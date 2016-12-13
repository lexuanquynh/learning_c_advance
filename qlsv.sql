go
drop database qlsv
go
create database qlsv
go
create table khoa
(
tenkhoa varchar(30) not null primary key,
sodienthoai varchar (12) null
)
go
create table lop
(
tenlop varchar(10) not null primary key,
tenkhoa varchar(30) null references khoa(tenkhoa),
siso int not null
)
go
create table sinhvien
(
masv varchar(10) not null primary key,
hoten varchar(30) not null,
ngaysinh smalldatetime not null,
gioitinh int not null,
namnhaphoc int not null,
tenlop varchar(10) not null references lop(tenlop)
)
go
create table monhoc
(
MaMH varchar(10) not null primary key,
TenMH varchar(30) not null,
tenlop varchar(10) not null references lop(tenlop),
soDVHTT int not null
)
go
create table ketqua
(
MaMH varchar(10) not null references monhoc(MaMH),
MaSV varchar(10) not null references sinhvien(masv),
Diem float not null
)
go