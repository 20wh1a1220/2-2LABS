echo  “Enter a string:”
read strval
len=`expr "$strval" : '.*'`
echo "The length of the input string is $len"
