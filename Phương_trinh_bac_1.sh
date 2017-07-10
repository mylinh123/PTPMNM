clear
echo " Giai phuong trinh bac 1 (ax +b=c)"
echo "nhap a"
read a
echo "nhap b"
read b
if [ $a -eq 0 ]; then
echo " phuong trinh co vo so nghiem";
else
echo " phuong trinh co mot nghiem";
x=$(echo "scale=2; -$b/($a)"|bc);
echo $x;