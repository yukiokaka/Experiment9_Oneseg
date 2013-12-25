
sed -e "s/(//g" $1 > tmp1.txt
sed -e "s/)/ /g" tmp1.txt > tmp2.txt
sed -e "s/,/ /g" tmp2.txt > tmp3.txt
sed -e "s/+j\*/ /g" tmp3.txt > tmp4.txt

i=0
cnt=0

while read f1 f2
do
    echo "#10 begin //$i"
    echo "    ar<=$f1;"
    echo "    ai<=$f2;"
    echo "end"
    i=`expr $i + 10`
done < tmp4.txt


rm tmp1.txt tmp2.txt tmp3.txt tmp4.txt
