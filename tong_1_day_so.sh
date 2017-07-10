echo "Nhap, in ra va tinh tong day so n phan tu tu ban phim"
echo "Nhap n"
 read n
for((i=0; i<n; i++))
	 do
		printf "Nhap phan tu thu a[$i]="
read a[$i]
done
for((i=0; i<n; i++))
	 do
echo "Day vua nhap gom cac phan tu"		
echo "a[$i] = "${[a$i]}
done
echo "Tong day vua nhap la"

